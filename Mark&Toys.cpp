#include<iostream>
using namespace std;
int main()
{
 int n,p,i;
 cin>>n>>p;
 int arr[n];
 for(i=0;i<n;i++)
   cin>>arr[i];
 int key,j; 
   for (i = 1; i < n; i++) 
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
   int s=0;
   for(i=0;i<n;i++)
   {
       s+=arr[i];
     if(s>p)
      break;
   }
   cout<<i;
return 0;
}
