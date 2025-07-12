/*
Problem Link: https://codeforces.com/problemset/problem/1167/A
Solve Link: https://codeforces.com/contest/1167/submission/115149864
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
		
		int a=n;
		string s;
		cin>>s;
			
		for(int i=0; i<n; i++)
		{
			if(s[i]=='8')
			{
				a=i;
				break;
			}
		}
		int len=n-a;
		if(len>=11)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}