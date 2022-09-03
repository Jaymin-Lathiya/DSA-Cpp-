#include<iostream>

using namespace std;


int bs( int n)
{
    int s=0;
    int e=n-1;

    long long int mid=s+(e-s)/2;

    int ans=-1;

    while(s<=e)
    {
        int square = mid*mid;

        if(square ==n)
        {
            return mid;
        }
        if(square < n)
        {
            ans=mid;
            s= mid-1;
        }
        else{
            e =mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int Sqrt(int x)
{
    return bs(x);
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor=1;
    double ans=tempSol;

    for(int i=0;i<precision;i++)
    {
        factor= factor/10;

        for(double j=ans; j*j<n; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}


int main()
{
    int n;
    cout << "Enter the value :" << " ";
    cin >> n ;

    cout << Sqrt(n)<< endl;

    int tempSol=bs(n);
    cout<< morePrecision(n,3,tempSol) << endl;

    return 0;
    }