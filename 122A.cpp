/*
Problem Link: https://codeforces.com/problemset/problem/122/A
Solve Link: https://codeforces.com/contest/122/submission/109346583
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[14]={7,4,77,47,74,44,777,477,747,447,774,474,744,444};
    int n;
    cin>>n;
    for(int i=0;i<14;i++){
        if(n%a[i]==0) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}