/*
Problem Link: https://codeforces.com/problemset/problem/459/B
Solve Link: https://codeforces.com/contest/459/submission/121181895
*/

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';
 
int main()
{
	long long n;
	cin>>n;
	
	int a[n];
	
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	sort (a, a+n);
	
	long long min=1, max=1, diff, num=1;
	
	if(a[0]!=a[n-1])
	{
		for(int i=1; i<n; i++)
		{
			if(a[i]==a[i-1])
				min++;
			else
				break;
		}
		
		for(int i=n-2; i>=0; i--)
		{
			if(a[i]==a[i+1])
				max++;
			else
				break;
		}
		num=min*max;
	}
	else
		num = n*(n-1)/2;
		
	diff=a[n-1]-a[0];
		
	cout<<diff<<" "<<num<<endl;
	
	return 0;
}