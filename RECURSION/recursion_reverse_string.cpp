#include<iostream>

using namespace std;


void strreverse(string& str, int i, int j)
{
    if(i>j)
    {
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    strreverse(str,i,j);
}

int main()
{
    string name="Jaymin";
    strreverse(name,0,name.length()-1);
    cout << name << endl;
    return 0;
}
