/*
Problem Link: https://codeforces.com/problemset/problem/705/A
Solve Link: https://codeforces.com/contest/705/submission/113654358
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		if(i%2!=0)
			cout<<"I love ";
		else
			cout<<"I hate ";
		
		if(i==n-1)
			cout<<"it ";
		else
			cout<<"that ";
	}
	
	return 0;
}