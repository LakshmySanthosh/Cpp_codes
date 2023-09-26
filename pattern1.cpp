#include<iostream>
using namespace std;

/*
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++)
    {
        k=i+1;
        for(int j=0;j<=i;j++)
        {
            cout<<k--<<" ";
        }
        cout<<endl;
    }
    return 0;
}