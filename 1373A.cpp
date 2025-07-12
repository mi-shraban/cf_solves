/*
Problem Link: https://codeforces.com/problemset/problem/1373/A
Solve Link: https://codeforces.com/contest/1373/submission/120950765
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long a, b, c;
		cin>>a>>b>>c;
		
		long long x=-1, y=-1;
			
		if(a<c)
			x=1;
		
		if(a*b>c)
			y=b;
			
		cout<<x<<" "<<y<<endl;
	}
	
	return 0;
}