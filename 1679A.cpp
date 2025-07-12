/*
Problem Link: https://codeforces.com/problemset/problem/1679/A
Solve Link: https://codeforces.com/contest/1679/submission/157324628
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	intll n;
	cin>>n;

	intll x=0, y=0, rem=0;

	if(n % 2 != 0 or n<4)
		cout<<"-1"<<endl;
	else
	{
		x = n/6;
		rem = n%6;
		if(rem!=0)
		{
			x++;
		}
		y = n/4;
		
		cout<<x<<" "<<y<<endl;
	}
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