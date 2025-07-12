/*
Problem Link: https://codeforces.com/problemset/problem/474/A
Solve Link: https://codeforces.com/contest/474/submission/116598812
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	char c;
	cin>>c;
	
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	string s1, ans;
	
	cin>>s1;
	
	for(int i=0; i<s1.size(); i++)
	{
		int pos=s.find(s1[i]);
		
		if(c=='R')
			ans+=s[pos-1];
		else
			ans+=s[pos+1];
	}
	
	cout<<ans;
	
	return 0;
}