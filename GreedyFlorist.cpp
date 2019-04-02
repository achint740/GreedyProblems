#include<iostream>
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

     int n,no_frnds,i,j,count,cost,var;

     cin>>n>>no_frnds;
     int a[n];

     for(i=0;i<n;i++)
       cin>>a[i];

      sort(a,n);

      i=n-1;
      count=0;
      cost=0;
     
     if(no_frnds<=n)
      {
        while(i>=0)
        {
          var=0;
            while(var<no_frnds && i>=0)
             {
                 cost = cost + (count+1)*a[i];
                 i--;
                 var++;
             }
            count++;
        }
        cout<<cost;
      }
return 0;     
 }
