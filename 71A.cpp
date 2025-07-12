/*
Problem Link: https://codeforces.com/problemset/problem/71/A
Solve Link: https://codeforces.com/contest/71/submission/112915249
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		string s;
		cin>>s;
		if(s.size()<=10)
			cout<<s<<endl;
		else
			cout<<s[0]<<(s.size()-2)<<s[s.size()-1]<<endl;
	}
	return 0;
}