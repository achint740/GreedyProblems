//One TestCase Timeout

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int maxv(vector<int>v)
 {
     if(v.size()==0)
       return -1;

     if(v.size()==1)
       return 0;

     long long int i,loc = 0;
    long long int max1 = v[0];

     for(i=1;i<v.size();i++)
      {
          if(v[i]>max1)
           {
               max1=v[i];
               loc=i;
           }
      }
    return loc;
 }

// Complete the boardCutting function below.
int boardCutting(vector<int> cost_y, vector<int> cost_x) {
   long long int vt=1,ht=1;
    long long int total_cost = 0;
    long long int y1 = cost_y.size();
   long long int x1 = cost_x.size();
    while(vt<=y1 || ht<=x1)
     {
         long long int px,py;
         vector<int>::iterator i;
        long long int m1 = maxv(cost_x);
        long long int m2 = maxv(cost_y);
         if(m1==-1 || m2==-1)
         {
             if(m1==-1)
               px=INT_MIN;
             if(m2==-1)
               py=INT_MIN; 
         }
         else
          {
              px=cost_x[m1];
              py=cost_y[m2];
          }
          int j = 0;
        if(px>py)
          {
             ht++;
             total_cost+=(cost_x[m1]*vt);
             total_cost%=1000000007;
              i = cost_x.begin();
             i+=m1;
             cost_x.erase(i);
          }
         else if(px==py)
         {
             if(cost_y.size()>=cost_x.size())
              {
                vt++;
             total_cost+=(cost_y[m2]*ht);
             total_cost%=1000000007;
             i = cost_y.begin();
             i+=m2;
             cost_y.erase(i); 
              }
             else
             {
                ht++;
             total_cost+=(cost_x[m1]*vt);
             total_cost%=1000000007;
              i = cost_x.begin();
             i+=m1;
             cost_x.erase(i);
             }
         }
         else
         {
             vt++;
             total_cost+=(cost_y[m2]*ht);
             total_cost%=1000000007;
             i = cost_y.begin();
             i+=m2;
             cost_y.erase(i);
         }
        //cout<<total_cost<<" ";
     }
    // if(!cost_x.empty()){
    //     cout<<cost_x[0]<<"x"<<ht<<vt;
    //   total_cost+=(cost_x[0]*(vt-1));
    // }
    // if(!cost_y.empty()){
    //    cout<<cost_y[0]<<"y";
    //   total_cost+=(cost_y[0]*(ht-1));
    // }
return total_cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string mn_temp;
        getline(cin, mn_temp);

        vector<string> mn = split_string(mn_temp);

        int m = stoi(mn[0]);

        int n = stoi(mn[1]);

        string cost_y_temp_temp;
        getline(cin, cost_y_temp_temp);

        vector<string> cost_y_temp = split_string(cost_y_temp_temp);

        vector<int> cost_y(m-1);

        for (int i = 0; i < m-1; i++) {
            int cost_y_item = stoi(cost_y_temp[i]);

            cost_y[i] = cost_y_item;
        }

        string cost_x_temp_temp;
        getline(cin, cost_x_temp_temp);

        vector<string> cost_x_temp = split_string(cost_x_temp_temp);

        vector<int> cost_x(n-1);

        for (int i = 0; i < n-1; i++) {
            int cost_x_item = stoi(cost_x_temp[i]);

            cost_x[i] = cost_x_item;
        }

        int result = boardCutting(cost_y, cost_x);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
