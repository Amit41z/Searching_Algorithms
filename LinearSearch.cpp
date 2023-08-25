#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i,key;//int found;
    cout<<"Enter the length of the array:";
    cin>>n;
    cout<<"Enter the elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to search in the array:";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Element found at index "<<i<<endl;         
            break;   //found=1;break;
        }
    }
    if(i == n) //if(found == 0)
    {
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}