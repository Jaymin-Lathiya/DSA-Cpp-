#include<iostream>

using namespace std;

class stack {
    public:
    int *arr;
    int size;
    int top;

// crete constructor
    stack(int size)
    {
        this->size=size;

        arr= new int[size];

// intially top points to -1
        top=-1;

    }

    void push(int ele )
    {
      if(size - top >1)
      {

        top++;
        arr[top]=ele;


      }
      else{
        cout << "Stack OverFlow "<< endl;
      }

    }

    void pop()
    {

        if(top>=0)
        {
            top --;
        }
        else{
            cout <<"Stack is underflow"<< endl;
        }

    }
    int peek()
    {
        if(top>=0){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }

    }

   bool isEmpty()
   {

    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }

   }


};

int main()
{

    stack st(6);

    st.push(10);
    st.push(11);
    st.push(12);


    cout<< st.peek() << endl;

    st.pop();

    cout<< st.peek() << endl;


    return 0;
}