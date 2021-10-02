#include <iostream>
#include <vector>
using namespace std;
/*
*The code works and is fire though some improvements are advisable
=>make it for general user inputs currently works for hardcoded 5

*/

int arr[5] ={3,3,3,3,3};

void Print(int x)
{
    int n=5;
    for(int i =0;i<n;i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
}
void Binary(int n)
{
    if(n<1){
        Print(9);
        
    }

    else{
        arr[n-1] =0;
        Binary(n-1);
        arr[n-1]=1;
        Binary(n-1);
    }

}

int main()
{
    int n;
    cin>>n;
    Binary(n);

}