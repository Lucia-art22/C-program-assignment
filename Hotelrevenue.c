/*
NAME:NGUNJIRI LUCY WAKURAYA
REG NO:CT101/G/26451/25
DESCRIPTION:A PROGRAM THAT TRACKS WEEKLY REVENUE OF A HOTEL
*/

#include <stdio.h>

#define DAYS_IN_WEEK 7

int main() {
    // 1. Create a 1D array to store daily revenues
    double revenue[DAYS_IN_WEEK];
    char *days[DAYS_IN_WEEK] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    // 2. Input revenue for each day
    printf("Enter daily revenue for the week:\n");
    for(int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("%s: $", days[i]);
        scanf("%lf", &revenue[i]);
        
        // Input validation
        while(revenue[i] < 0) {
            printf("Revenue cannot be negative. Please enter again: $");
            scanf("%lf", &revenue[i]);
        }
    }
    
    // 3. Calculate total weekly revenue
    double totalRevenue = 0;
    for(int i = 0; i < DAYS_IN_WEEK; i++) {
        totalRevenue += revenue[i];
    }
    
    // Calculate average daily revenue
    double averageRevenue = totalRevenue / DAYS_IN_WEEK;
    
    // Display results
    printf("\n=== HOTEL REVENUE REPORT ===\n");
    printf("Daily Revenues:\n");
    for(int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("%s: $%.2lf\n", days[i], revenue[i]);
    }
    
    printf("\nSUMMARY:\n");
    printf("Total Weekly Revenue: $%.2lf\n", totalRevenue);
    printf("Average Daily Revenue: $%.2lf\n", averageRevenue);
    
    return 0;
}
