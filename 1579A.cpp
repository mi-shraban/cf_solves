/*
Problem Link: https://codeforces.com/problemset/problem/1579/A
Solve Link: https://codeforces.com/contest/1579/submission/130381855
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	string s;
	cin>>s;

	int A=0, B=0, C=0;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='A')
			A++;
		else if(s[i]=='B')
			B++;
		else
			C++;
	}

	if(A+C==B)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main()
{
	fastio
	
	int t=1;
	cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}