//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();

  return(0);
  } // end main

// Making the function to print the values of each element in the array
void printValues() {
	// Using for loop by starting at the 0th element of the array, stoping at the second last element of the array,
	// and the behavior of the change is the increment
	  for (int i = 0; i < MAX; i++) {
		      printf("%d ", values[i]); // using %d format since the values of each element are base ten integers 
		        } // end for loop
	    printf("\n"); // printing an empty line
} // end printVales()

// Making the swap function to swap two neighboring elements of the array
void swap(int* a, int* b)
{
	// Create the placeholder variable as a temporary value to successfully swap the two neighboring elements of the array
	int placeholder = *a;
	*a = *b;
	*b = placeholder;
} // end swap function

// Making the sort function to sort the array in ascending order
void sort()
{	
	// Initializing the value of the variable j
	int j = 0;
	int swapped = 0;
	// Using nested for loop to go over each element of the array and compare with the value which is next to each other
	for (int i = 0; i < MAX-1; i++)
       	{
		for (int j = 0; j < MAX - 1; j++) 
		{
			// If the left element is bigger than the right element, call the swap function
			if (values[j] > values[j+1])
			{	
				swap(&values[j], &values[j+1]);
				printValues(); // Call printValues() function to see the result after each pass
			} // end if condition
		
		} // end the second for loop

	} // end the first for loop	
} // end sort function

