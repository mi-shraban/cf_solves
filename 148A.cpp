/*
Problem Link: https://codeforces.com/problemset/problem/148/A
Solve Link: https://codeforces.com/contest/148/submission/115358908
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	short int k, l, m, n;
	int d;
	
	cin>>k>>l>>m>>n>>d;
	
	int dmg=d;
	
	if(k==1 or l==1 or m==1 or n==1)
		cout<<dmg;
	else if(k>d or l>d or m>d or n>d)
		cout<<"0";
	else
	{
		for(int i=1; i<=d; i++)
		{
			if(i%k != 0 and i%l != 0 and i%m != 0 and i%n != 0)
				dmg--;
		}
		cout<<dmg;
	}
	
	return 0;
}