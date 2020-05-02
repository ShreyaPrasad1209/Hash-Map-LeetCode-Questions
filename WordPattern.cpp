class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int i = 0, j = 0, len = pattern.size(), n = str.size();
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        string word = "";
        
        while(j < len)
        {
            if (i > n) return false;//there are letters in pattern but str has no word
            while(str[i] != ' ' && str[i] != '\0')//get the word
                word += str[i++];

            if (map1.find(pattern[j]) != map1.end() && map1[pattern[j]] != word)
                    return false;                        
            if (map2.find(word) != map2.end() && map2[word] != pattern[j])
                    return false;
            
            map1[pattern[j]] = word;
            map2[word] = pattern[j];
            ++j, ++i;
            word = "";
        }
        if (i <= n)//there are no letters in pattern, but str still has word
            return false;
        
        return true;
    }
};

//LeetCode Link: https://leetcode.com/problems/word-pattern/
