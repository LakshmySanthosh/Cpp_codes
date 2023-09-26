#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    int ans=0;
    
    cout<<"Enter a binary number to convert it to decimal "<<endl;
    cin>>n;
    int i=0;
    while(n!=0)
    {
        if(n%10==1)
        {
            ans+=pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}