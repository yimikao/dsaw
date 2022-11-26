#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/**
 * The most basic search operation is the `find` function.
 *  It takes two iterators representing an interval and a value.
 *  If one of the elements in the interval equals the value, an iterator to the element is returned.
 * In case of multiple matches the first one is returned
*/

   
int main() {
   vector<int> v;
   
   // returns iterator to first istance of 5
   find(v.begin(), v.end(), 5);
   
   // return number of occurence of 5
   count(v.begin(), v.end(), 5);

   // FOR SORTED ARRAY ONLY.  returns true if interval contains 5
   binary_search(v.begin(), v.end(), 5);

   // like BS. returns an iterator to the first element not less and greater than the specified value, respectively
   lower_bound(v.begin(), v.end(), 5);
   upper_bound(v.begin(), v.end(), 5);

}
