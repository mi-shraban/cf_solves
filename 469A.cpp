/*
Problem Link: https://codeforces.com/problemset/problem/469/A
Solve Link: https://codeforces.com/contest/469/submission/113368948
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
		
	int p, q, a[1000], c=0;
	
	cin>>p;
	for(int i=0; i<p; i++)
	{
		cin>>a[i];
	}
	
	cin>>q;
	for(int i=p; i<p+q; i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+(p+q));
	for(int i=0; i<p+q; i++)
	{
		if(a[i]!=a[i+1])
			c++;
	}
	
	if(c==n)
		cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";

}