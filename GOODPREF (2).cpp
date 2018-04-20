/*You are given an integer n and a string s consisting only of characters 'a' and 'b'. Consider a string t=s+s+?+s??????????????????n times, i.e. the string obtained by concatenating n copies of s.

Find the number of non-empty prefixes of t in which the number of occurrences of 'a' is strictly greater than the number of occurrences of 'b'.
*/

#include<vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		vector<long long int>v;
		int n,a=0,b=0;
		long long int counter=0;
		string s;
		cin>>s;
		fflush(stdin);
		cin>>n;
		int len=s.length();
		for(int i=0;i<n;i++)
		{
			for(int x=0;x<len;x++)
			{
				if(s[x]=='a')
					a++;
				else
					b++;
				if(a>b)
					counter++;
			}
			v.push_back(counter);
			if(n==1)
			{
					break;
			}
			if(n>1)
			{
				if(a==b)
				{
					counter*=n;
					break;
				}
				else if(b>a)
				{
					if(v[i]-v[i-1]==0)
					{
						counter=v[i];
						break;	
					}
				}
				else
				{
					if(v[i]-v[i-1]==len)
					{
						counter=v[i-1]+((n-i)*len);
						break;	
					}
					
				}
			}
		}
		cout<<counter<<endl;
	}
	system("pause");
	return 0;
}
