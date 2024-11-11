#include <stdio.h>

int main() {
    int age, experience;
    int salary;

    // Taking input for age and experience
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter 1 if you are experienced, otherwise enter 0: ");
    scanf("%d", &experience);

    // Determining the salary based on experience and age
    if (experience == 1) { // Experienced person
        if (age >= 40) {
            salary = 560000;
        } else if (age >= 30 && age < 40) {
            salary = 480000;
        } else if (age < 28) {
            salary = 300000;
        } else {
            salary = 300000; // Optional: Handle other cases for experienced people under 30 but not less than 28 if needed
        }
    } else { // Inexperienced person
        salary = 100000;
    }

    // Displaying the calculated salary
    printf("The salary of the person is: N%d\n", salary);

    return 0;
}
