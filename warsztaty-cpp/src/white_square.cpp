#include <iostream>
using namespace std;

int main() {
    cout << "P1\n200 200\n";
    for (int i = 0; i < 200; ++i) {
        for (int j = 0; j < 200; ++j) {
            cout << "0 ";
        }
        cout << "\n";
    }

    return 0;
}