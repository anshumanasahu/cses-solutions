#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> a;
    for(int i = 0;i<n;i++){
      int b;
      cin>>b;
      a.push_back({b,i});
    }
    sort(a.begin(),a.end());
    int left = 0;
    int right = n-1;
    pair<int,int> answer = {-1,-1};
    while(left<right){
      if(a[left].first+a[right].first > x){
        right--;
      }
      else if(a[left].first+a[right].first < x){
        left++;
      }
      else{
        answer = {a[left].second+1,a[right].second+1};
        break;
      }
    }

    if(answer.first == -1){
      cout<<"IMPOSSIBLE";
    }
    else{
      if(answer.first>answer.second){
        swap(answer.first,answer.second);
      }
      cout<<answer.first<<" "<<answer.second;
    }
    return 0;
}