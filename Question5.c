#include <stdio.h>

int main() {
    int day = 1, minutes;
    int total = 0, longest = 0, shortest = 9999;
    int goalDays = 0, above45 = 0;
    int longestDay = 0, shortestDay = 0;

    while (day <= 7) {
        printf("Enter reading time for day %d (in minutes): ", day);
        scanf("%d", &minutes);

        total += minutes;

        if (minutes > longest) {
            longest = minutes;
            longestDay = day;
        }

        if (minutes < shortest) {
            shortest = minutes;
            shortestDay = day;
        }

        if (minutes >= 20)
            goalDays++;

        if (minutes > 45)
            above45++;

        day++;
    }

    float avg = total / 7.0;
    float consistency = (goalDays / 7.0) * 100;
    int hours = total / 60;
    int mins = total % 60;

    printf("\n===== Weekly Reading Summary =====\n");
    printf("Total reading time: %d hours and %d minutes\n", hours, mins);
    printf("Average reading time: %.2f minutes per day\n", avg);
    printf("Longest reading session: %d minutes (Day %d)\n", longest, longestDay);
    printf("Shortest reading session: %d minutes (Day %d)\n", shortest, shortestDay);
    printf("Days meeting 20-min goal: %d\n", goalDays);
    printf("Days reading more than 45 minutes: %d\n", above45);
    printf("Consistency: %.2f%%\n", consistency);

    printf("\n===== Feedback =====\n");
    if (consistency == 100)
        printf("Excellent work! Let not the Streak Break!\n");
    else if (consistency >= 70)
        printf("Good job! Try to reach 100%% next week!\n");
    else if (consistency >= 40)
        printf("You can do better! Try reading more consistently.\n");
    else
        printf("Let's improve next week! Try reading at least 20 minutes daily.\n");

    return 0;
}
