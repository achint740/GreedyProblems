#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<long>sticks;
   for(int i=0;i<n;i++)
   {
       long a;
       cin>>a;
       sticks.push_back(a);
   }
   sort(sticks.begin(),sticks.end(),greater<long>());
   int flag=0;
   for(int i=0;i<n-2;i++)
   {
       if(sticks[i+1]+sticks[i+2]>sticks[i])
       {
           cout<<sticks[i+2]<<" "<<sticks[i+1]<<" "<<sticks[i]<<endl;
           flag=1;
           break;
       }
   }
   if(flag==0)
   {
       cout<<"-1";
   }

}
