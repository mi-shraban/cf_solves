/*
Problem Link: https://codeforces.com/problemset/problem/1512/A
Solve Link: https://codeforces.com/contest/1512/submission/117035474
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	short int t;
	cin>>t;
	
	while(t--)
	{
		short int n, pos=0;
		cin>>n;
		
		vector<int> v(n);
		
		for(int i=0; i<n; i++)
			cin>>v[i];
		
		vector<int> a=v;
		
		sort(a.begin(), a.end());
			
		for(int i=0; i<=n; i++)
		{
			if(v[i]!=a[1])
			{
				pos=i+1;
				break;
			}
		}
		
		cout<<pos<<endl;
	}
	
	return 0;
}