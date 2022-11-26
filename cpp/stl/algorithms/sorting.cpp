#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/**
 * Majority of algos we use regularly operate on sequence
 * 'sort' function takes two iterators marking beginning and end of the interval to be sorted
 * It sorts in ascending order
 * As with priority_queues or sets, the sorting algorithm can take a custom comparator
 * if you want to sort according to some other order than that defined by the < operator. 
 * */

bool cmp(int a, int b) {
   return abs(a) < abs(b);
}
   
int main() {
   vector<int> v;
   v.push_back(10);
   v.push_back(9);
   v.push_back(33);

   cout << sort(v.begin(), v.end()) << endl;

   //sort in descending order
   sort(v.begin(), v.end(), greater<int>());
   //sort by providing custom sorting function (sort by absolute values)
   sort(v.begin(), v.end(), cmp);

   //check if v is sorted (asce)
   is_sorted(v.begin(), v.end());

}
