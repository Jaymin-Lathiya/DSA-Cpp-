#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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
    int arr[5]={2,15,3,4,80};
    bubble_sort(arr,5);

  printArr(arr,5); 
    return 0;

    

}