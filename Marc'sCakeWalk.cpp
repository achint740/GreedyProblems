#include<iostream>
#include<cmath>
using namespace std;

void sort(int a[],int n)
{
    int i,j,key;

    for(i=1;i<n;i++)
     {
         j=i-1;
         key=a[i];
         while(j>=0 && a[j]>key)
          {
              a[j+1]=a[j];
               j--;
          }
          a[j+1]=key;
     }
}

int main()
{
    int n,i,j;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
      cin>>a[i];

    sort(a,n);
   
   //for(i=0;i<n;i++)
     //cout<<a[i]<<" ";
    j = n - 1;
    unsigned long long int sum = 0;
   while(j>=0)
   {
     sum+=a[n-1-j]*pow(2,j);
     j--;
   }
   cout<<sum;
}
