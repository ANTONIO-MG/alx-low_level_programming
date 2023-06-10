#include "main.h"

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

/**
 * main - prints minimum num of coins to make change for given amount.
 *
 * @argc: number of arguments passed to the command line
 * @argv: strings passed to teh command line
 *
 * Return: 1 if more args passed or negative or returns coins given back 
 */

int main(int argc, char *argv[])
{
	/** Ask how many cents the customer is owed */
	int cents = atoi(argv[1]);
	int check = atoi(argv[1]);
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	else if (check < 0)
	{
		printf("0\n");
		return 1;
	}

	/* Calculate the number of quarters to give the customer */
	quarters = calculate_quarters(cents);

	cents = cents - quarters * 25;

	/* Calculate the number of dimes to give the customer */
	dimes = calculate_dimes(cents);

	cents = cents - dimes * 10;

	/* Calculate the number of nickels to give the customer */
	nickels = calculate_nickels(cents);

	cents = cents - nickels * 5;

	/* Calculate the number of pennies to give the customer */
	pennies = calculate_pennies(cents);

	cents = cents - pennies * 1;

	/* Sum coins */
	coins = quarters + dimes + nickels + pennies;

	/* Print total number of coins to give the customer */
	printf("%i\n", coins);

	return (0);
}

/**
 * calculate_quarters - prints minimum num of coins to make change for given amount.
 *
 * @cents: given amount of cents
 *
 * Return: the number of quarters
 */

int calculate_quarters(int cents)
{
	/* initialisation of quarters */
	int quarters;

	/* calculates the number of quarters per given number of cents */
	quarters = cents / 25;

	return (quarters);
}

/**
 * calculate_dimes - prints minimum num of coins to make change for given amount.
 *
 * @cents: given amount of cents
 *
 * Return: the number of dimes
 */

int calculate_dimes(int cents)
{
	/* initialisation of dimes */
	int dimes;

	/* calculates the number of dimes per given number of cents */
	dimes = cents / 10;

	return (dimes);
}

/**
 * calculate_nickels - prints minimum num of coins to make change for given amount.
 *
 * @cents: given amount of cents
 *
 * Return: the number of nickels
 */

int calculate_nickels(int cents)
{
	/* initialisation of nickels */
	int nickels;

	/* calculates the number of nickels per given number of cents */
	nickels = cents / 5;

	return (nickels);
}

/**
 * calculate_pennies - prints minimum num of coins to make change for given amount.
 *
 * @cents: given amount of cents
 *
 * Return: the number of pennies
 */

int calculate_pennies(int cents)
{
	/* initialisation of pennies */
	int pennies;

	/* calculates the number of pennies per given number of cents */
	pennies = cents / 1;

	return (pennies);
}
