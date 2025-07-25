#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> times;
    for(int i = 0;i<n;i++){
      int a,b;
      cin>>a>>b;
      times.push_back({a,1});
      times.push_back({b,-1});
    }

    sort(times.begin(),times.end());

    int sum = 0;
    int ans = 0;
    for(auto i : times){
      sum+=i.second;
      ans = max(ans,sum);
    }

    cout<<ans<<endl;
    return 0;
}