// #include<bits/stdc++.h>
// using namespace std;

// //TC: O(n!+n)
 
//  void createString(string s, int l, int r, set<string>&ans){
//     if(l == r){
//         ans.insert(s);
//         return;
//     }
//     for(int i = l; i<=r;i++){
//         swap(s[l], s[i]);
//         createString(s, l+1,r,ans);
//         swap(s[l], s[i]);
//     }
//  }
// int main()
// {
//     string s;
//     cin>>s;
//     set<string>ans;
//     int n = s.size()-1;
//     createString(s, 0, n, ans);
//     cout<<ans.size()<<endl;
//     for(auto &it: ans)
//     cout<<it<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

// TC: O(n!)
// SC: O(n!)
vector<string> generatePermutations(string s) {
    // Base case
    if (s.length() <= 1) {
        return {s};
    }
    
    vector<string> permutations;
    permutations.push_back(string(1, s[0]));
    
    for (int i = 1; i < s.length(); i++) {
        vector<string> newPermutations;
        char currentChar = s[i];
        
        for (const string& perm : permutations) {
            for (int j = 0; j <= perm.length(); j++) {
                string newPerm = perm;
                newPerm.insert(j, 1, currentChar);
                newPermutations.push_back(newPerm);
            }
        }
        permutations = newPermutations;
    }    
    set<string> uniquePermutations(permutations.begin(), permutations.end());
    return vector<string>(uniquePermutations.begin(), uniquePermutations.end());
}

int main() {
    string s;
    cin >> s;
    
    vector<string> ans = generatePermutations(s);
    
    cout << ans.size() << endl;
    for (const string& perm : ans) {
        cout << perm << endl;
    }
    
    return 0;
}
       