/*
Problem Link: https://codeforces.com/problemset/problem/1154/A
Solve Link: https://codeforces.com/contest/1154/submission/115425968
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> x(4);
	for(int i=0; i<4; i++)
		cin>>x[i];
		
	sort(x.begin(), x.end());
	
	int a=x[3]-x[0];
	int b=x[3]-x[1];
	int c=x[3]-x[2];
	
	cout<<a<<" "<<b<<" "<<c<<endl;

	
	return 0;
}