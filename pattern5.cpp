#include<iostream>
using namespace std;

/*
E
D E
C D E 
B C D E
A B C D E
*/

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        char k='A'+n-i-1;
        for(int j=0;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}