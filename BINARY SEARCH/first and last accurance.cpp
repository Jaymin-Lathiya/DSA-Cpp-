#include<iostream>

using namespace std;

int firstaccu(int arr[],int n , int key)
{
    int s=0; 
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            e=mid-1;
            mid=s+(e-s)/2;

        }
        else if(arr[mid]>key)
        {
            s=mid+1;
            mid=s+(s-e)/2;

        }
        mid=s+(e-s)/2;
    }
    return ans;

    
}
int lastaccu(int arr[],int n , int key)
{
    int s=0; 
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            e=mid-1;
            mid=s+(e-s)/2;

        }
        else if(arr[mid]>key)
        {
            s=mid+1;
            mid=s+(s-e)/2;

        }
        mid=s+(e-s)/2;
    }
    return ans;

    
}

int main()
{
    int arr[5]={0,2,3,4,5};
    cout<<firstaccu(arr,5,2)<<endl;

}