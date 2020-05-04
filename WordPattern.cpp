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

//Simpler Implementation 

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int j=-1;
		//map for checking char to string
        unordered_map<char,string> mm;
		//map for checking string to char
        unordered_map<string,char> mn;
        for(int i=0;i<pattern.length();i++)
        {
            
            char pp=pattern[i];
            string s="";
            j++;
            while(str[j]!=' '&&j<str.length())
            {
                s.push_back(str[j]);
                j++;
            }
            //only valid when not found in both
            if(mm.find(pp)==mm.end()&&mn.find(s)==mn.end())
            {
                mm[pp]=s;
                mn[s]=pp;
            }
			//if not found in only one that means word or char is being used repeatedly for another char/string combination hence reject
            else if(mm.find(pp)==mm.end()||mn.find(s)==mn.end())
                return false;
				//if found but doesnt match then reject
            else if(mm.find(pp)->second!=s||mn.find(s)->second!=pp)
                return false;
        }
		//make sure j has traveled complete length of str
        return j==str.length()?true:false;
    }
};

//LeetCode Link: https://leetcode.com/problems/word-pattern/
