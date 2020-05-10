class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         
        unordered_map<int,int>M;
        for(int i=0;i<nums1.size();i++)
        {
            M[nums1[i]]++;
        }
        
        vector<int>ans;
        
        for(int i=0;i<nums2.size();i++)
        {
            auto itr=M.find(nums2[i]);
            if(itr!=M.end() && itr->second != 0){
                ans.push_back(nums2[i]);
                itr->second--;
                
            }
        }
     return ans;   
    }
};

