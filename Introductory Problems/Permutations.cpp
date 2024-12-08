#include<bits/stdc++.h>
using namespace std;
 
 
 void Permutation(int n){
    if  (n == 2 || n == 3){
        cout<<"NO SOLUTION";
        return;
    }
   for (int i = 2; i <= n; i = i + 2) {
        cout << i << " ";
    }

    // Output all odd numbers next
    for (int i = 1; i <= n; i = i + 2) {
        cout << i << " ";
    }
 }
int main()
{
    int n;
    cin>>n;
    Permutation(n);
}