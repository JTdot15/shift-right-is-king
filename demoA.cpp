#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;
typedef high_resolution_clock Clock;

void divide(unsigned long long size, int j, unsigned long long temp, int total) {
    for (j = 0; j < total; j++) {
        while (size != 1)
        {
            size /= 2;
            //cout << "Divide Size: " << size << endl;
        }
        size = temp;
    }
}

void shift(unsigned long long size, int j, unsigned long long temp, int total) {
    for (j = 0; j < total; j++) {
        while (size != 1)
        {
            size >>= 1;
            //cout << "Shift Size: " << size << endl;
        }
        size = temp;
    }
}

int main()
{
    int j = 0;
    int total = 100000;  //total number of times we want to keep dividing size by 2 until it reaches 1, it resets size to original value after each loop
    unsigned long long size = 9223372036854775808; // 2 to the power of 63
    unsigned long long temp = size;

    auto start = Clock::now();
    divide(size, j, temp, total);
    auto end = Clock::now();
    duration<double, milli> diff = end - start;

    auto start2 = Clock::now();
    shift(size, j, temp, total);
    auto end2 = Clock::now();
    duration<double, milli> diff2 = end2 - start2;

    cout << "Total time for shift right by 1 is " << diff2.count() << " milliseconds.\n";
    cout << "Or " << diff2.count() / 1000 << " seconds.\n";
    cout << "Total time for divide by 2 is " << diff.count() << " milliseconds.\n";
    cout << "Or " << diff.count() / 1000 << " seconds.\n";

    return 0;
}
