/*
Problem Link: https://codeforces.com/problemset/problem/110/A
Solve Link: https://codeforces.com/contest/110/submission/112314924
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,count=0;
	string s;
	
	cin>>s;
	for(i=0; i<s.size(); i++)
	{
		if(s[i]=='7' or s[i]=='4')
		count++;
	}
	if(count==7 or count==4)
	cout<<"YES";
	else cout<<"NO"<<endl;
}