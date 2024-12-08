#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        ll totalWays = pow(i,2)*(pow(i,2)-1)/2;;
        ll attackWays = 4*(i-1)*(i-2);
        cout<<totalWays - attackWays<<endl;
    }
    return 0;
}