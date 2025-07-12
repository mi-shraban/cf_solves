/*
Problem Link: https://codeforces.com/problemset/problem/313/A
Solve Link: https://codeforces.com/contest/313/submission/113019496
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string s,y;
	cin>>s;
	int n=s.size();
	
	if(s[0]=='-')
	{
		char a=s[n-1], b=s[n-2];
		if(a>b)
		{
			for(int i=1; i<n; i++)
			{
				if(i!=n-1)
				y.push_back(s[i]);
			}
		}
		else
		{
			for(int i=1; i<n; i++)
			{
				if(i!=n-2)
				y.push_back(s[i]);
			}
		}
		if(y[0]=='0')
			cout<<"0";
		else cout<<"-"<<y<<endl;	
	}
	
	else cout<<s<<endl;
}