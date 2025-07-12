/*
Problem Link: https://codeforces.com/problemset/problem/734/A
Solve Link: https://codeforces.com/contest/734/submission/112720454
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, A=0, D=0;
	cin>>n;
	string s;
	cin>>s;
	
	for(i=0; i<n; i++)
	{
		if(s[i]=='A')
			A++;
		else D++;
	}
	
	if(A>D)
		cout<<"Anton";
	else if(A==D)
		cout<<"Friendship";
	else cout<<"Danik";
	return 0;
}