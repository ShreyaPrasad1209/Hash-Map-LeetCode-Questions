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

//Explanation: 
//So first i created a hashmap named mp with key values as different numbers in the vector nums and then the (value) part of hashmap is count of each number in the vector.
//For ex if nums=[5,5,7] then hashmap will have 2 entries -> (key->5 value->2 ), (key->7 value 1)

//After i have generated the hashmap, i am iterating the vector(in second for loop) and finding numbers smaller than each number in vector by iterating hashmap for each vector entry.
////////////
//for(auto &nn:mp)
//if(nn.first!=nums[i] && nn.first<=nums[i])
//count+=nn.second;
//In the above code section i am iterating over hashmap and if i found any number(key of hashmap) less than and not equal to nums[i] i increase the count as i that number is what we need.

////////////
//vec.push_back(count);
//After. calculating count i am pushing each count in a vector with its respective index.
