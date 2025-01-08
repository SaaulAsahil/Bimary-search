#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[10]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int start, mid, end, loc, n;
    start=0;
    end=9;
    loc=-1;
    cout<<"enter value to find"<<endl;
    cin>>n;
    while(start<=end)
    {
        mid=(start+mid)/2;
        if(arr[mid]=n)
        {
            loc=mid;
            break;
        }
        else if(n<mid)
            n=mid-1;
        else
            n=start+1;
    }
    if(loc==-1)
        cout<<n<<"not found in the array"<<endl;
    else
        cout<<n<<"=="<<loc<<endl;
    getch();
}