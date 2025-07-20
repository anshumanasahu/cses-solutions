#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0;i<n;i++){
      cin>>a[i];
    }
    for(int j = 0;j<m;j++){
      cin>>b[j];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i = 0;
    int j = 0;
    int cnt = 0;

    while(i<n && j<m){
      if(b[j]<a[i]-k){
        j++;
      }
      else if(b[j]>a[i]+k){
        i++;
      }
      else{
        i++;
        j++;
        cnt++;
      }
    }

    cout<<cnt<<endl;
    return 0;
}