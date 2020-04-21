class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> chFreq;
        for(auto ch : chars) chFreq[ch]++;
        
        bool flag = true;
        string count = "";
        
        for(auto str : words){
            flag = true;
            map<char,int> copyFreq;
            
            for(auto ch : str) copyFreq[ch]++;
            for(auto ch : str) if(copyFreq[ch] > chFreq[ch]) flag = false;
            
            if(flag) count += str;
        }
        
        return count.length();
    }
};

//let words.size==N and chars.length()=s;
//Time Complexity: O(N*n)
//LeetCode Link: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
