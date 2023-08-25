#include<iostream>
using namespace std;

int interpolationSearch(int arr[],int n,int data)
{
    int l=0;
    int r=n-1;
    while(l<=r && data>=arr[l] && data<=arr[r])
    {
        int pos = l+(((double)(r-l)/(arr[r]-arr[l]))*(data-arr[l]));
        if(arr[pos] == data)
            return pos;
        if(arr[pos] < data)
            l=pos+1;
        else
            r=pos-1;
    }
    return -1;
}
int main()
{
    int arr[100],n,i,data,l,r,mid;
    cout<<"Enter the length of the array:";
    cin>>n;
    cout<<"Enter the elements of the array in the sorted order:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to search in the array:";
    cin>>data;
    int result=interpolationSearch(arr,n,data);
    if(result == -1)
    {
        cout<<"Element not found."<<endl;
    }
    else
    {
        cout<<"Element found at index "<<result<<"."<<endl;
    }
    return 0;
}