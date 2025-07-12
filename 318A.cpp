/*
Problem Link: https://codeforces.com/problemset/problem/318/A
Solve Link: https://codeforces.com/contest/318/submission/113012048
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	if(k>ceil(n/2.0))
	{
		k=k-ceil(n/2.0);
		cout<<k*2;
	}
	else
		cout<<k*2-1<<endl;
	
	return 0;
}