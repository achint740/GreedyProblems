#include<iostream>
using namespace std;
int main()
{
  int t,n,i,j,k,key,count,a[1000],b[1000];
  cin>>t;
  while(t--)
  {
      cin>>n>>k;
      for(i=0;i<n;i++)
       cin>>a[i];
       for(i=0;i<n;i++)
        cin>>b[i];
      //Sorting array a[n]
      for (i = 1; i < n; i++) 
      { 
         key = a[i]; 
         j = i-1; 
         while (j >= 0 && a[j] > key) 
          { 
           a[j+1] = a[j]; 
           j = j-1; 
          } 
          a[j+1] = key; 
      }
      //Sorting array b[n]
     for (i = 1; i < n; i++) 
      { 
       key = b[i]; 
       j = i-1; 
       while (j >= 0 && b[j] > key) 
       { 
           b[j+1] = b[j]; 
           j = j-1; 
       } 
       b[j+1] = key; 
     }
          //Checking....
     count=0;
     for(i=0;i<n;i++)
     {
       if((a[i]+b[n-1-i])>=k)
        count++;
     }
     if(count==n)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
  }
return 0;
}
