#include<iostream>

using namespace std;

bool checkPalidrone(string& str,int i, int j)
{
    //base case
    if(i>j)
    {
        return true;
    }
    if(str[i] != str[j])
    {
        return false;
    }

    //recursive relation
    else{
        i++;
        j--;
        return checkPalidrone(str,i,j);
    }

}

int main()
{
    // string name="abcba";
    string name="abcbaaa";

    

    bool ans=checkPalidrone(name,0,name.length()-1);
    if(ans)
    {
        cout<<"Is palidrone"<<endl;
    }
    else{
        cout<<"Not A Palidrone"<<endl;
    }
}
