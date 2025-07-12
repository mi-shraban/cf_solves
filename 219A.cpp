/*
Problem Link: https://codeforces.com/problemset/problem/219/A
Solve Link: https://codeforces.com/contest/219/submission/114781876
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k, ans=0;
	cin>>k;
	
	string s;
	cin>>s;
	
	int len=s.size();
	sort (s.begin(), s.end());
	
	char c;
	
	for(int i=0; i<s.size(); i++)
	{
		if(i%k==0)
			c=s[i];
		if(s[i]==c)
			ans++;
	}
	
	if(len==ans and ans%k==0)
	{
		for(int i=0; i<k; i++)
		{
			for(int len=0; len<s.size(); len+=k)
			{
				cout<<s[len];
			}
		}
	}
	else
		cout<<"-1";
		
	return 0;
}