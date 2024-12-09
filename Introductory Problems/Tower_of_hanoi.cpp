#include<bits/stdc++.h>
using namespace std;
 
 //TC : O(n^2)

 void towerOfHanoi(int n, int a, int c, int b, vector<pair<int,int>>&vct)
 {
    if(n == 0)
    return;
    towerOfHanoi(n-1, a, b,c,vct);
    vct.push_back({a,c});
    towerOfHanoi(n-1,b,c,a,vct);
 }
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vct;
    towerOfHanoi(n, 1,3,2, vct);
    cout<<vct.size()<<endl;
    for(int i = 0;i<vct.size();i++){
        cout<<vct[i].first<<" "<<vct[i].second<<endl;
    }
    return 0;
}