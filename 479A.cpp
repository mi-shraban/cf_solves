/*
Problem Link: https://codeforces.com/problemset/problem/479/A
Solve Link: https://codeforces.com/contest/479/submission/112466728
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	int p,q,r,s,t,ans;
	
	cin>>a>>b>>c;
	
	p=a+b*c;
	q=a*(b+c);
	r=a*b*c;
	s=(a+b)*c;
	t=a+b+c;
	
	ans=max(t,max(s,max(r,max(p,q))));
	cout<<ans;
}