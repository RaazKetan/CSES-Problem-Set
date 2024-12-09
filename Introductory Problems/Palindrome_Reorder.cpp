#include<bits/stdc++.h>
using namespace std;
//TC: o(n)
int main()
{
    string s;
    cin>>s;
    map<char, int>mpp;
    for (int i = 0; i<s.size(); i++){
        mpp[s[i]]++;
    }
    int oddCount = 0;
    char oddChar = '\0';
    for(auto &it: mpp){
        if(it.second%2 !=0){
            oddCount++;
            oddChar = it.first;
        }
    }
    if(oddCount > 1){
        cout<<"NO SOLUTION";
        return 0;
    }
    string firstHalf = "", secondHalf = "";
    for (auto &it : mpp) {
        string part(it.second / 2, it.first);
        firstHalf += part;
    }
    secondHalf = firstHalf;
    reverse(secondHalf.begin(),secondHalf.end());
    string result = firstHalf+(oddChar? string(1,oddChar) : "")+secondHalf;
    cout<<result;
    return 0;
}