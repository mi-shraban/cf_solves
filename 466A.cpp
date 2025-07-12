/*
Problem Link: https://codeforces.com/problemset/problem/466/A
Solve Link: https://codeforces.com/contest/466/submission/112909638
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int n, m, a, b, x;
	cin>>n>>m>>a>>b;
	
	if((m*a)>b)
	{
		x=(n%m)*a;
		
		if(x>b)
			cout<<n/m*b+b;
		
		else 
			cout<<n/m*b+x;
	
	}
	else
		cout<<n*a;
		
	return 0;
}