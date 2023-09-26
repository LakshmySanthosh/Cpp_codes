#include<iostream>
using namespace std;

/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9 
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
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}