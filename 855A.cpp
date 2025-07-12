/*
Problem Link: https://codeforces.com/problemset/problem/855/A
Solve Link: https://codeforces.com/contest/855/submission/116594820
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, q="heidi";
	cin>>s;
	
	int c=0, j=0;
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]==q[j])
		{
			c++;
			j++;
		}
	}
	
	if(c==5)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}