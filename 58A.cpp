/*
Problem Link: https://codeforces.com/problemset/problem/58/A
Solve Link: https://codeforces.com/contest/58/submission/111869831
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x=0,y=0;
	string a;
	cin>>a;
	string b="hello";
	for(i=0; i<a.size(); i++)
	{
		if(a[i]==b[x])
		{
			x++;
			y++;
		}
	}
	if(y==5)
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}