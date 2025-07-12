/*
Problem Link: https://codeforces.com/problemset/problem/379/A
Solve Link: https://codeforces.com/contest/379/submission/117182229
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned short int a, b, c;
	cin>>a>>b;
	
	int ans=a;
	
	while(a>=b)
	{
		ans+=a/b;
		c=a%b;
		a=(a/b)+c;
	}
	
	cout<<ans<<endl;
	
	return 0;
}