 /*
 * Minimum Value of n log n
 * By Sam Firnhaber
 */

#include <iostream>
#include <math.h>  

int main() {
    unsigned long long n = 1;
    unsigned long long t;
    std::cin >> t;
    while (n * log2(n) < t)
        n++;
    n--;
    std::cout << n << std::endl;
    return 0;
}
