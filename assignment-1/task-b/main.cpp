#include <iostream>
#include <fstream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    int length = 5;
    double temperatures[length];
    read_temperatures(temperatures, length);

    int temperaturesUnder10 = 0, temperaturesBetween10and20 = 0, temperaturesOver20 = 0;
    for (int i = 0; i < length; i++) {
        if (temperatures[i] < 10) {
            temperaturesUnder10++;
        } else if (temperatures[i] <= 20) {
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

void read_temperatures(double temperatures[], int length){
    const char* fileName = "temperatures.dat";
    ifstream file(fileName);

    if (!file.is_open()) {
        cout << "Error opening file \n";
        exit(EXIT_FAILURE);
    }
    int temperature, i = 0;
    while (file >> temperature && i < length) {
        temperatures[i] = temperature;
        i++;
    }
    file.close();
}