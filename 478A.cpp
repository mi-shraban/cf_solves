/*
Problem Link: https://codeforces.com/problemset/problem/478/A
Solve Link: https://codeforces.com/contest/478/submission/122264962
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int c[5], sum=0;
	
	for(int i=0; i<5; i++)
	{
		cin>>c[i];
		sum+=c[i];
	}
	
	if(sum%5!=0 or sum==0)
	{
		cout<<"-1"<<endl;
	}
	else
		cout<<sum/5<<endl;
		
	return 0;
}