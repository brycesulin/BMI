/*
 * File: BMI.c
 * Author: Bryce Sulin
 *
 * This program calculates the BMI from a person's inputted height and weight.
 */
#include <stdio.h>

int main() {
    float weightPounds = 0.0;
    float heightInches = 0.0;
    float bmi = 0.0;

    printf("Enter your weight in total pounds: ");
    scanf("%f", &weightPounds);
    printf("Enter your height in total inches: ");
    scanf("%f", &heightInches);

    bmi = weightPounds * 703 / (heightInches * heightInches);

    if (bmi < 18.5) {
        printf("You have a BMI of %.01f, and your weight status is Underweight\n", bmi);
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You have a BMI of %.01f, and your weight status is Normal\n", bmi);
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("You have a BMI of %.01f, and your weight status is Overweight\n", bmi);
    } else {
        printf("You have a BMI of %.01f, and your weight status is Obese\n", bmi);
    }

    return 0;
}