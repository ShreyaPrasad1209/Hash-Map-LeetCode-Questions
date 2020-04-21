//Brute Force Method

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int n=nums.size(),i,j,k;
        vector<int>c;
        for(i=0;i<n;i++)
        {k=0;
            for(j=0;j<n;j++)
            {
                if((i!=j)&&(nums[i]>nums[j]))
                {
                    k++;
                }
            }c.push_back(k);
        }
        return c;
    }
}

//Time Complexity: O(N^2)



//Using Hash Map

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> vec;
        for(auto &num:nums)
        {
            mp[num]++;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(auto &nn:mp)
                if(nn.first!=nums[i] && nn.first<=nums[i])
                    count+=nn.second;
            vec.push_back(count);
            
        }
        return vec;
    }
};

//Time Complexity: O(NlogN)
//LeetCode Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
