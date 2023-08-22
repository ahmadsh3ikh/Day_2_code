#include <iostream>

using namespace std;

int main() {
    int hours = 0;
    cout << endl;
    cout << "How many credit hours do you have?";
    cout << endl << "Answer:";
    cin >> hours;


    for (;hours < 12;) {
        cout << "You are ineligible to register" << endl << "Enter Again:";
        cin >> hours;
    }
    cout << endl;
    cout << "Congratulations, You are Registered." << endl;
    return 0;
}
