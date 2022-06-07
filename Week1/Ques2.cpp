#include<iostream>
using namespace std;

void binary_search(int arr[],int l,int r,int key)
{
    int count=0;
    while(l<=r)
    {
        int mid=l-(l-r)/2;
        count++;
        if(arr[mid]==key)
        {
            cout<<"Present"<<count<<"\n";
            return;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<"Not Present"<<count<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;

        binary_search(arr,0,n-1,key);
    }
}
