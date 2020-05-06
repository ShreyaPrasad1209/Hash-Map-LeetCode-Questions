class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		// use an unordered_set as a dictionary
		// and initialize with nums1 items
        unordered_set<int> dict {nums1.begin(), nums1.end()};
        
        vector<int> result;
        for (auto x : nums2) {
            if (dict.count(x)) {
				// if item in nums2 exists in dictionary
				// add it to the result and erase it from
				// the dictionary to avoid duplicates
                result.emplace_back(x);
                dict.erase(x);
            }
        }
        
        return result;
    }
};

//Time Complexity: O(N)
//LeetCode Link: https://leetcode.com/problems/intersection-of-two-arrays/
