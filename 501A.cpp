/*
Problem Link: https://codeforces.com/problemset/problem/501/A
Solve Link: https://codeforces.com/contest/501/submission/114059535
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	short int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	double ax, ay, bx, by, x, y;
	
	ax=((3*a)/10);
	ay=(a-a/250*c);
	x=max(ax, ay);
	
	bx=((3*b)/10);
	by=(b-b/250*d);
	y=max(bx, by);
	
	if(x>y)
		cout<<"Misha";
	else if(y>x)
		cout<<"Vasya";
	else
		cout<<"Tie";
		
	return 0;
}