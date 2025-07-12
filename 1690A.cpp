/*
Problem Link: https://codeforces.com/problemset/problem/1690/A
Solve Link: https://codeforces.com/contest/1690/submission/160043574
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

	n -= 6;

	int a = 3, b =2, c =1;

	if(n % 3 == 0)
	{
		for(int i=0; i<n/3; i++)
		{
			a++;
			b++;
			c++;
		}
	}
	else if(n % 3 == 1)
	{
		a += 1;
		for(int i=0; i<n/3; i++)
		{
			a++;
			b++;
			c++;
		}
	}
	else if(n % 3 == 2)
	{
		a += 1;
		b += 1;
		for(int i=0; i<n/3; i++)
		{
			a++;
			b++;
			c++;
		}
	}
	cout<<b<<" "<<a<<" "<<c<<endl;
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