#include <stdio.h>

int main() {
    float csc201, csc205, sta205, total, average, percentage;

    // Taking input for the three subjects
    printf("Enter marks for CSC 201: ");
    scanf("%f", &csc201);
    printf("Enter marks for CSC 205: ");
    scanf("%f", &csc205);
    printf("Enter marks for STA 205: ");
    scanf("%f", &sta205);

    // Calculating total, average, and percentage
    total = csc201 + csc205 + sta205;
    average = total / 3;
    percentage = (total / 300) * 100; // Assuming each subject is out of 100 marks

    // Displaying the results
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
