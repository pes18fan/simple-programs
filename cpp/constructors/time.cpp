/* Write a program that display the total time in 24-hour clock format having
fixed time 12:34:56 and 10:35:14. One constructor should initialize member
data hour, minute and second to 0 and another should initialize it to fixed
values. Other two member functions should add two objects of type time
passed as arguments and display the result. */
#include <iostream>

class Time {
  private:
    int hour, minute, second;

    static Time add(Time a, Time b) {
        return Time(a.hour + b.hour, a.minute + b.minute, a.second + b.second);
    }

  public:
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int h, int m, int s) {
        hour = h % 24;

        int extra_hr = m / 60;
        if (extra_hr > 0) {
            hour += extra_hr;
            hour %= 24;
        }

        minute = m % 60;
        int extra_min = s / 60;
        if (extra_min > 0) {
            minute += extra_min;
            minute %= 60;
        }

        second = s % 60;
    }

    static void display_sum(Time a, Time b) {
        Time sum = add(a, b);
        std::cout << sum.hour << ":" << sum.minute << ":" << sum.second << "\n";
    }
};

int main() {
    Time a = Time(12, 34, 56);
    Time b = Time(14, 39, 57);

    Time::display_sum(a, b);

    return 0;
}
