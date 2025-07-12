/*
Problem Link: https://codeforces.com/problemset/problem/791/A
Solve Link: https://codeforces.com/contest/791/submission/111911776
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i;
	cin>>a>>b;
	for(i=1;;i++)
	{
		a*=3;
		b*=2;
		if(a>b)
			break;
	}
	cout<<i<<endl;
	return 0;
}