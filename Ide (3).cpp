#include <bits/stdc++.h>
using namespace std;
 // matrix chain multiplication

// array - a[1],a[2] ....... a[n+1]
// ith matrix -> dimensions -> a[i]*a[i+1]


int func(int i,int j)
{
	if(i==j)
		return 0;
	int &ans=dp[i][j];
	if(ans!=-1)
		return ans;
	for(int k=i;k<j;k++)
	{
		int cost=a[i]*a[k+1]*a[j+1];
		ans=min(ans,func(i,k)+func(k+1,j)+cost);
	}
	return ans;
}




int main() {
	int s,n,h,count,flag,i,k;
	long long int a[100001],b[100001];
	scanf("%d",&s);
	while(s--)
	{
	   scanf("%d",&n);
	   
	   flag=0;
	   count=1;
	   long long int sum=0,sum1,sum2;
	   for(i=0;i<n;i++)
	   scanf("%lld",&a[i]);
	   k=n-1;
	   
	   for(int j=0;j<n;j++)
	   {sum=0;
	       int f=0;
	       while(j-f>=0)
	       {sum=0;
	   count=1;
	   for(i=f;i<=(n-j+f)/2;i++)
	   {
	     
	    
	     if(a[i]!=count)
	     {
	         sum=sum+a[i]-count;
	          
	     }
	     if(a[i]-count<0)
	     break;
	     count++;
	   }
	   
	   if(a[i]-count<0&&i<(n-j+f)/2)
	     {f++;
	     continue;
	         
	     }
	    printf("%d,%d,\n",j,f);
	   count=count-2;
	   for(i=((n-j+f)/2)+1;i<n;i++)
	   {
	     
	     if(a[i]!=count)
	     {
	       sum=sum+a[i]-count; 
	       
	     }
	     if(a[i]-count<0)
	     break;
	     count--;
	   }
	   
	   
	   if(a[i]-count<0&&i<n)
	     {f++;
	     continue;
	         
	     }
	     flag=1;
	     break;
	   }
	   
	   if(flag==1)
	       break;
	   }
	   printf("%lld\n",sum);
	   
	}
	
	return 0;
}
