/* WAP to perform the addition of distance in the feet and inches format. Use
objects as argument. */
#include <iostream>

/* Distance in feet and inches. */
class Distance {
  private:
    int feet, inches;

    static Distance add(Distance a, Distance b) {
        return Distance(a.feet + b.feet, a.inches + b.inches);
    }

  public:
    Distance(int f, int i) {
        feet = f;
        int extra_feet = i / 12;
        if (extra_feet > 0) {
            feet += extra_feet;
        }

        inches = i % 12;
    }

    static void display_sum(Distance a, Distance b) {
        Distance sum = add(a, b);
        std::cout << sum.feet << "'" << sum.inches << "''";
    }
};

int main() {
    Distance a = Distance(6, 9);
    Distance b = Distance(4, 11);

    Distance::display_sum(a, b);
}
