/*
Problem Link: https://codeforces.com/problemset/problem/255/A
Solve Link: https://codeforces.com/contest/255/submission/113048152
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int n;
	cin>>n;
	int a[n], c=0, bi=0, b=0, x;
	
	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n; i+=3)
		c+=a[i];
	for(int i=1; i<n; i+=3)
		bi+=a[i];
	for(int i=2; i<n; i+=3)
		b+=a[i];

	x=max(c,bi);
	x=max(b,x);
	
	if(x==c) cout<<"chest";
	else if(x==b) cout<<"back";
	else if(x==bi) cout<<"biceps";
	
	return 0;
}