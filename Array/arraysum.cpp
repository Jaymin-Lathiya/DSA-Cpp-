// code Studio

#include<iostream>

using namespace std;


int addall(int arr[] , int lenght)
{
  int sum=0;

  for(int i=0;i<lenght;i++){
    sum=sum+arr[i];

  }
  return sum;

}


int main()
{
    int arr[4]={1,210,2,5};

    cout << "The Sum is" << addall(arr,4) << endl;

    return 0;
}