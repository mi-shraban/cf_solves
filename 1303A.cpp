/*
Problem Link: https://codeforces.com/problemset/problem/1303/A
Solve Link: https://codeforces.com/contest/1303/submission/114810664
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int pos1=0, pos2=0, ans=0;
		
		string s;
		cin>>s;
		
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='1')
			{
				pos1=i;
				break;
			}
		}
		
		for(int i=s.size()-1; i>=pos1; i--)
		{
			if(s[i]=='1')
			{
				pos2=i;
				break;
			}	
		}
		
		for(int i=pos1; i<pos2; i++)
		{
			if(s[i]=='0')
				ans++;
		}
				
		cout<<ans<<endl;
	}
	return 0;
}