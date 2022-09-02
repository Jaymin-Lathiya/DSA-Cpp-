#include<iostream>

using namespace std;


void unique(int arr[], int length)
{   int ans=0;

    for(int i=0;i<length;i++){

        ans=ans^arr[i];
    }

    cout << ans << endl;
 }

int main()
{
    int arr[5]={1,2,3,2,3};
    
    unique(arr,5);

}