#include<iostream>
#include <utility>


using namespace std;


void selection_sort(int arr[] , int n)
{
    int minIndex=1;
  for(int i=0;i<n-1;i++)

    for(int j=n+1; j<n;j++)
    {     

        if(arr[j]<arr[minIndex])
        {
            minIndex=j;
        }

    }
    swap(arr[minIndex],arr[i]);
  }

}
void Printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] << endl;
    }
}

int main()
{
    int arr[5]={5,15,3,2,80};
    selection_sort(arr,5);

    Printarr(arr,5);
    return 0;
}