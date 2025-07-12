/*
Problem Link: https://codeforces.com/problemset/problem/1787/A
Solve Link: https://codeforces.com/contest/1787/submission/191736033
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n;
	cin>>n;

	if (n % 2 == 1)
		cout<<-1<<endl;
	else
		cout<<1<<" "<<n/2<<endl;
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