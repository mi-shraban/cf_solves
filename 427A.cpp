/*
Problem Link: https://codeforces.com/problemset/problem/427/A
Solve Link: https://codeforces.com/contest/427/submission/113608641
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a, solved=0, unsolved=0;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		if	(a>0)
			solved+=a;
		else 
		{
			if	(solved<1)
				unsolved++;
			else
				solved--;
		}
	}
	cout<<unsolved;
	
	return 0;	
}