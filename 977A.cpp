/*
Problem Link: https://codeforces.com/problemset/problem/977/A
Solve Link: https://codeforces.com/contest/977/submission/112311306
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k;
	cin>>n>>k;
	for(i=0; i<k; i++)
	{
		if(n%10==0)
		{
			n=floor(n/10);
		}
		else n--;
	}
	cout<<n<<endl;
}