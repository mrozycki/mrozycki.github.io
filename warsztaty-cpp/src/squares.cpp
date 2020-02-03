#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> create_canvas(int width, int height) {
    return vector<vector<int>>(height, vector<int>(width, 0));
}

void print(vector<vector<int>> canvas) {
    cout << "P1\n" << canvas.size() << " " << canvas[0].size() << "\n";
    for (int i = 0; i < canvas.size(); ++i) {
        for (int j = 0; j < canvas[i].size(); ++j) {
            cout << canvas[i][j] << " ";
        }
        cout << "\n";
    }
}

void rectangle(vector<vector<int>>& canvas, int x, int y, int width, int height) {
    for (int i = x; i < x + width; ++i) {
        for (int j = y; j < y + height; ++j) {
            canvas[j][i] = 1;
        }
    }
}

int main() {
    auto canvas = create_canvas(200, 200);
    rectangle(canvas, 0, 0, 100, 100);
    rectangle(canvas, 100, 100, 100, 100);
    print(canvas);

    return 0;
}