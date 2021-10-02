#include <iostream>
using namespace std;

int fact(int n)
{
    if(n>=1)
    {
        return(n*fact(n-1));
    }

    else
    {
        return 1;
    }
}

int nCr(int n,int r)
{
    int x=fact(n);
    int y=fact(n-r);
    int z=y*fact(r);
    return(x/z);
}
int main()
{
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<nCr(n,r);

}