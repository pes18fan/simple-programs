/* Calculate the area and perimeter of a rectangle using concept of OOP */
#include <iostream>
using namespace std;

class Rectangle {
  private:
    float l, b;

  public:
    void setData() {
        cout << "Enter length and breadth of rectangle\n";
        cin >> l >> b;
    }

    float area() { return l * b; }

    float perimeter() { return 2 * (l + b); }
};

int main() {
    Rectangle r;
    r.setData();

    cout << "Area is " << r.area() << "\n";
    cout << "Perimeter is " << r.perimeter() << "\n";

    return 0;
}
