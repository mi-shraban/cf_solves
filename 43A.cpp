/*
Problem Link: https://codeforces.com/problemset/problem/43/A
Solve Link: https://codeforces.com/contest/43/submission/114466629
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int goal=0;
	string team, win;
	
	while(n--)
	{
		if(goal!=0)
		{
			cin>>team;
			if(team==win)
				goal+=1;
			else
				goal-=1;
		}
		else
		{
			cin>>win;
			goal=1;
		}		
	}
	cout<<win<<endl;
	
	return 0;
}