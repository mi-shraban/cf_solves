/*
Problem Link: https://codeforces.com/problemset/problem/361/A
Solve Link: https://codeforces.com/contest/361/submission/113325056
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==j)
				cout<<k<<" ";
			else
				cout<<"0 ";
		}
		cout<<endl;
	}
	
	return 0;
}