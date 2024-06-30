#include <iostream>
using namespace std;

class Time {
    int hour, min, sec;

  public:
    Time() {
        hour = 0;
        min = 0;
        sec = 0;
    }

    Time(int h, int m, int s) {
        hour = h;
        hour += m / 60;
        hour %= 24;

        min = m;
        min += s / 60;
        min %= 60;

        sec = s;
        sec %= 60;
    }

    Time(int h) {
        hour = h;
        min = 0;
        sec = 0;
    }

    void show() { cout << hour << ":" << min << ":" << sec << "\n"; }
};

int main() {
    Time hours(5);
    hours.show();
}
