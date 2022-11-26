#include <iostream>


/**
 * NOTE
 * -----------------------
 * that arrays are fixed-sized
 * store data of same type
*/

/**
 * PROBLEMS WITH ARRAYS - Arrays are a bit awkward to work with in practice
 * ---------------------------
 * When passing them as parameters we must also pass along the size of the array.
 * Unable to change the size of arrays once declared.
 * Cannot easily remove or insert elements, or copy arrays.
*/

// If you declare a global array all elements get a default value.
int global_arr[40];

void main() {

    // If, on the other hand, the array is declared in the body of a function that guarantee
    // does not apply. Instead of being zero-initialized, the elements can have random values.
    int infunc[30];
}