#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long n;
    cin >> n;
    int pow_of_5 = 5;
    int count = 0;
    while(n/pow_of_5 > 0)
    {
        count += n/pow_of_5;
        pow_of_5 *= 5;
    }
    cout << count << endl;
    return 0;
}