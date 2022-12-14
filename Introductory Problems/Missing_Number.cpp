/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RadheKrishna //

void solve(){
    int n , x, num=0;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>x;
        num^=x;
    }
    for(int i=1;i<=n;i++)
        num^=i;
    
    cout<<num<<endl;    
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}