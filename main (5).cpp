#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll tc;cin>>tc;
    while(tc--){
        ll n;cin>>n;
        vector<ll> arr(n);
        

        for(ll i=0;i<n;i++)cin>>arr[i];
    
      sort(arr.begin(),arr.end(),greater<int>());
      ll area=1;
      ll count=0;
      for(ll i=0;i<n;i++){
          if(arr[i]==arr[i+1]){
              area*=arr[i];
              count++;
              i++;
          }
         if(count==2)
            break;
      }
    
         if(count==2)
            cout<<area<<endl;
        else
            cout<<"-1"<<endl;
        
    }
    return 0;
}