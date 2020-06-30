#include <conio.h>
#include <math.h>
#include <stdio.h>
// // Program to find armstrong numbers
// An Armstrong number is a number such that the sum
// of its digits raised to the third power is equal to the number
// itself. For example, 407 is an Armstrong number, since
// 4^3 + 0^3 + 7^3 = 407.
//@author Tushar Sharma
int main() {

	int userInput, numbersFound = 0, temp = 1;
	printf("Set the number of armstrong numbers you want to find: ");
	scanf("%d", &userInput);
	printf("The first %d armstrong numbers are:\n", userInput);
	for (int i = 0; numbersFound < userInput; i++) {
		if (i > pow((double)10, (double)temp) - 1)
			temp++;
		int sum = 0, j = i;
		while (j > 0) {
			sum += pow((double)(j % 10), (double)temp);
			j /= 10;
		}
		if (sum == i) {
			numbersFound++;
			printf("Armstrong %d = %d \n", numbersFound, i);
		}
	}
}