#include <iostream>
#include "Set.h"

using namespace std;

int main() {
    vector<int> integers1 = {1,2,3,4,5,6};
    vector<int> integers2 = {5,6,7,8,9,10};
    vector<int> integers3 = {11,12,13,14};
    Set set1(integers1);
    Set set2(integers2);
    Set set3(integers3);

    // UNION OF SETS
    Set set4 = set1&set2;
    cout << "The union of " << set1 << " and "
         << set2 << " is:\n"
         << set4 << "\n";
    Set set5 = set1&set3;
    cout << "The union of " << set1 << " and "
         << set3 << " is:\n"
         << set5 << "\n\n";

    // ADDING ELEMENT TO SET
    int element = 11;
    cout << "Adding " << element << " to the set "
         << set4 << ":\n" << (set4+=11) << "\n";
    cout << "Trying to add " << element << " to the set "
         << set3 << ":\n" << (set3+=11) << "\n\n";

    // SETTING SET EQUAL TO ANOTHER SET
    cout << "Setting " << set4 << " equal to "
         << set2 << ":\n" << (set4=set2) << endl;

    return 0;
}
