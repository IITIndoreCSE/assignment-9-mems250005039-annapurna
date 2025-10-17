#include <iostream>
using namespace std;
struct Point {
    float x;
    float y;
};

int main() {
    Point points[7];
    int firstQuadrantCount = 0;

    for (int i = 0; i < 7; i++) {
       cout << "Enter x and y coordinates for point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }

    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            firstQuadrantCount++;
        }
    }

    << "The number of points in the first quadrant is: " << firstQuadrantCount << endl;

    return 0;
}
