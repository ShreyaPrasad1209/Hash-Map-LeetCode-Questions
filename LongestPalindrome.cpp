class Solution {
public:
    int longestPalindrome(string& s) {
        map<char,int>m;
        int pairs=0;
        for(auto ch:s){
            m[ch]++;
            if(!(m[ch]%2))pairs++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if((it->second)%2){
			// means a single elment exists.. we can keep it in the center of even length palindrome string and result would still be palindrome
                return 2*pairs+1;
            }
        }
        return 2*pairs;
    }
};

//Time Complexity:O(NlogN)
//LeetCode Link: https://leetcode.com/problems/longest-palindrome/
