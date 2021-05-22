#include <iostream>
using namespace std;
int main() {
  long long int t,c,d,l,mi,ma;
  cin>>t;
  while (t--) {
    cin>>c>>d>>l;
    ma=(c+d)*4;
    if(c>(d*2))
        mi=(c-(d*2)+d)*4;
    else
        mi=(d*4);
    if(l%4==0 && l>=mi && l<=ma){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
  }
}