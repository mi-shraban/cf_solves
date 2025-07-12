/*
Problem Link: https://codeforces.com/problemset/problem/750/A
Solve Link: https://codeforces.com/contest/750/submission/115984207
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	short int n, k;
	cin>>n>>k;
	
	short int time=0, rem=240-k, ans=0;
	
	for(short int i=1; i<=n; i++)
	{
		time+=5*i;
		
		if(time>rem)
			break;
			
		ans+=1;
	}
	
	cout<<ans;
	
	return 0;
}