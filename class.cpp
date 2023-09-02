#include <iostream>

using namespace std;

int main() {
    int input1;
    int input2;
    int large;
    int small;
    cout << "Write 1st No.:";
    cin >> input1;
    cout << "Write 2nd No.:";
    cin >> input2;
    if (input1 < input2) {
        large = input2;
        small = input1;
    } else {
        large = input1;
        small = input2;
    }
    while (large >= small) {
        if (large % 2 == 0) {
            if (large % 3 == 0) {
                if (large % 5 != 5) {
                    cout << large << endl;
                }
            }
        }
        large--;
    }
    return 0;
}

