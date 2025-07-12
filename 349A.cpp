/*
Problem Link: https://codeforces.com/problemset/problem/349/A
Solve Link: https://codeforces.com/contest/349/submission/120959935
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int t, a=0, b=0;
	string s= "YES";
	
	while(n--)
	{
		cin>>t;
	
		if(t==25)
			a++;
			
		else if(t==50)
		{
			b++;
			a--;
			
			if(a<0)
			{
				s="NO";
				break;
			}
		}
		
		else
		{
			if(a>=1 and b>=1)
			{
				a--;
				b--;
			}
			
			else if(a>=3)
				a-=3;
			
			else
			{
				s="NO";
				break;
			}
		}
	}
	cout<<s<<endl;
	
	return 0;
}