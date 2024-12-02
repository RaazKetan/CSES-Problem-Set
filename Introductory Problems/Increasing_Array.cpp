#include<bits/stdc++.h>
using namespace std;
 

 int findNumberofStep(vector<int>&ans){
        int n = ans.size();
        int count = 0;
        for(int i = 1; i < n; i++){
            if(ans[i] < ans[i-1]){
                count += ans[i-1] - ans[i];
                ans[i] = ans[i-1];
            }
        }
        return count;
 }
 
int main()
{
    int n;
    cin>>n;
    vector<int>ans(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>ans[i];
    }
    cout<<findNumberofStep(ans);
}