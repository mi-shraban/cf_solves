/*
Problem Link: https://codeforces.com/problemset/problem/1520/A
Solve Link: https://codeforces.com/contest/1520/submission/124828248
*/

#include<bits/stdc++.h>
#define long long int
using namespace std;

int32_t main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;		cin>>n;
		string s; 	cin>>s;
		int a[26]={0}, count=0;
		
		for(int i=0; i<n; i++)
		{
			a[s[i]-'A']++;
			
			if(a[s[i]-'A']>1 and s[i-1]!=s[i])
			{
				count=1;
				break;
			}
		}
		if(count ==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}