/*
Problem Link: https://codeforces.com/problemset/problem/158/A
Solve Link: https://codeforces.com/contest/158/submission/110037940
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,a[100],count=0;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>0 and a[i]>=a[k])
		count++;
	}
	cout<<count<<endl;
}