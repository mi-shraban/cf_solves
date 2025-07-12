/*
Problem Link: https://codeforces.com/problemset/problem/677/A
Solve Link: https://codeforces.com/contest/677/submission/112947905
*/

#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, h, duck=0, notduck=0;
	cin>>n>>h;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]<=h)
			notduck++;
		else duck+=2;
	}
	cout<<notduck+duck;
}