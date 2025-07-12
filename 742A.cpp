/*
Problem Link: https://codeforces.com/problemset/problem/742/A
Solve Link: https://codeforces.com/contest/742/submission/117638703
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	int n, x=0;
	cin>>n;
	
	if(n==0)
		x=1;
	else
	{
		if(n%4==0)
			x=6;
		else if(n%4==1)
			x=8;
		else if(n%4==2)
			x=4;
		else if(n%4==3)
			x=2;
	}
	
	cout<<x<<endl;
	
	return 0; 
}