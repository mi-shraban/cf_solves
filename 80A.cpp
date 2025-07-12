/*
Problem Link: https://codeforces.com/problemset/problem/80/A
Solve Link: https://codeforces.com/contest/80/submission/113635627
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	
	if(n==2 and m==3)	cout<<"YES";
	else if(n==3 and m==5)	cout<<"YES";
	else if(n==5 and m==7)	cout<<"YES";
	else if(n==7 and m==11)	cout<<"YES";
	else if(n==11 and m==13)	cout<<"YES";
	else if(n==13 and m==17)	cout<<"YES";
	else if(n==17 and m==19)	cout<<"YES";
	else if(n==19 and m==23)	cout<<"YES";
	else if(n==23 and m==29)	cout<<"YES";
	else if(n==29 and m==31)	cout<<"YES";
	else if(n==31 and m==37)	cout<<"YES";
	else if(n==37 and m==41)	cout<<"YES";
	else if(n==41 and m==43)	cout<<"YES";
	else if(n==43 and m==47)	cout<<"YES";
	else cout<<"NO";
	
	return 0;
}