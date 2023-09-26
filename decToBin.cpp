#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin >> n;
    int num=n;
    int ans=0;
    int i=0;

    while(n)
    {
        ans+=(n&1)*pow(10,i++);
        n=n>>1;
    }
    cout<<num<<" in binary is "<<ans<<endl;
    return 0;
}