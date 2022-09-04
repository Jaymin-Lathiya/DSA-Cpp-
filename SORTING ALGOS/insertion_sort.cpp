#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {  int j=i-1;
        int temp=arr[i];
        for(; j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[i];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }


}

void printArr(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
} 
int main()
{
    int arr[5]={5,10,12,4,80};
    insertion_sort(arr,5);
    printArr(arr,5);

    return 0;

}