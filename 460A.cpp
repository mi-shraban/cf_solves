/*
Problem Link: https://codeforces.com/problemset/problem/460/A
Solve Link: https://codeforces.com/contest/460/submission/115395304
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	short int n, m;
	cin>>n>>m;
	
	int ans=n+((n-1)/(m-1));
	cout<<ans;
}