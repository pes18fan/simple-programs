/* WAP to perform the addition of distance using the concept of OOP. Your
 * program must use at least one friend function. */
#include <iostream>

/* Distance in feet and inches. */
class Distance {
  private:
    int feet, inches;

  public:
    Distance(int f, int i) {
        feet = f;
        int extra_feet = i / 12;
        if (extra_feet > 0) {
            feet += extra_feet;
        }

        inches = i % 12;
    }

    void show() { std::cout << feet << "'" << inches << "''" << "\n"; }

    friend Distance sum(Distance d1, Distance d2);
};

Distance sum(Distance d1, Distance d2) {
    return Distance(d1.feet + d2.feet, d1.inches + d2.inches);
}

int main() {
    Distance a = Distance(6, 9);
    Distance b = Distance(4, 11);

    Distance dist_sum = sum(a, b);
    dist_sum.show();
}
