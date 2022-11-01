#include <iostream>

int five = 5;
// five = 6 is not allowed
const int C_FIVE = 5;
char symb = '@';
std::string text = "text";
bool isFalse = "false";
float isFloat = 3.2;
/**
 * COMPETITIVE TIP
 * One of the most common sources for errors in code is trying to store an integer value outside the range of the type. 
 * Always make sure your values fit inside the range of an int if you use it. Otherwise, use long longs!
 * One of the reasons for why we do not simply use long long all the time is that some operations involving long longs can be slower using ints under certain conditions.
*/
typedef long long ll;
// type definition or alias
auto data = "my string";
// infer type
void main() {
five = 6;
}

