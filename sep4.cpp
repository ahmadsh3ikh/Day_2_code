#include <iostream>

using namespace std;

int main() {
    int odd;
    int x = 0;
    int age[7];
    for (; x < 7; x++) {
        cout << "Write Number " << x + 1 << ":";
        cin >> age[x];
    }
    x = 0;
    for (; x < 7; x++) {
        if (age[x] % 2!=0) {
            odd++;
            if (odd ==2) {
                cout << "Number " << x + 1 << " is " << age[x] << endl;
            }
        }
    }

    return 0;
}