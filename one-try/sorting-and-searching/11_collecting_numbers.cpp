#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> hash(n);
    for(int i =0;i<n;i++){
      cin>>x[i];
      hash[x[i]-1] = i;
    }
    int cnt = 1;
    for(int i=1;i<n;i++){
      if(x[i]<x[i-1]){
        cnt++;
      }
      else{
        continue;
      }
    }
    cout<<cnt<<endl;

    return 0;
}