/*
Problem Link: https://codeforces.com/problemset/problem/1360/A
Solve Link: https://codeforces.com/contest/1360/submission/115426904
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	short int t;
	cin>>t;
	
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		
		int x=(min(max(2*b,a), max(2*a, b)));
		int ans=pow(x, 2);
		
		cout<<ans<<endl;
	}
	
	return 0;
}