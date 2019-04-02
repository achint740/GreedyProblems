#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    int key,j; 
   for(i = 1; i < n; i++) 
   { 
       key = a[i]; 
       j = i-1; 
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && a[j] > key) 
       { 
           a[j+1] = a[j]; 
           j = j-1; 
       } 
       a[j+1] = key; 
   } 
  i=0;
  int count=0;
  while(i<n)
  {
      count++;
      for(j=i+1;j<n;j++)
        {
            if(a[j] > a[i] + 4)
              break;
        }
        i=j;
  }
  cout<<count;
  return 0;
}
