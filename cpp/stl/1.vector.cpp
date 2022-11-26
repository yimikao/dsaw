#include <iostream>
#include <vector>

/**
 * VECTOR IS A DYNAMIC SPECIAL TYPE OF ARRAY
 * can change size
 * supports operations such as removing and inserting elements at any position in the list
 * you have to include it #include <vector>
 * Just like ordinary arrays vectors need to know what types they store
 * Just as with normal arrays accessing indices outside the valid range of the vector can cause weird behaviour in your program.
*/



void main() {
    // empty vector od strings
    std::vector<std::string> words;

    words.push_back("data");
    std::cout << words.size();
    std::cout << words[0];

    if (words.empty()) {
        std::cout << "vector is empty";
    }

    // create dynamic arrays that already contain a number of elements
    // They are filled with the same default value as (global) arrays are when created
    std::vector<int> vec(5);

    /**
     * An iterator is an object which “points to” an element in some kind of data structure (such as a vector)
     * The type of an iterator for a data structure of type t is t::iterator e.g vector<string>::iterator
     * Most of the time we instead use the auto type since this is very long to type.
     * Not all data structures support iterators. It is most commonly used for the vector and the set 
    */

    // To get an iterator to the first element of a vector, we use begin(): 
    auto first = words.begin();
    // We can get the value that an iterator points at using the * operator:
    std::cout << "first: " <<  *first;

    // If we have an iterator `it` pointing at the ith element of a vector we can get a new iterator pointing to
    // another value by adding or sub an integer value to the iterator. E.G, it + 4 points to the (i + 4)’th 
    // element of the vector, and it - 1 is the iterator pointing to the (i − 1)’st element.
    // Not all iterators support adding or subtracting arbitrary integer values though. Some iterators can only move one
    // step backwards or forwards by using the ++ and - operators.

    // There is a special kind of iterator which points to the first position after the last element. We get this iterator by using the function end()
    for (auto it = words.begin(); it != words.end(); it++) {
        std::string value = *it;
        std::cout << value;
    }

    // there is also rbegin() and rend(). They work similarly, except that they are reverse iterators - they iterate in the other direction
    // Thus, rbegin() actually points to the last element of the vector, and rend() to an imaginary element before the first element of the vector.
    // If we move a reverse iterator in a positive direction, we will actually move it in the opposite direction
    // (i.e. adding 1 to a reverse iterator makes it point to the element before it in the vector).

    /**
     * Certain operators on a vector require the use of vector iterators.
     * The insert and erase member functions, used to insert and erase elements at arbitrary positions, take iterators to describe positions.
     * 
    */

    // When removing the, second element, we write
    words.erase(words.begin()+1);
    // an alternative to push_back
    words.insert(words.end(), "food");

}