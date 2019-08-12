#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int rating[n],candies[n];
    //Input
    for(i=0;i<n;i++){
      cin>>rating[i];
      candies[i]=1;
    }
    for(i=1;i<n;i++){
        if(rating[i]>rating[i-1]){
            candies[i]=candies[i-1]+1;
        }
        //if(rating[i]<=rating[i-1] && candies[i-1]<=candies[i]){
          //  candies[i-1]++;
        //}
    }
    for(i=n-2;i>=0;i--){
        if(rating[i]>rating[i+1] && candies[i]<=candies[i+1]){
            candies[i] = candies[i+1] + 1;
        }
    }
long long int sum=0;
     for(i=0;i<n;i++){
         //cout<<candies[i]<<",";
       sum+=candies[i];
     }
cout<<sum;
}
