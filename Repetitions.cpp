#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
 
 int findLongestRepitions(string s){
        int n = s.length();
        int count = 1;
        int maxCount = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                count++;
                maxCount = max(maxCount, count);
            }else{
                count = 1;
            }
        }
        return maxCount;
 }
 
int main()
{
    string s;
    cin>>s;
    cout<<findLongestRepitions(s);
}
