#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
int i,key,min,j,n;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
  cin>>arr[i]; 
   for(i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
   int diff[n-1];
   int x=0;
   for(i=1;i<n;i++)
   {
    diff[x] = abs(arr[i]-arr[i-1]);
    x++;
   }
   for(i=0;i<n-1;i++)
   {
       if(i==0)
       min=diff[0];
       if(i>0 && diff[i]<min)
       min=diff[i];
   }
cout<<min;
}
