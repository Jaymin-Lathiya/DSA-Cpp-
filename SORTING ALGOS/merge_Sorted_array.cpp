// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int> reverse(vector<int> v)
// {
//     int s=0;
//     int e=v.size()-1;

//     while (s<=e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;

// }

// void print(vector<int> v)
// {
// for(int i=0; i<v.size();i++)
// {
//     cout<<v[i]<< " ";
// }
// cout<<endl;
// }

// int main()
// {
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(10);
//     v.push_back(2);
//     v.push_back(20);
// }

#include <iostream>
#include <vector>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }

        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[j++];
    }

    while (j < m)
    {
        arr2[k++] = arr2[j++];
    }
}
    void printArr(int ans[], int n){
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }


    int main()
    {
        int arr1[4]={2,4,6,8};
        int arr2[5]={1,3,5,7,9};

        int arr3[9]={0};

        merge(arr1,4,arr2,5,arr3);

        printArr(arr3,9);

        return 0;
        
    }
