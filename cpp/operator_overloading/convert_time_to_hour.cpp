#include <iostream>
using namespace std;

class Time {
    int min, sec;

  public:
    Time() {
        min = 0;
        sec = 0;
    }

    Time(int m, int s) {
        min = m;
        min += s / 60;

        sec = s;
        sec %= 60;
    }

    /* Convert to hours */
    operator float() { return ((float)min + ((float)sec / 60.0)) / 60.0; }
};

int main() {
    Time t(128, 14);

    float hours = t;
    cout << "128 mins, 14 secs is equivalent to " << hours << " hours.\n";
}
