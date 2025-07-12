/*
Problem Link: https://codeforces.com/problemset/problem/1368/A
Solve Link: https://codeforces.com/contest/1368/submission/188400783
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
			
		int even=0, odd=0, fine=0;	
		
		for(int i=0; i<n; i++)
		{
			if(i%2==0)
			{
				if(a[i]%2==0)
					fine++;
				else
					even++;
			}
			else
			{
				if(a[i]%2==1)
					fine++;
				else
					odd++;
			}
		}
		if(fine==n)
		{
			cout<<"0"<<endl;
		}
		else if(odd==even)
		{
			cout<<even<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	
	return 0;
}