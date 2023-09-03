#include <iostream>
using namespace std;


int main() {
    const int length = 5;
    int temperaturesUnder10 = 0, temperaturesBetween10and20 = 0, temperaturesOver20 = 0;

    string openingOutput = "Please input " + to_string(length) + " temperatures:\n";
    cout << openingOutput;
    for (int i = 0; i < 5; i++) {
        string output = "Temperature nr " + to_string(i) + ":";
        cout << output;
        double input;
        cin >> input;

        if (input < 10) {
            temperaturesUnder10++;
        } else if (input <= 20) {
            temperaturesBetween10and20++;
        } else {
            temperaturesOver20++;
        }
    }

    cout << "Temperatures under 10: " << temperaturesUnder10 << "\n";
    cout << "Temperatures between 10 and 20: " << temperaturesBetween10and20 << "\n";
    cout << "Temperatures over 20: " << temperaturesOver20 << "\n";
    return 0;
}