/*
Problem Link: https://codeforces.com/problemset/problem/279/B
Solve Link: https://codeforces.com/contest/279/submission/123026229
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;
	
	int a[n];
	
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	int c=0, count=1, sum=a[0];
	
	while(count<n)
	{
		if(sum>t)
		{
			sum-=a[c];
			c++;
		}
		sum+=a[count];
		count++;
	}
	
	if(sum>t)
		c++;
		
	int ans=count-c;
	
	cout<<ans<<endl;	
		
	return 0;
}