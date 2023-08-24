#include <iostream>

using namespace std;

int main() {
    int input;
    int sum = 0;
    cout << "Write input: ";
    cin >> input;

    for (; input > 10; sum = sum + (input % 10), input = (input / 10));

    cout << sum + input;
    return 0;
}

