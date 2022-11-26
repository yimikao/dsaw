#include <iostream>
#include <map>
using namespace std;


/**
 * A structure similar to the set is the map. It is essentially the same as a set, except the elements are called keys and have associated values
 * The advantage of sets is twofold:
 * First, we can determine membership of elements in a set much more efficently compared to when using vectors
 * Secondly, sets are also sorted. This means we can quickly find the smallest and greatest values of the set.
*/

int main() {
    map<string, int> m;

    m["jan"] = 70;
    m["jose"] = 7;

    //if non-existent , find return end()
    if (m.find("jose") == m.end()) {
        cout << "no record" << endl;
    }

    // find returns iterator to the element if it exists
    // auto it = s.find(4);

   
    //remove specific
    m.erase("jose");

    auto last = --m.end();

    cout << (*last).first << " is " << (*last).second << endl;

    return 0;
}