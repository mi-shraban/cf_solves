/*
Problem Link: https://codeforces.com/problemset/problem/59/A
Solve Link: https://codeforces.com/contest/59/submission/112361996
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,upper=0,lower=0;
	string A;
	cin>>A;

	for(i=0; i<A.size(); i++)
	{
		if(isupper(A[i]))
			upper++;
		else lower++;
	}
	
	if(upper>lower)
	{
		for(i=0; i<A.size(); i++)
		{
			A[i]=(toupper(A[i]));	
		}
		cout<<A;
	}
	
	else if(upper<lower)
	{
		for(i=0; i<A.size(); i++)
		{
			A[i]=(tolower(A[i]));
		}
		cout<<A;
	}
	
	else if(upper=lower)
	{
		for(i=0; i<A.size(); i++)
		{
			A[i]=(tolower(A[i]));
		}
		cout<<A;
	}	
	
}