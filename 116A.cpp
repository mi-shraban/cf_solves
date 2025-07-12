/*
Problem Link: https://codeforces.com/problemset/problem/116/A
Solve Link: https://codeforces.com/contest/116/submission/113396239
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a, b, sum=0, x=0;
	for(int i=0; i<n; i++)
	{
		cin>>a>>b;
		sum=(a+x)-b;
		if(sum<0)
			x=0;
		else
			x=sum;
	}
	cout<<sum;
}