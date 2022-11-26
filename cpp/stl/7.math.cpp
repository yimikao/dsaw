#include <iostream>
#include <cmath>
// A majority of the algorithms we regularly use from the standard library operate on sequences.
#include <algorithm> // for min and max
using namespace std;

int main() {
    int a = abs(4);
    a = sqrt(a);
    a = pow(a, 2);
    a = min(a , 2);
    a = max(5, a);
    return 0;
}