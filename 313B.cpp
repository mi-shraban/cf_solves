/*
Problem Link: https://codeforces.com/problemset/problem/313/B
Solve Link: https://codeforces.com/contest/313/submission/117441092
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	string s;
	cin>>s;
	
	int m, x=0;
	cin>>m;
	
	int a[100000];
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]==s[i-1])
			x++;
		a[i]=x;
	}
	
	while(m--)
	{
		int l, r;
		cin>>l>>r;
		
		cout<<(a[r-1]-a[l-1])<<endl;
	}
}