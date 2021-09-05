#include <stdio.h>

int main() {
    float principle , rate, year;

    printf("\nEnter the Principle: ");
    scanf_s("%f", &principle);

    printf("\nEnter the Rate: ");
    scanf_s("%f", &rate);

    printf("\nEnter the Year: ");
    scanf_s("%f", &year);

    float Simple_interest = (principle * rate * year) / 100;
    printf("Simple interest is %.2f", Simple_interest);

    return 0;
}
