#include <iostream>
using namespace std;

int find_peak(int n,int arr[])
{
    int peak =0;
    bool flag = false;

    for(int i = 1;i<n-1;i++)
    {
        if(arr[i-1]< arr[i] && arr[i+1]<arr[i])
        {
            peak=arr[i];
            flag = true;
            break;
        }

    }

    if(flag == false){
        if(arr[0]>arr[1])
        {
            peak = arr[0];
        }
        else if(arr[n-1]>arr[n-2])
        {
            peak = arr[n-1];
        }
    }

    return peak;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i =0;i<n;i++)
    {
        int x;cin>>x;

        arr[i]=x;
    }

   

    cout<<find_peak(n,arr);
}