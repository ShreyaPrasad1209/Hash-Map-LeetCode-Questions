class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> times;
        vector<int> check;
        
        for(auto num : arr) times[num]++;
        
        unordered_map<int,int>::iterator itr;
        
        for(itr = times.begin(); itr != times.end(); itr++){
            if(count(check.begin(), check.end(), itr->second)) return false;
            else check.push_back(itr->second);
        }
        return true;
    }
};

//Time Complexity:
//LeetCode Link: https://leetcode.com/problems/unique-number-of-occurrences/
