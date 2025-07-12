/*
Problem Link: https://codeforces.com/problemset/problem/69/A
Solve Link: https://codeforces.com/contest/69/submission/113478394
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, y, z, sumx=0, sumy=0, sumz=0;
	cin>>n;
	
	while(n--)
	{
		cin>>x>>y>>z;
		sumx+=x;
		sumy+=y;
		sumz+=z;
	}
	
	if(sumx==0 and sumy==0 and sumz==0)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}