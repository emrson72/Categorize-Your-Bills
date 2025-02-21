// Program that categorize your bills
#include<stdio.h>
int main () {
    int ones, fives, tenths, twenties, fifties, hundredths, five_hundredths, thousandths;
    int bills;
    printf("Enter your amount of bills\n");
    scanf("%d", &bills);

    // After division, the category bill is updated
    // Then, the modulus in bills updates the bills with a new number which is the remainder
    // Ones = natira nalang sa bills
    
    thousandths = bills / 1000;
    bills %= 1000;
    five_hundredths = bills / 500;
    bills %= 500;
    hundredths = bills / 100;
    bills %= 100;
    fifties = bills / 50;
    bills %= 50;
    twenties = bills / 20;
    bills %= 20;
    tenths = bills / 10;
    bills %= 10;
    fives = bills / 5;
    bills %= 5;
    ones = bills;

    printf("Your bills in thousands are %d\n", thousandths);
    printf("Your bills in five hundredths are %d\n",five_hundredths);
    printf("Your bills in hundredths are %d\n", hundredths);
    printf("Your bills in fifties are %d\n", fifties);
    printf("Your bills in twenties are %d\n", twenties);
    printf("Your bills in tenths  %d\n",tenths);
    printf("Your bills in fives are %d\n",fives);
    printf("Your bills in ones are %d\n",ones);

    return 0;
}