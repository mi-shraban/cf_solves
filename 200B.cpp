/*
Problem Link: https://codeforces.com/problemset/problem/200/B
Solve Link: https://codeforces.com/contest/200/submission/112815600
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int n;
	cin>>n;
	short int a[n];
	double sum, ans;
	
	for(short int i=0; i<n; i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	
	ans=sum/n;
	cout<<setprecision(12)<<ans<<endl;
	
	return 0;
}