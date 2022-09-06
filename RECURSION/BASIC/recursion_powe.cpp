#include<iostream>

using namespace std;

int powerele(int a ,int b)
{  

    //base case
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }

    // recursive rel.
    int ans=powerele(a,b/2);


//  case 1 -> power is even(b is even)
    if(b%2==0)
    {
         return ans*ans;
    }

    // case 2-> power is odd(b);
    else{
        return a* ans*ans;
    }



}

int main()
{
    int a,b;

    cout<<"ENter the value of a and b"<< endl;
    cin>>a>>b;
    cout<<endl;
    int ans=powerele(a,b);

    cout<<"Power of element is :"<<ans<<endl;

    return 0;

}