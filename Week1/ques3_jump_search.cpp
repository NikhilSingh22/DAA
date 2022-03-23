#include<iostream>
#include<cmath>
using namespace std;
int c=0;
void linear_search(int arr[],int i,int gap,int key)
{
    for(i;i<i+gap;i++)
    {
        
        if(arr[i]==key)
        {
            c++;
            cout<<"Present "<<c<<endl;
            return;
        }
        c++;
    }
    cout<<"Not present "<< c<<endl;
}
void linear_search1(int arr[],int i,int n,int key)
{
    for(i;i<n;i++)
    {
        
        if(arr[i]==key)
        {
            c++;
            cout<<"Present "<<c<<endl;
            return;
        }
        c++;
    }
    cout<<"Not present "<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ::c=0;
        int n;
        cin>>n;
        int arr[n],key;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
      cin>>key;
        int gap=(int)sqrt(n);
        for(int i=0;i<n;)
        {
            if(arr[i]<key && i+gap<n)
            {
                i=i+gap;
                c++;
            }
            else if(arr[i]<key && i+gap>=n)
            {
                linear_search1(arr,i,n,key);
                break;
            }
            else if(arr[i]>key)
            {
                if(i!=0)
                i=i-gap;
                c++;
                linear_search(arr,i,gap,key);
                break;
            }
            else
            {
                cout<<"Present "<<c<<endl;
                break;
            }
        }
    }
}

