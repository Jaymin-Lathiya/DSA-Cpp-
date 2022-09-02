#include<iostream>

#include<vector>

using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

   n--,m--;
   int carry=0;
   vector<int> v;
   while(n>=0 || m>=0)
   {
       int sum = (n>=0 ? a[n--] : 0) + (m>=0 ? b[m--] : 0) + carry;
       v.insert(v.begin(),sum%10);
       carry= (sum>=10 ? 1 : 0);
   }
   if(carry)
       v.insert(v.begin(),carry);
   return v;
}
void print_vector(vector<int> &vect)
   {   cout<<"sum of Two array is ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {
            cout<< *i << " ";
        }
   }


int main()
{
    vector<int> nums1;
    nums1.push_back(3);
    nums1.push_back(4);
    nums1.push_back(5);
    nums1.push_back(1);
    nums1.push_back(2);
                
    vector<int> nums2;
    nums2.push_back(4);
    nums2.push_back(5);
    nums2.push_back(8);

    vector<int> vec= findArraySum(nums1,5,nums2,3) ;
    print_vector(vec);


    return 0;

}