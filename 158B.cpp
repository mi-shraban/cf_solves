/*
Problem Link: https://codeforces.com/problemset/problem/158/B
Solve Link: https://codeforces.com/contest/158/submission/141482217
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

	int a[n];
	int c1=0, c2=0, c3=0, c4=0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i] == 4)
			c4++;
		else if(a[i] == 3)
			c3++;
		else if(a[i] == 2)
			c2++;
		else
			c1++;
	}
	int ans = c4;
	while(c3 > 0 and c1 > 0)
	{
		ans++;
		c3--;
		c1--;
	}
	if(c1 ==0 and c3 != 0)
	{	
		ans+= c3;
		c3=0;
	}
	ans += c2/2;
	if(c2%2 != 0)
	{
		if(c1 <= 2)
		{
			ans++;
			c1=0;
			c2=0;
		}
		else
		{
			c1 -= 2;
			ans++;
			c2 = 0;
		}
	}	
	if(c1 != 0)
	{
		ans += c1/4;
		if(c1%4 != 0)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
}

int main()
{
	fastio
	
	int t=1;
	//cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}