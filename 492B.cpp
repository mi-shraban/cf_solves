/*
Problem Link: https://codeforces.com/problemset/problem/492/B
Solve Link: https://codeforces.com/contest/492/submission/116941848
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, l;
	cin>>n>>l;
	
	int a[n];
	
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	int d;
		
	sort(a, a+n);
	
	d=max(a[0], l-a[n-1])*2;
	
	for(int i=0; i<n-1; i++)
    	d=max(d, a[i+1]-a[i]);
		
	cout<<setprecision(10)<<d/2.0<<endl;
}