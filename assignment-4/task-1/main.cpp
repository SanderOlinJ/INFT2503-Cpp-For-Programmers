#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<double> numbers;
  for (int i = 0; i < 5; i++) {
    double number = (i + 1) * 2;
    numbers.emplace_back(number);
  }

  cout << "First element in vector: " << numbers.front() << endl;
  cout << "Last element in vector: " << numbers.back() << endl;

  numbers.emplace(numbers.begin(), 13);
  cout << "First element after emplace(): " << numbers.front() << endl;

  double searchNumber = 4;
  auto foundNumber = find(numbers.begin(), numbers.end(), searchNumber);
  if (foundNumber != numbers.end()) {
    cout << "Found the number '" << searchNumber
         << "' in the vector at the index " << distance(numbers.begin(), foundNumber);
  } else {
    cout << "Could not find the number '" << searchNumber << "' in the vector" << endl;
  }
  return 0;
}
