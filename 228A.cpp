/*
Problem Link: https://codeforces.com/problemset/problem/228/A
Solve Link: https://codeforces.com/contest/228/submission/112479681
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int a[4], ans;
	for(int i=0; i<4; i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+4);
	
	for(int i=0; i<3; i++)
	{
		if(a[i]==a[i+1])
			ans++;
	}
	cout<<ans;
	
	return 0;
}