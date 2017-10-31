#include <bits/stdc++.h>
using namespace std;

int func(int mask,int idx)
{
	if(idx==101)
	{
		if(mask==((1<<n)-1))
			return 1;
		return 0;
	}
	int &ans=dp[mask][idx];
	if(ans!=-1)
		return ans;
	ans=0;
	int i;
	fl(i,v1[idx].size())
	{
		int p=v1[idx][i];
		if((mask&(1<<p))==0)
			ans+=func(mask|(1<<p),idx+1);
	}
	return ans;
}

int main() {
	// your code goes here
	int t,n,i,j,a[202],x1,x2,y1,y2;
	//char ;
	
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=1;i<=4*n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	     for(i=1;i<=n;i++)
	    {
	        x1=a[4*i-3];
	        y1=a[4*i-2];
	        x2=a[4*i-1];
	        y2=a[4*i];
	        if()
	    }
	    
	 

	}
	return 0;
}
