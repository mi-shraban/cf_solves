/*
Problem Link: https://codeforces.com/problemset/problem/1367/A
Solve Link: https://codeforces.com/contest/1367/submission/114458571
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s,s1;
		cin>>s;
		
		for(int i=0; i<(s.size()-1); i++)
		{
			if(i==0)
				s1+=s[i];
				
			if(s[i]==s[i-1])
			{
				s1+=s[i];
				i++;
			}			
		}
		s1+=s[s.size()-1];
		
		cout<<s1<<endl;
	}
	return 0;
}