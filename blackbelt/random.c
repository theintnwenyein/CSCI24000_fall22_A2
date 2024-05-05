//random.c
#include <stdio.h>
#include <stdlib.h> // add <stdlib.h> header file in order to use rand() function
#include <time.h> 

// Setting the length of the array
#define length 10

// Setting the boundaries for the biggest and smallest values of the array (or) Setting the range of the array
int biggest = 100;int smallest = 0;

// Creating an array with a given length
int values[length];

// function prototypes
void randomValues();
void printValues();
void swap();
void sort();

int main() {
	randomValues();
	printf("Before: \n");
	printValues();
	sort();
	printf("After: \n");
	printValues();
} // end main


// Making randomValues() function to generate random numbers and add them to values[] array
void randomValues()
{
	srand(time(0)); // Initializing the random seed

	// Using for loop by starting at the 0th element, stopping at the last element, while the behavior is increment
	for (int i = 0; i < length; i++)
	{
		// Let the array fill with the randomly generated numbers
		values[i] = (rand() % (biggest - smallest + 1)) + smallest;
	} // end for loop
} // end randomValues


// Making a function to print the value of each element in the array
void printValues()
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", values[i]);
	} // end for loop
		printf("\n"); // printing a new line
} // end printValues


// Making a function to swap the two neighboring elements of the array
void swap(int* a, int* b)
{
	int placeholder = *a;
	*a = *b;
	*b = placeholder;
} // end swap


// Making a function to sort the array in descending order
void sort()
{
	// initializing the value of j
	int j = 0;

	// Using nested for loop to go through each element in the array and sort them under some conditions if necessary
	for (int i = 0; i < length; i++){
		for (int j = 0; j < length - 1; j++){

			// Checking if the left element is less than the right element, then swap those two values 
			if (values[j] < values[j+1])
			{
				swap(&values[j], &values[j+1]);
				printValues(); // ---> Comment this line if the result after each pass doesn't need to be printed
			} // end if condition 

		} // end second for loop
	} // end first for loop
} // end sort
