#include<iostream>
using namespace std;

/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>0;j--)
        {
            cout<<"  ";
        }
        int k=1;
        for(int j=0;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}