// most basic data structure is the FIXED-SIZE ARRAY
// new array: O(1)
// delete array: O(1)
// accessing: O(1)

// For DYNAMIC ARRAY
// inserting new values: insert(val, pos) -> O(size-pos), worst case: O(size)
// remove: remove(pos) -> O(size-pos)


// To implement a dynamic array, we could use a structure storing as members the 
// capacity, size and backing fixed-size array of the dynamic array
#include <iostream>
using namespace std;


struct DynamicArray {
    int capacity;
    int size;
    int* backing;

    DynamicArray() {
        capacity = 10;
        size = 0;
        backing = new int[10];
    }
};

void ensureCapacity(int cur_cap, int need) {
    while (cur_cap < need) 
    {
        
    }
    
}



int main()
{
    // fixed size
    int size = 5;
    int* arr = new int[4];



    


    return 0;
}