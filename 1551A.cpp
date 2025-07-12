/*
Problem Link: https://codeforces.com/problemset/problem/1551/A
Solve Link: https://codeforces.com/contest/1551/submission/123465828
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int c1=ceil(n/3.0);
		int c2=(n-c1)/2;
		int cdiff=abs(c1-c2);
		
		if(1*c1+2*c2==n)
			cout<<c1<<" "<<c2<<"\n";
		else
			cout<<c2<<" "<<c1<<"\n";
		
	}
	
	return 0;
}