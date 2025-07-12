/*
Problem Link: https://codeforces.com/problemset/problem/405/A
Solve Link: https://codeforces.com/contest/405/submission/113069646
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+n);
	
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	
	return 0;
}