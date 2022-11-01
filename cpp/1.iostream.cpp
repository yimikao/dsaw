#include <iostream>
// include the iostream(input and output stream) file from the so called standard library of C++.
// The iostream file contains routines for reading and writing data to the screen.

/**
 * COMPETITIVE TIP
 * On some platforms, there is a special include file called bits/stdc++.h.
 * This file includes the entire standard library. You can check if it is available on your platform by including it using
 * #include bits/stdc++.h
*/

using namespace std;
// tells the compiler that we wish to use code from the standard library namespace
// if we did not use it, we would have to specify this every time we used code from standard library
// later in our program by prefixing what we use from the library by std:: (for example std::cout).

int main() {
    cout << "hello " << "world" << endl;
    return 0;
}