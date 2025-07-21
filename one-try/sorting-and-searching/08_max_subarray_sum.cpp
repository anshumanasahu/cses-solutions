#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> vec(n);
    for(long long i = 0;i<n;i++){
        cin>>vec[i];
    }
    long long curr_sum = 0;
    long long sum = INT_MIN;
    long long left = 0;   
    long long right = 0;

    while(left<n && right<n){
        if(left==right){
            curr_sum = vec[left];
            if(curr_sum<0){
                sum = max(curr_sum,sum);
                left++;
                right++;
                curr_sum = 0;
            }
            else{
                sum = max(curr_sum,sum);
                right++;
            }
        }
        else{
            curr_sum += vec[right];
            if(curr_sum<0){
                sum = max(curr_sum,sum);
                left = right + 1;
                right++;
                curr_sum = 0;
            }
            else{
                sum = max(curr_sum,sum);
                right++;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}