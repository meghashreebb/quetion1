#include <iostream> 
#include<iomanip>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float s;
        cin>>s;
        if(s<1500){
            cout<<2*s<<endl;
        }
        else{
            cout<<fixed<<setprecision(2)<<s+500.0f+s*0.98f<<endl;
        }
    }
    return 0;
}