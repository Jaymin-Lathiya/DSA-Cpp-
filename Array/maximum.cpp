#include<iostream>

using namespace std;

int maxi(int arr[] , int length)
{

    int maxnum=INT_MIN;

    for(int i=0;i<length; i++)
    {
        if(arr[i]>maxnum)
        {
            maxnum=arr[i];
        }
    }

    return maxnum;
}

int minint(int arr[] , int length)
{

    int minnum=INT_MAX;

    for(int i=0;i<length; i++)
    {
        if(arr[i]<minnum)
        {
            minnum=arr[i];
        }
    }

    return minnum;
}
int main()
{
    int arr[5]={5,8,6,2,4};

    // max(arr,5);


    cout << "Max Value is"<< maxi(arr,5) << endl;
        cout << "min Value is"<< minint(arr,5) << endl;


}

