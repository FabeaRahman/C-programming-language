#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100) {
        printf("Grade: A+\n");
    } else if (marks >= 70 && marks <= 79) {
        printf("Grade: A\n");
    } else if (marks >= 60 && marks <= 69) {
        printf("Grade: A-\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Grade: B\n");
    } else if (marks >= 40 && marks <= 49) {
        printf("Grade: C\n");
    } else if (marks >= 33 && marks <= 39) {
        printf("Grade: D\n");
    } else if (marks >= 0 && marks <= 32) {
        printf("Grade: F\n");
    } else {
        printf("Invalid Marks! Please enter marks between 0 and 100.\n");
    }

    return 0;
}

