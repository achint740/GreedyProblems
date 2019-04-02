#include<iostream>
using namespace std;

//Sorting
void sort(int a[],int n)
{
  int i,j,key;
  for(i=1;i<n;i++)
  {
      key=a[i];
      j=i-1;
      while(j>=0 && a[j]>key)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=key;
  }
}

//The MAIN Function
int main()
 {
     int n,i,j,k,min;
     cin>>n>>k;
     int a[n];
     for(i=0;i<n;i++) 
       cin>>a[i];
     sort(a,n);
     for(i=0;i<n-k+1;i++)
      {
          j = a[i+k-1] - a[i];
          if(i==0)
           min=j;
          if(i>0 && j<min)
           min=j;
      }
 cout<<min;
 return 0;
 }
