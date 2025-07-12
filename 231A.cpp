/*
Problem Link: https://codeforces.com/problemset/problem/231/A
Solve Link: https://codeforces.com/contest/231/submission/110744068
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,i,p,v,c,sum=0 ;
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>p>>v>>c;
		if(p+v+c>=2)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
}