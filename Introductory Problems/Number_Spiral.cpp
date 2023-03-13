/*

A number spiral is an infinite grid whose upper-left square has number 1. 
Here are the first five layers of the spiral:

 1  2  9 10 25
 4  3  8 11 24
 5  6  7 12 23
16 15 14 13 22
17 18 19 20 21

Your task is to find out the number in row y and column x.

*/

#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long

// RadheKrishna //

void solve(){
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<(x*x)-x+1<<endl;
    }else if(x>y){
        if(x%2==0){
            cout<<(x*x)-y+1<<endl;
        }else{
            cout<<((x-1)*(x-1))+y<<endl;
        }
    }else if(y>x){
        if(y%2==0){
            cout<<((y-1)*(y-1))+x<<endl;
        }else{
            cout<<(y*y)-x+1<<endl;            
        }
    }    
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}