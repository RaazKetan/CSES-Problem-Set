#include <bits/stdc++.h>
using namespace std;

long long findMissingNumber(int n) {
    long long totalSum = 0, sum = 0;

    // Calculate total sum using a loop to avoid overflow
    for (int i = 1; i <= n; i++) {
        totalSum += i;
    }

    // Calculate the sum of entered numbers
    for (int i = 0; i < n - 1; i++) {
        int y;
        cin >> y;
        sum += y;
    }

    // Return the difference
    return totalSum - sum;
}

int main() {
    int n;
    cin >> n; // Total numbers expected (1 to n)
    cout << findMissingNumber(n);
    return 0;
}
