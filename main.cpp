#include <iostream>

using namespace std;

// The comments are a bit of a mess

int main(void) {
int i, j, k;
cout << "Enter i: ";
cin >> i;
cout << "Enter j: ";
cin >> j;
// increment i by 2
i += 2;
// could also do i = i + 2 however it isn't as neat
// decrement j by i
j -= i;
// could also do j = j - i but same thing as line 13, not as neat and possibly more computationally heavy (which doesn't matter right now but may in the future)
// divide i by j giving k
k = i / j;
// increment k by k
k += k;
// decrement k by 1
k -= 1; // k-- only works when you have to subtract 1 (could also do longer code like lines 13 and 16)
// if you have to increment k by 1, you can do k++
// assign k modulo i to j
j = k % i;
// increment k by k added to i
k += k + i;
// increment k by k divided by j
k += k / j;
// assign k times k times k to k
k = k * k * k; // could also do k*= k * k
// increment k by i times j
k += i * j;

cout << k;
return 0; 
}

