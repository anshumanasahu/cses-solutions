#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    vector<int> weight(n);
    for(int i = 0;i < n; i++){
      cin>>weight[i];
    }

    sort(weight.begin(),weight.end());
    int l = 0;
    int r = n-1;
    int cnt = 0;
    while(l<=r){
      if(weight[l]+weight[r]<=x){
        l++;
        r--;
        cnt++;
      }
      else{
        r--;
        cnt++;
      }
    }
    if(l==r){
      cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}