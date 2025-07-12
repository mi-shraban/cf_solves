/*
Problem Link: https://codeforces.com/problemset/problem/82/A
Solve Link: https://codeforces.com/contest/82/submission/120757574
 */

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	int n;
	cin>>n;

	int x=1;
	while(x*5<n)
	{
		n-=x*5;
		x=x*2;
	}
	
	string s[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cout<<s[(n-1)/x];
}