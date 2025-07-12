/*
Problem Link: https://codeforces.com/problemset/problem/266/B
Solve Link: https://codeforces.com/contest/266/submission/113364038
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	
	string s;
	cin>>s;
	
	while(t--)
	{
		for(int i=0; i<n; i++)
		{
			if(s[i]=='B' and s[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
				i+=1;
			}
		}
	}
	cout<<s<<endl;
	
	return 0;
}