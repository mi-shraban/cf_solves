/*
Problem Link: https://codeforces.com/problemset/problem/1381A/1
Solve Link: https://codeforces.com/contest/1381A/submission/124126167
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		string s;
		cin>>s;
		
		int ob=0, cb=0, move=0;
		
		for(int i=0; i<n; i++)
		{
			if(s[i]=='(' and s[i+1]==')')
			{
				i++;
				continue;
			}
			
			if(s[i]=='(')
				ob++;
			else
			{
				cb++;
				
				if(ob<cb)
				move++, cb--;
			}	
		}
		cout<<move<<endl;		
	}
	
	return 0;
}