#include <stdio.h>
int main(){
    int studentID, issueDay, issueMonth, issueYear, returnDay, returnMonth, returnYear;
    int totalDays, daysLate, fine;
    printf("Enter Student ID: ");
    scanf("%d", &studentID);
    printf("Enter the Issue Date (DD MM YYYY): ");
    scanf("%d %d %d", &issueDay, &issueMonth, &issueYear);
    printf("Enter the Return Date (DD MM YYYY): ");
    scanf("%d %d %d", &returnDay, &returnMonth, &returnYear);

    totalDays=(returnYear-issueYear)*360+(returnMonth-issueMonth)*30+(returnDay-issueDay);
    if (totalDays<=7){
        printf("Student ID: %d\n No fine issued.\n", studentID);
    }
    else if (totalDays>=8 && totalDays<=15){
        daysLate=totalDays-7;
        fine=5*daysLate;
        printf("Student ID: %d\n Days Late: %d\n Fine: Rs %d\n", studentID, daysLate, fine);
    }
    else if (totalDays>=16 && totalDays<30){
        daysLate=totalDays-7;
        fine=10*daysLate;
        printf("Student ID: %d\n Days Late: %d\n Fine: Rs %d\n", studentID, daysLate, fine);
    }
    else {
        daysLate=totalDays-7;
        printf("Student ID: %d\n Days Late: %d [Exceeded]\n Membership cancelled.\n", studentID, daysLate);
    }
    return 0;
}