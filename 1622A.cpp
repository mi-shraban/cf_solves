/*
Problem Link: https://codeforces.com/problemset/problem/1622/A
Solve Link: https://codeforces.com/contest/1622/submission/141676263
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int a, b, c;
	cin>>a>>b>>c;

	if((a==b and c%2==0) or (a==c and b%2==0) or (b==c and a%2==0))
		cout<<"YES\n";
	else if((a+b==c) or (b+c==a) or (a+c==b))
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