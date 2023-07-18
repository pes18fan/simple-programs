#include <stdio.h>

typedef struct {
    int hour;
    int minute;
    int second;
} Time;

// returns a - b
Time diff_time(Time a, Time b) {
    return (Time){
        (a.hour - b.hour),
        (a.minute - b.minute),
        (a.second - b.second)
    };
}

int main(void) {
    Time previous, current;

    printf("Enter previous time (h, m, s)");
    scanf("%d%d%d", &previous.hour, &previous.minute, &previous.second);

    printf("Enter current time (h, m, s)");
    scanf("%d%d%d", &current.hour, &current.minute, &current.second);

    Time diff = diff_time(current, previous);
    printf("Time difference: %d:%d:%d\n", diff.hour, diff.minute, diff.second);

    return 0;
}
