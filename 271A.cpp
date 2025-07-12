/*
Problem Link: https://codeforces.com/problemset/problem/271/A
Solve Link: https://codeforces.com/contest/271/submission/113561893
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int y;
	cin>>y;
	int a, b, c, d;
	
	while(y>0)
	{
		y++;
		a= y/1000;
		b= y/100%10;
		c= y/10%10;
		d= y%10;
		if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d)
			break;
	}
	cout<<y;
}