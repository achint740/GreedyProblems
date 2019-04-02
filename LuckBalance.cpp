#include<iostream>
using namespace std;
int main()
{
 int n,k,i,j,key;
 int sum=0;
 cin>>n>>k;
 int a[n][2];
 //Input
  for(i=0;i<n;i++)
  {
      for(j=0;j<2;j++)
      {
          cin>>a[i][j];
      }
  }
  j=0;
  int ar[n];
  //Setting an array of imp. and adding un_imp. to sum
  for(i=0;i<n;i++)
  {
      if(a[i][1]==0)
       sum+=a[i][0];
     else
     {
       ar[j]=a[i][0];
       j++;
     }
  }
  //Sorting imp. elements
 int n1=j;
   for (i = 1; i <n1; i++) 
   { 
       key = ar[i]; 
       j = i-1; 
       while (j >= 0 && ar[j] > key) 
       { 
           ar[j+1] = ar[j]; 
           j = j-1; 
       } 
       ar[j+1] = key; 
   } 
   int count=0;
   for(i=n1-1;i>=0;i--)
   {
       if(count>=k)
         sum-=ar[i];
         else
          sum+=ar[i];
       count++;
   }
   cout<<sum;
}
