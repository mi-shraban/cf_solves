/*
Problem Link: https://codeforces.com/problemset/problem/4/C
Solve Link: https://codeforces.com/contest/4/submission/118189318
 */

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned int n;
	cin>>n;
	
	map <string, int> m;
	string s;
	
	while(n--)
	{
		cin>>s;
		
		if(m.count(s)==0)
		{
			cout<<"OK"<<endl;
			m[s]=1;
		}
		else
		{
			cout<<s<<m[s]<<endl;
			m[s]++;
		}
	}
	
	return 0;
}