#include <iostream>
using namespace std;

void getTemperatureInputFromUser(){
    cout << "Please input 5 temperatures:\n";
    for (int i = 0; i < 5; i++) {
        string output = "Temperature nr" + to_string(i) + ":";
        cout << output;
    }
}

int main() {
    const int length = 5;

    getTemperatureInputFromUser();

    cout << "Hello, World!" << std::endl;
    return 0;
}
