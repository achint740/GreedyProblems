#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k1,k2;
    cin>>k1>>k2;
    int i;
    for(i=1;;i++)
    {
        if((k2*i)%26==1)
        {
          break;
        }
    }
    int letter;
    string ans="";
    int k2new=i;
    for(int i=0;i<s.length();i++)
    {
        int r = s[i] -'A';
        letter=((r-k1)*k2new)%26;
        if(letter<0)
        {
            letter+=26;
        }
        cout<<letter<<" ";
        ans+=(char)(letter+65);
    }
    cout<<endl<<ans<<endl;
    return 0;
}
