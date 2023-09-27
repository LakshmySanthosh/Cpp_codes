#include<iostream>
using namespace std;

/*
A 
B C
D E F
G H I J
K L M N O
*/

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    char k='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}