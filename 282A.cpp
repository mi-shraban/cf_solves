/*
Problem Link: https://codeforces.com/problemset/problem/282/A
Solve Link: https://codeforces.com/contest/282/submission/109345114
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="++X" or s=="X++")
            x++;
        else
            x--;
    }
    cout<<x<<endl;
}