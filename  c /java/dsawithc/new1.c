#include<stdio.h>
#include<stdlib.h>

struct Day{
    char *dayname;
    int date;
    char *activity;
};

void create(struct Day *day){
    day->dayname = (char*) malloc(sizeof(char) * 20);  
    day->activity = (char*) malloc(sizeof(char) * 100);
    printf("\nEnter the day name: \n"); scanf("%s", day->dayname);
    printf("\nEnter the date:\n"); scanf("%d", &day->date);
    printf("\nEnter the activity for the day: \n"); scanf("%s", day->activity);
}

void read(struct Day *calender, int size){
    for(int i = 0; i < size; i++){
        printf("\nEnter the details for day %d:\n", i + 1);
        create(&calender[i]);
    }
}

void display(struct Day *calender, int size){
    printf("\nWeek activity details:\n");
    for(int i = 0; i < size; i++){
        printf("Day %d:\n", i + 1);
        printf("Day name: %s\n", calender[i].dayname);
        printf("Date: %d\n", calender[i].date);
        printf("Activity: %s\n", calender[i].activity);
        printf("\n");
    }
}

void freeMemory(struct Day *calender, int size){
    for(int i = 0; i < size; i++){
        free(calender[i].dayname);
        free(calender[i].activity);
    }
}

int main(){
    printf("Abhishek kumar (1AY23CS005) Program!\n");
    int size;
    printf("Enter the number of days in the week:\n "); scanf("%d", &size);
    struct Day *calender = (struct Day *)malloc(sizeof(struct Day) * size);
    if(calender == NULL){
        printf("Memory allocation failed, exiting the program!\n");
        return 1;
    }
    read(calender, size);
    display(calender, size);
    freeMemory(calender, size); 
    free(calender);
    return 0;
}