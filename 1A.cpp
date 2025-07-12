/*
Problem Link: https://codeforces.com/problemset/problem/1/A
Solve Link: https://codeforces.com/contest/1/submission/109343977
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
    double n,m,a;
    cin>>n>>m>>a;
    long long x=ceil(n/a);
    long long y=ceil(m/a);
    cout<<x*y<<endl;
}