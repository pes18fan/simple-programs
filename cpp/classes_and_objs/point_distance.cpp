#include <cmath>
#include <iostream>
using namespace std;

class Point {
  private:
    float x, y;

  public:
    void setData() {
        cout << "Enter the x and y coordinates\n";
        cin >> x >> y;
    }

    float distanceFrom(Point other) {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }
};

int main() {
    Point a, b;
    a.setData();
    b.setData();

    cout << "Distance between points is " << a.distanceFrom(b) << "\n";

    return 0;
}
