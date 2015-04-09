
#include "ss.h"

// Auxilliary functions
// Precondition: first, second are within the bounds of arr
void swapItems( std::vector<int>::iterator first, std::vector<int>::iterator second )
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void bogo( std::vector<int> arr )
{
	// Some random shuffling algorithm	
}

/* Bubble Sort
 * 
 * Algorithm: 
 * Bubble an array by "bubbling" the highest values to the top 
 * each pass. This bubble is done by comparing each item to the
 * next item, swapping each other if necessary.
 *
 * */
void bubble( std::vector<int> arr )
{
	for( auto iter = arr.end(); iter != arr.begin(); --iter )
	{
		for( auto riter = arr.begin() + 1; riter != iter; ++riter )
		{
			if( *riter < *(riter-1) ) swapItems( riter-1,riter );
		}		
	}	
}
