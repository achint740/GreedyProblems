#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the decentNumber function below.
void decentNumber(int n) {
    if(n==0 || n==1 || n==2){
      cout<<"-1\n";
      return;
    }
    else
    {
      int no_five = (n/3) * 3;
      int no_three = n - no_five;
      while(no_three%5!=0 && no_five>0)
       {
           no_five-=3;
           no_three+=3;
       }
       if(no_three%5==0){
     for(int i=0;i<no_five;i++)
       cout<<"5";
     for(int i=0;i<no_three;i++)
       cout<<"3";
       cout<<endl;
       }
       else
        {
            cout<<"-1\n";
        }
    }
  return;
}

int main()
{
   int n,t;
   cin>>t;
   while(t--)
   {
       cin>>n;
       decentNumber(n);
   }

    return 0;
}


