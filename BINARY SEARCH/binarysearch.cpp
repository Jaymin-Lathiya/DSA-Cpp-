#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start=0, end=n-1,mid;
    mid=start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
           start=mid+1;

        }
        else{
            end=mid-1;


        }
            mid=(start+(end-start)/2);
    }
    return -1;
    


}


int main()
{
    int arr[]={1,4,5,78,89,100};

    cout<< binarySearch(arr,6,78)<< " ";

     return 0;

}
