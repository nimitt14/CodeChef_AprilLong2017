/*There are N workers; each worker is of one of the following three types:

A translator translates some text from Chef's language to another langague.
An author writes some text in Chef's language.
An author-translator can both write a text in Chef's language and translate it to another language.
Chef wants to have some text written and translated into some language (different from Chef's language). Chef can't do either of those tasks, but he can hire workers. For each i (1=i=N), if he hires the i-th worker, he must pay that worker ci coins.

Help Chef find the minimum total number of coins he needs to pay to have a text written and translated. It is guaranteed that it is possible to write and translate a text.
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int w,x;
cin>>w;
	int ar_c[w],ar_t[w];
    vector <int> g1;
    vector <int> g2;
    vector <int> g3;
 	for(x=0;x<w;x++)
		cin>>ar_c[x];
	for(x=0;x<w;x++)
		cin>>ar_t[x];
    for (int i=0;i<w;i++)
       { 
			if(ar_t[i]==1)
				g1.push_back(ar_c[i]);
			else if(ar_t[i]==2)
				g2.push_back(ar_c[i]);
			else if(ar_t[i]==3)
				g3.push_back(ar_c[i]);
		}
		sort(g1.begin(),g1.end());		
		sort(g2.begin(),g2.end());
		sort(g3.begin(),g3.end());
		int a,b,c;
		if(g1.size()!=0)
		a=g1.front();
		else
		a=9999999;
		if(g2.size()!=0)
		b=g2.front();
		else
		b=9999999;
		if(g3.size()!=0)
		c=g3.front();
		else
		c=9999999;
	
		
	    if((a+b)<c)
		   	cout<<(a+b);
	    else
	    	cout<<c;
	    return 0;
	 
}
