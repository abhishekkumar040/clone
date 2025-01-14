#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure to represent a day
struct day {
    char *dayname;
    int date;
    char *activity;
};

// Function to initialize the calendar
void create(struct day *calender, int node) {
    for (int i = 0; i < node; i++) {
        calender[i].dayname = (char *)malloc(20 * sizeof(char)); // Allocate memory for dayname
        calender[i].activity = (char *)malloc(100 * sizeof(char)); // Allocate memory for activity

        // Initialize dayname and activity
        printf("Enter day name for day %d: ", i + 1);
        scanf("%s", calender[i].dayname);

        printf("Enter date for day %d: ", i + 1);
        scanf("%d", &calender[i].date);

        printf("Enter activity for day %d: ", i + 1);
        getchar(); // To consume the newline character left by scanf
        fgets(calender[i].activity, 100, stdin);

        // Remove newline character from activity string if present
        size_t len = strlen(calender[i].activity);
        if (len > 0 && calender[i].activity[len - 1] == '\n') {
            calender[i].activity[len - 1] = '\0';
        }
    }
}

// Function to free allocated memory
void free_calendar(struct day *calender, int node) {
    for (int i = 0; i < node; i++) {
        free(calender[i].dayname);
        free(calender[i].activity);
    }
    free(calender);
}

int main() {
    int node = 7; // Number of days
    struct day *calender;

    // Allocate memory for the calendar
    calender = (struct day *)malloc(node * sizeof(struct day));
    if (calender == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the calendar
    create(calender, node);

    // Display the calendar
    printf("\n--- Calendar Details ---\n");
    for (int i = 0; i < node; i++) {
        printf("Day %d:\n", i + 1);
        printf("  Day Name: %s\n", calender[i].dayname);
        printf("  Date: %d\n", calender[i].date);
        printf("  Activity: %s\n", calender[i].activity);
    }

    // Free allocated memory
    free_calendar(calender, node);

    return 0;
}
