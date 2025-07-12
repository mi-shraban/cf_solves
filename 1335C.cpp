/*
Problem Link: https://codeforces.com/problemset/problem/1335/C
Solve Link: https://codeforces.com/contest/1335/submission/117521619
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
		int n;
		cin>>n;
		
		vector <int> cnt(n+1);
		
		for(int i=0; i<n; i++)
		{
			int x;
			cin>>x;
			
			++cnt[x];
		}	
		int mx=*max_element(cnt.begin(), cnt.end());
		int diff = n+1-count(cnt.begin(), cnt.end(),0);
		
		cout<<max(min(mx-1, diff), min(mx, diff-1))<<endl;
	}
	
	return 0;
}