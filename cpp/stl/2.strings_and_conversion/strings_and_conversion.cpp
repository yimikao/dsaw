/**
 * a string is to a large extent like a vector of chars. 
*/
#include <iostream>
#include <sstream>
// #include <vector>
using namespace std;

int main() {
    string name = "name";
    name.push_back('s');

    // There are several ways to convert between strings and other types.
    // The easiest way is through using the `stringstream` class.
    // A stringstream essentially works as a combined cin and cout

    stringstream ss;
    // ss << "5";
    return 0;
}