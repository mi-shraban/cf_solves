/*
Problem Link: https://codeforces.com/problemset/problem/1328/C
Solve Link: https://codeforces.com/contest/1328/submission/117845470
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned short int t;
	cin>>t;
	
	while(t--)
	{
		unsigned short int n;	
		cin>>n;
		
		string x, a(n,'0'), b(n,'0');
		cin>>x;
		
		for(int i=0; i<n; i++)
		{
			if(x[i]=='1')
			{
				a[i]='1';
				b[i]='0';
				
				for(int j=i+1; j<n; j++)
				{
					b[j]=x[j];
				}
				break;
			}
			else
			{
				a[i]=b[i]='0' + (x[i]-'0')/2;
			}
		}
		
		cout<<a<<endl;
		cout<<b<<endl;
	}
	
	return 0;
}