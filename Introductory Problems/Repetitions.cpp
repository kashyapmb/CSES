/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;

// RadheKrishna //

void solve(){
    string s;
    cin>>s;
    int ans=0;
    int i=0;
    for(int j=0;j<s.length();j++){
        if(s[i]==s[j]){
            ans=max(ans,j-i+1);
        }else{
            while(s[i]!=s[j])i++;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}