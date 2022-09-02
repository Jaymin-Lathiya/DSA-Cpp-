#include<iostream>
#include<vector>

using namespace std;


void MoveZero(int arr[], int n)
{
  int i=0;
  for(int j=0; j<n;j++)
  {
    if(arr[i] !=0)
    {
            swap(arr[j],arr[i]);
            i++;

    }
  }
}

void printArr(int arr[],int n)

{
    for(int i=0; i<n; i++)
    {
    cout<<arr[i] << " ";
    }
}

int main()
{
    int arr[5]={0,10,15,2,0};
    MoveZero(arr,5);
    printArr(arr,5);

    return 0;

    

}