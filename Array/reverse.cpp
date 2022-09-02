// #include<iostream>

// using namespace std;

// void reverse(int arr[], int n){
//     int start=0;
//     int last=n-1;

//     while (start<=last)
//     {
//         swap(arr[start],arr[last]);
//         start +=1;
//         last -=1;
//     }
// }

// void printArray(int arr[], int n ){
//     for(int i=0; i<=n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl; 

// }



// int main(){
//     int a[6]={5,10,1,2,80,15};
//     int b[5]={2,5,17,70,-10};

//     reverse(a,6);
//     reverse(b,5);

//     printArray(a,6);
//     printArray(b,5);

//     return 0;
// }




#include<iostream>

using namespace std;

void reverse(int arr[], int length)
{
    int start=0;
    int last=length-1;

    while (start<=last)
    {
        swap(arr[start],arr[last]);
         start +=1;
         last -=1;

    }
    
}

void printArray(int arr[],int length)
{
   for(int i=0; i<=length;i++){
        cout << arr[i] << " ";
    }
    cout << endl; 

}


int main(){
    
 int a[6]={1,5,9,4,3,7};
 int b[5]={5,8,7,3,2};

    reverse(a,6);
    reverse(b,5);

    printArray(a,6);
    printArray(b,5);

 return 0;
}