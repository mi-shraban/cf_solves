/*
Problem Link: https://codeforces.com/problemset/problem/510/A
Solve Link: https://codeforces.com/contest/510/submission/116949201
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	short int n, m;
	cin>>n>>m;
	
	int odd=0;
	
	for(int i=0; i<n; i++)
	{
		if(i%2==0)
		
		for(int j=0; j<m; j++)
		{
			cout<<"#";
		}
		
		else
		{
			odd++;
			
			for(int j=0; j<m; j++)
			{
				if	(odd%2==1 and j==m-1)
					cout<<"#";
				else if	(odd%2==0 and j==0)
					cout<<"#";
				else
					cout<<".";
			}
		}
		cout<<"\n";
	}
	
	return 0;
}