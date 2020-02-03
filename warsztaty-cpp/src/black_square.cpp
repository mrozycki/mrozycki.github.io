#include <iostream>
using namespace std;

int main() {
    cout << "P1\n200 200\n";
    for (int i = 0; i < 200; ++i) {
        for (int j = 0; j < 200; ++j) {
            if (i > 50 && i < 150 && j > 50 && j < 150) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    return 0;
}