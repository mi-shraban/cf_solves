/*
Problem Link: https://codeforces.com/problemset/problem/404/A
Solve Link: https://codeforces.com/contest/404/submission/113280025
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j, count=0;
	cin>>n;
	char s[300][300];
	char x, y;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>s[i][j];
		}
	}
	
	x = s[n/2][n/2];
	y = s[0][1];

    for(i=0; i<n; i++)
	{
        if(s[i][i]!=x or s[i][n-(i+1)]!=x or s[i][i]==y or s[i][n-(i+1)]==y)
		{
                count++;
                break;
        }
        for(j=0; j<n; j++)
		{
            if(i!=j and j!=(n-(i+1)))
            {
                if(s[i][j]!=y)
				{
                    count++;
                    break;
                }
            }
        }
    }
	if(count==0) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}