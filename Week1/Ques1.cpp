#include<iostream>
using namespace std;
void linear_search(int arr[],int n, int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        if(arr[i]==key)
        {
            cout<<"Present"<<count<<"\n";
            return;
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

        linear_search(arr,n,key);
    }
}
