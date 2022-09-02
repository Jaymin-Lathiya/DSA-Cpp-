#include <iostream>
#include <bits/stdc++.h>
#include<vector>


using namespace std;

// void uniqueAccurance(int arr[],int length){

//     int key;
//     int count=0;
//     int i=0;

// while(i<length){
//     arr[i]=key;

//     for(int j=i+1;j<length;j++)
//     {
//         if(arr[j]==key)
//         {
//             count ++;

//         }
//     }
//     i++;

// }
//             cout << count << " ";

// }

// int main()
// {
//     int arr[6]={1,2,3,3,1,3};

//     uniqueAccurance(arr,6);

//     return 0;

// }

int uniqueAccurance(int arr[], int length)
{
    int ans;
    int i = 0;
    int j = 0;
    int count = 1;
    int cArr[length];
    sort(arr.begin(), arr.end());
    for (i = 0; i < length; i++)
    {
        if (i + 1 < length && arr[i + 1] == arr[i])
        {
            count++;
        }
        else
        {
            cArr[j++] = count;
            count = 1;
        }
    }
    sort(cArr, cArr + j);

    for (i = 0; i < j; i++)
    {
        if (i + 1 < j && cArr[i] == cArr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[6] = {1, 2, 3, 3, 1, 3};

   cout<< uniqueAccurance(arr, 6) << " ";

    return 0;
}