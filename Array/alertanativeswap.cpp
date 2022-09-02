#include<iostream>

using namespace std;




void swapalter(int arr[],int length){

    for(int i=0; i<length; i=i+2)
    {
        if(i+1 < length)
        {
            swap(arr[i], arr[i+1]);
        }
    
    }

}

void printArr(int arr[], int length)
{
  for(int i=0; i<length;i++ )
  {
    cout << arr[i] << " ";
  }
}

int main()
{
    int arr[5]={1,2,3,4,5};
        int b[6]={1,2,3,4,5,6};


    swapalter(arr,5);

    printArr(arr,5);
        swapalter(b,6);

    printArr(b,6);




    return 0;
}