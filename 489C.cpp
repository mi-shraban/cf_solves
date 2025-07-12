/*
Problem Link: https://codeforces.com/problemset/problem/489/C
Solve Link: https://codeforces.com/contest/489/submission/120857363
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	int m, s;
	cin>>m>>s;

	if(s==0)
	{
		if(m==1)
		{
			cout<<"0 0\n";
			return 0;
		}
		else
		{
			cout<<"-1 -1\n";
			return 0;
		}
	}
	
	string MAX, MIN;
	
	for(int i=0; i<m; i++)
	{
		int a=min(s,9);
		MAX+=a+'0';
		s-=a;
	}
	
	if(s>0)
	{
		cout<<"-1 -1\n";
		return 0;
	}
	
	for(int i=m-1; i>=0; i--)
	{
		MIN+=MAX[i];
	}
	
	int j=0;
	while(MIN[j]=='0')
	{
		j++;
	}

	MIN[j]--;
	MIN[0]++;

	cout<<MIN<<" "<<MAX<<endl;
	
	return 0;
}