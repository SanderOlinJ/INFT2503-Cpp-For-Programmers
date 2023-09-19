#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::Box box;
  Gtk::Entry firstName;
  Gtk::Entry lastName;
  Gtk::Button button;
  Gtk::Label combinedNames;
  Gtk::Label firstNameLabel;
  Gtk::Label lastNameLabel;

  Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL) {
    set_title("Name Combiner");
    button.set_label("Combine names");
    firstNameLabel.set_text("First Name:");
    lastNameLabel.set_text("Last Name:");

    box.pack_start(firstNameLabel);
    box.pack_start(firstName);
    box.pack_start(lastNameLabel);
    box.pack_start(lastName);
    box.pack_start(button);
    box.pack_start(combinedNames);

    add(box);
    show_all();

    button.set_sensitive(false);

    firstName.signal_changed().connect([this]() {
      updateButtonState();
    });

    lastName.signal_changed().connect([this]() {
      updateButtonState();
    });

    button.signal_clicked().connect([this]() {
      combinedNames.set_text(firstName.get_text() + " " + lastName.get_text());
    });
  }

  void updateButtonState() {
    bool bothEntriesNotEmpty = !firstName.get_text().empty() && !lastName.get_text().empty();
    button.set_sensitive(bothEntriesNotEmpty);
  }
};

int main() {
  auto app = Gtk::Application::create();
  Window window;
  return app->run(window);
}
