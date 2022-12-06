#include <iostream>
#include <sstream>
using namespace std;

/**
 * Input and output is primarily handled by the cin and cout objects
 * While they are very easy to use, adjustments are sometimes necessary.
 * 
*/


int main()
{
/**
 * 1 - DETECTING END OF FILE
 * The first advanced usage is reading input until we run out of input (often called reading until the end-of-file).
 * Normally, input formats are constructed so that you always know beforehand how many tokens of input you need to read.
 * For example, lists of integers are often either prefixed by the size of the list or terminated by some special sentinel value.
 * For those few times when we need to read input until the end we use the fact that cin >> x is an expression that evaluates to false if the input reading failed.
 * This is also the case if you try to read an int but the next word is not actually an integer.
 * This kind of input loop thus looks something like the following:
*/

int num;
while (cin >> num)
{
    //do stuff
}


/**
 * 2 - INPUT LINE BY LINE
 * cin only reads a single word when used as input to a string.
 * This is a problem if the input format requires us to read input line by line.
 * The solution to this is the getline function, which reads text until the next newline.
 * Be warned that if you use cin to read a single word that is the last on its line, the final newline is not consumed.
*/

while (true)
{
string line;
getline(cin.ignore(), line);

string word;
stringstream LINE_STREAM(line);
while(LINE_STREAM >> word) 
{
    cout << word << endl;
}

cout << "error reading line" << endl;

}


/**
 * outputting decimal values with cout produces numbers with too few decimals.
 * The default precision of cout is 10^-6. A higher precision is set with cout << setprecision(10)
 * This precision is normally the relative precision of the output (i.e. the total number of digits to print). If you want the precision to be absolute (i.e. specify the number of digits after the decimal point) you write << fixed;
*/

}