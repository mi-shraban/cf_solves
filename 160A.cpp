/*
Problem Link: https://codeforces.com/problemset/problem/160/A
Solve Link: https://codeforces.com/contest/160/submission/114053718
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum=0, sum1=0, count=0 ;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sum=sum/2;
	sort(a, a+n);
	
	for(int i=n-1; i>=0; i--)
	{
		sum1+=a[i];
		count++;
		if(sum1>sum)
			break;
	}
	
	cout<<count;
	
	return 0;
}