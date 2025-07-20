#include<bits/stdc++.h>

using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    multiset<int> price;
    vector<int> max_price(m);
    for (int i = 0; i < n; i++)
    {
      int x;
      cin>>x;
      price.insert(x);
    }
    for (int i = 0; i < m; i++){
      cin>>max_price[i];
    }
    vector<int> result;
    for(int i = 0;i<m;i++){
      auto it = price.upper_bound(max_price[i]);
      if(it == price.begin()){
        result.push_back(-1);
      }
      else{
        it--;
        result.push_back(*it);
        price.erase(it);
      }
    }
    for(int i = 0;i<result.size();i++){
      cout<<result[i]<<endl;
    }

    return 0;
}