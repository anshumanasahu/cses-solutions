#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> p(n);
    for(long long i = 0;i < n;i++){
      cin>>p[i];
    }
    sort(p.begin(),p.end());
    long long median = p[n/2];
    long long cost = 0;
    for(long long i = 0;i<n;i++){
      cost += abs(median-p[i]);
    }
    cout<<cost<<endl;
    return 0;
}