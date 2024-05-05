#include <math.h>
#include <stdio.h>

// Initializing the length of the array
int length = 9;

// Creating an array
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

// function prototypes
void printValues();
void sort();


int main(){
	printf("Before: \n");
	printValues();
	sort();
	printf("After: \n");
	printValues();
	return 0;
} // end main

// Creating the sort function with insertion sort
void sort()
{
	// Using for loop by starting at the second element of the array, stopping at the last element while the behavior is increment
	for ( int i=1; i < length; i++){
		// Letting the temporary variable get the current value of the array 
		int temp = values[i];
		// Let j gets the value of the element before the current element of the array
		int j = i - 1;
		
		// Using while loop to switch the values if the left element is bigger than the right element
		while (values[j] > temp) {
			values[j+1] = values[j];
			j = j - 1;
		} // end while loop

		values[j+1] = temp;

		// Use printValues() to see the result after each pass
		printValues();
	} // end for loop
} // end sort


// Making a function to print the values of the array

void printValues()
{
	for(int i = 0; i < length; i++)
		printf("%d ", values[i]);
	printf("\n");
}
