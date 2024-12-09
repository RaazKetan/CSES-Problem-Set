#include<bits/stdc++.h>
#define ll long long
using namespace std;

 
//  1 2 9    10 25
//  4 3 8    11 24
//  5 6 7    12 23
//  16 15 14 13 22
//  17 18 19 20 21
 //TC: O(n)
int main()
{
    int n;
    cin>>n;
    while(n--){
        ll x,y;
        cin>>x>>y;
        if(x>y){
            if(x%2==0){
                cout<<x*x-y+1<<endl;
            }
            else{
                cout<<(x-1)*(x-1)+y<<endl;
            }
        }
        else{
            if(y%2==1){
                cout<<y*y-x+1<<endl;
            }
            else{
                cout<<(y-1)*(y-1)+x<<endl;
            }
        }
    }
    return 0;
}