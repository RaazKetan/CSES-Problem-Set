#include<bits/stdc++.h>
using namespace std;


//TC:O(2^n)
 
int appleDivision(int start, int end,int sum1, int sum2, vector<int>weights){
    if(start == end){
        return abs(sum1-sum2);
    }
    
    int pick = appleDivision(start+1, end,sum1+weights[start],sum2,weights);
    int notPick = appleDivision(start+1, end,sum1,sum2+weights[start],weights);
    return min(pick,notPick);
}

int main()
{
    int n;
    cin>>n;
    vector<int>weights;
    for(int i = 0;i<n;i++){
        int weight;
        cin>>weight;
        weights.push_back(weight);
    }
    sort(weights.begin(),weights.end());
    cout<<appleDivision(0, n, 0,0,weights);
    return 0;
}