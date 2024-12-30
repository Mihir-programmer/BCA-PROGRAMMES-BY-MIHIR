#include <stdio.h>

int main()
{
    int total_minutes, hours, minutes;

    // Accept total minutes from user
    printf("Enter total minutes: ");
    scanf("%d", &total_minutes);

    // Calculate hours and minutes
    hours = total_minutes / 60;
    minutes = total_minutes % 60;

    // Display the result in HH:MM format
    printf("Result: %d hours %d minutes\n", hours, minutes);

    return 0;
}