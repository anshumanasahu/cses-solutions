#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> p(n);
    long long sum = 0;
    for(int i = 0;i < n;i++){
      cin>>p[i];
      sum+=p[i];
    }
    long long avg = sum/n;
    int cost = 0;
    for(int i = 0;i<n;i++){
      cost += abs(avg-p[i]);
    }
    cout<<cost<<endl;
    return 0;
}