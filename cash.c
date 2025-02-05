#include <cs50.h>
#include <stdio.h>
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int main(void)
{
    // prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    // calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
    // subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    while (cents < 0)
        ;
    // calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);
    // subtract the value of those dimes from cents
    cents = cents - (dimes * 10);

    while (cents < 0)
        ;
    // calculate how many nickels you should give customer
    int nickels = calculate_nickels(cents);
    // subtract the value of those nickels from cents
    cents = cents - (nickels * 5);

    while (cents < 0)
        ;
    // calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);
    // subtract the value of those pennies from cents
    cents = cents - (pennies * 1);
    // sum coins
    int coins = quarters + dimes + nickels + pennies;
    // print total number of coins
    printf("%i\n", coins);
}
int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}
int calculate_dimes(int cents)
{
    // Calculate how many dimes you should give customer
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}
int calculate_nickels(int cents)
{
    // Calculate how many nickels you should give customer
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}
int calculate_pennies(int cents)
{
    // Calculate how many pennies you should give customer
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}
