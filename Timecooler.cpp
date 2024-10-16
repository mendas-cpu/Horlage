#include <stdio.h>

int main()
{
    int hour, min, sec;
    printf("Enter The Hour, The Minutes and The Seconds: ");
    scanf("%d %d %d", &hour, &min, &sec);

    // Increment the second
    sec++;

    
    if (sec == 60)
    {
        sec = 0;
        min++;  // Increment the minute
    }

    // Handle the case where minutes roll over
    if (min == 60) {
        min = 0;
        hour++;  // Increment the hour
    }

    // Handle the case where hours roll over
    if (hour == 24) {
        hour = 0;
    }

    // Print the time after one second
    printf("The Time after one second is: %02d:%02d:%02d\n", hour, min, sec);

    return 0;
}