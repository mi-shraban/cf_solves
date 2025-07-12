/*
Problem Link: https://codeforces.com/problemset/problem/1366/A
Solve Link: https://codeforces.com/contest/1366/submission/118280717
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned short int t;
	cin>>t;
	
	while(t--)
	{
		unsigned int s, d;
		cin>>s>>d;
		
		cout<<min(s,min(d,((s+d)/3)))<<endl;
	}
}