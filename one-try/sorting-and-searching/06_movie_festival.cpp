#include<bits/stdc++.h>

using namespace std;
bool compare(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second<b.second;
}
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> times;
    for(int i = 0;i < n;i++){
        int a,b;
        cin>>a>>b;
        times.push_back({a,b});
    }
    sort(times.begin(),times.end(),compare);

    int i = 0;
    int j = 1;
    int cnt = 1;
    while(i<n && j<n){
        int end = times[i].second;
        int start = times[j].first;

        if(start<end){
            j++;
        }
        else{
            cnt++;
            i = j;
            j++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}