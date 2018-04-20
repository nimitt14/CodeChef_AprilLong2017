/*You are given an integer sequence A with length N.

Find the number of (unordered) pairs of elements such that the average of these two elements is also present in the sequence. Formally, find the number of pairs (i,j) such that 1=i<j=N and there is an index k (1=k=N) for which 2Ak=Ai+Aj holds.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,c;
	scanf("%d",&t);
	while(t--)
	{
		int f=0;
		scanf("%d",&c);
		int a[c];
		for(int i=0;i<c;i++)
		scanf("%d",&a[i]);
		unordered_set<int>s;
    	for (int i = 0; i < c; i++)
        s.insert(a[i]);
		int *p;	
		//sort(a,a+c);
		for(int i=0;i<c;i++)
		{
			for(int j=i+1;j<c;j++)
				{
					float ab=(a[i]+a[j])/2.0;
					int d=0;
				 if (s.find(ab) != s.end())
				  {
						cout<<ab<<endl;
                f++;
				}
		}
		
	}
	printf("%d",f);
		printf("\n");	

}
	system("pause");
	return 0;
}

