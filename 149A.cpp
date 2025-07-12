/*
Problem Link: https://codeforces.com/problemset/problem/149/A
Solve Link: https://codeforces.com/contest/149/submission/117972461
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned short int k;
	cin>>k;
	
	unsigned short int a[12], tg=0 ;
	
	for(int i=0; i<12; i++)
	{
		cin>>a[i];
		tg+=a[i];
	}
	
	if(tg<k)
		cout<<-1;
	else
	{
		sort(a, a+ sizeof(a)/sizeof(a[0]), greater<int>());
		unsigned short int sum=0, month=0;
		
		while(sum<k)
		{
			sum+=a[month];
			month++;
		}
		
		cout<<month;
	}
	
	return 0;
}