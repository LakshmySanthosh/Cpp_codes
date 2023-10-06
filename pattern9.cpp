#include<iostream>
using namespace std;

/*
        1
      1 2 1
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1
*/
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<"  ";
        }
        int k=1;
        for(int j=0;j<i;j++)
        {
            cout<<k++<<" ";
        }
        k=i-1;
        for(int j=0;j<i-1;j++)
        {
            cout<<k--<<" ";
        }
        cout<<endl;
    }
    return 0;
}