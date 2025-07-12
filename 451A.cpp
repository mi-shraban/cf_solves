/*
Problem Link: https://codeforces.com/problemset/problem/451/A
Solve Link: https://codeforces.com/contest/451/submission/112907197
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m, n;
	cin>>m>>n;
	int i, count=0;
	for(i=0; ;i++)
	{
		if((n-i==0) or (m-i==0))
			break;
			count++;
	}
	if(count%2!=0)
		cout<<"Akshat";
	else cout<<"Malvika"<<endl;
	
	return 0;
}