#include <stdio.h>

int main() {
    char name[50];
    int maths, english, kiswahili;
    float average;

    printf("Enter student name\n: ");
    scanf("%s", name);

    printf("Enter Maths marks\n: ");
    scanf("%d", &maths);

    printf("Enter English marks\n: ");
    scanf("%d", &english);

    printf("Enter Kiswahili marks\n: ");
    scanf("%d", &kiswahili);

    average = (maths + english + kiswahili) / 3.0;

    printf("\nStudent: %s\n", name);
    printf("Average: %.2f\n", average);

    if(average >= 70) {
        printf("Grade: A\n");
    } else if(average >= 60) {
        printf("Grade: B\n");
    } else if(average >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail - Try again\n");
    }
    return 0;
}
