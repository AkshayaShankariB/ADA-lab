#include<stdio.h>
void main()
{
 float m,p[10],w[10],ratio[10],temp,total=0.0;
 int n,i,j;
 printf("Enter the number of products:");
 scanf("%d",&n);
 printf("Enter the bag capacity:");
 scanf("%f",&m);
 printf("Enter the items profit:");
 for(i=0;i<n;i++)
 scanf("%f",&p[i]);
 printf("Enter the items weight:");
 for(i=0;i<n;i++)
 scanf("%f",&w[i]);
 for(i=0;i<n;i++)
 ratio[i]=p[i]/w[i];
 for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
 if(ratio[i]<ratio[j])
 {
  temp=ratio[j];
  ratio[j]=ratio[i];
  ratio[i]=temp;
  temp=w[j];
  w[j]=w[i];
  w[i]=temp;
  temp=p[j];
  p[j]=p[i];
  p[i]=temp;
 } 
 printf("Knapsack problems using Greedy Algorithm:\n");
 for(i=0;i<n;i++)
 {
  if(w[i]>m)
  break;
  else
  {
   total=total+p[i];
   m=m-w[i];
  }
 }
 if(i<n)
 {
  total=total+(ratio[i]*m);
 }
 printf("The maximum profit is:%f\n",total);
}    
 
 
