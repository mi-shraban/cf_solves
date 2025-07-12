/*
Problem Link: https://codeforces.com/problemset/problem/489/B
Solve Link: https://codeforces.com/contest/489/submission/118353261
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned short int n;	cin>>n;
	unsigned short int a[n];
	for(unsigned short int i=0; i<n; i++)
		cin>>a[i];
			
	unsigned short int m;	cin>>m;
	unsigned short int b[m];
	for(unsigned short int j=0; j<m; j++)
		cin>>b[j];
		
	sort(a, a+n);
	sort(b, b+m);
	
	unsigned short int ans=0;
	
	for(unsigned short int i=0; i<n; i++)
	{
		for(unsigned short int j=0; j<m; j++)
		{
			if(abs(a[i]-b[j])<2)
			{
				b[j]=1000;
				ans++;
				break;
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

/*i once again declare myself as a BOLOD
after i make the same typing mistake even after rewriting th code (onlyPAIN)*/