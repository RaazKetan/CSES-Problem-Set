#include <bits/stdc++.h>
#define ll long long
using namespace std;

//TC: O(n)
// Function to find the minimum number of moves
ll solve(ll* arr, ll N)
{
    // variable to store the final answer
    ll ans = 0;
    // Iterate over all the elements and compare them with
    // the previous element
    for (ll i = 1; i < N; i++) {
        if (arr[i - 1] > arr[i]) {
            ans += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    return ans;
}

int main()
{
    // Sample Input
    ll N;
    cin >> N;
    ll arr[N];
    for (ll i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << solve(arr, N) << "\n";
    return 0;
}