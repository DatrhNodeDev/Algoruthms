#include <iostream>
using namespace std;

int DivideandConquer_peak(int n, int arr[])
{
    int l =0;
    int r = n-1;
    for(;l<=r;l++)
    {
        int mid=(l+r)/2;
        int peak=0;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

         else if (mid > 0 && arr[mid - 1] > arr[mid])
         return findPeakUtil(arr, low, (mid - 1), n);

         else
        return findPeakUtil(
            arr, (mid + 1), high, n);

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

    cout<<DivideandConquer_peak(n,arr);

}