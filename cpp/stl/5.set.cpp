#include <iostream>
#include <set>
using namespace std;


/**
 * Unlike the vector, particular positions in the structure can not be accessed using the [] operator
 * The advantage of sets is twofold:
 * First, we can determine membership of elements in a set much more efficently compared to when using vectors
 * Secondly, sets are also sorted. This means we can quickly find the smallest and greatest values of the set.
*/

int main() {
    set<int> s;

    s.insert(7);
    s.insert(1);
    s.insert(4);

    // find returns iterator to the element if it exists
    auto it = s.find(4);
    // ++ moves the iterator to next element in other
    ++it;
    cout << *it << endl;

    //if non-existent , find return end()
    if (s.find(7) == s.end()) {
        cout << "not xist" << endl;
    }
    //remove specific
    s.erase(7);

    cout << "smallest: " << *s.begin() <<endl;

    return 0;
}