#include<iostream>

using namespace std;

int peak_index(int arr[], int n)
{
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while(s<e)
    {

        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;


}

int main()
{
    int arr[5]={1,2,5,4,3};
    cout<<peak_index(arr,5)<<endl;;
     

}