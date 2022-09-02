#include<iostream>
#include<vector>

using namespace std;

    int check(vector<int>& nums)
    {
        
        int check=0;
        for(int i=0 ; i<nums.size(); i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                check++;
            }
        }if(check>1){
            return false;
        }return true;
    
    }
        


        int main()
        {
            vector<int> nums;
                nums.push_back(3);
                nums.push_back(4);
                nums.push_back(5);
                nums.push_back(1);
                nums.push_back(2);


                cout<< check(nums) << " ";
                return 0;

        }