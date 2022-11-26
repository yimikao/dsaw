#include <iostream>
#include <queue>
using namespace std;

// The queue and stack structures are arguably unnecessary, since they can be emulated using
// a vector (see Sections 6.2, 6.3). This is not the case for the next structure, the priority_queue.

// The structure is similar to a queue or a stack, but instead of insertions and extractions happening at
// one of the endpoints of the structure, the greatest element is always returned during the extraction. 

/**
 * THIS TIME THERE IS ONE MORE WAY TO CREATE THE STRUCTURE THAT IS IMPORTANT TO REMEMBER - 
 * It is not uncommon to prefer the sorting to be done according to some other order than descending
 * For this reason there is another way of creating a priority queue
 * One can specify a comparison function that takes two arguments of the type stored in the queue and returns
 * true if the first one should be considered less than the second.
 * This function can be given as an argument to the type
 * Note that a priority queue by default returns the greatest element.
 * If we want to make it return the smallest element, the comparison function needs to instead say that the smallest
    of the two elements actually is the greatest, somewhat counter-intuitively.

 * push(x): add the element x to the priority queue
 * pop(): remove the greatest element from the priority queue
 * top(): return the greatest element from the priority queue
 * empty(): return true if and only if the priority queue is empty
 * size(): return the number of elements in the priority queue
*/



bool cmp(int a , int b) {
    return a > b;
}

int main() {
    priority_queue<int> q;

    priority_queue<int, vector<int>, bool> pq;

    priority_queue<int, vector<int>, greater<int> > psq;

    psq.push(4);
    psq.push(7);
    psq.push(2);

    cout << psq.top() << endl;

    return 0;
}

