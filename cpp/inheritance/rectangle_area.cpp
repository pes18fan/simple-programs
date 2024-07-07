#include <iostream>
using std::cout;

class Shape {
  public:
    virtual float area() = 0;
};

class Rectangle : public Shape {
  protected:
    float l, b;

  public:
    Rectangle(float x, float y) {
        l = x;
        b = y;
    }

    float area() { return l * b; }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area is " << rect.area() << "\n";
}
