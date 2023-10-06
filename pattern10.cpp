#include<iostream>
using namespace std;

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i+1;j>0;j--)
        {
            cout<<n-j+1<<" ";
        }
        int k=1;
        for(int j=0;j<i-1;j++)
        {
            cout<<"* * ";
        }
        k=i-1;
        for(int j=n-i+1;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}