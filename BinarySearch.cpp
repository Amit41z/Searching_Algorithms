#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int r,int data)
{
    int mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(arr[mid] == data)
        {
            return mid;
        }
        else if(arr[mid] < data)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
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
    l=0;r=n-1;
    int result=binarySearch(arr,l,r,data);

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