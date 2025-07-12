/*
Problem Link: https://codeforces.com/problemset/problem/467/A
Solve Link: https://codeforces.com/contest/467/submission/112628730
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, P, Q, FS=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>P>>Q;
		if((Q-P)>=2)
			FS++;
	}
	cout<<FS;
}