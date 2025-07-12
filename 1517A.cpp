/*
Problem Link: https://codeforces.com/problemset/problem/1517/A
Solve Link: https://codeforces.com/contest/1517/submission/114324334
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	short int t;
	cin>>t;
	long long n;
	
	while(t--)
	{
		cin>>n;
		if(n%2050!=0)
			cout<<"-1\n";
		else
		{
			long long k=0;
			n/=2050;
			
			while(n)
			{
				k+=n%10;
				n/=10;
			}
			cout<<k<<endl;
		}
	}
	return 0;
}