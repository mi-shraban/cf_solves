/*
Problem Link: https://codeforces.com/problemset/problem/1327/A
Solve Link: https://codeforces.com/contest/1327/submission/118793021
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		
		if(n%2!=k%2)
		{
			cout<<"NO\n";
			continue;
		}
		long long sum=((double)k/2)*(2+((double)k-1)*2);
		
		if(sum<=n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}