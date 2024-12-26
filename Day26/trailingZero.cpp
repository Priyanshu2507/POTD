#include <iostream>
using namespace std;

void trailing_zero(long long n) {
    int zero_count = 0;
    while (n > 0) {
        n /= 5; 
        zero_count += n;
    }
    cout << zero_count << endl;
}

int main() {
    long long n;
    cin >> n;
    trailing_zero(n);
    return 0;
}
