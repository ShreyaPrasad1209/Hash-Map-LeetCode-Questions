class Solution {
public:
   bool isIsomorphic(string s, string t) {
       //we will create 2 maps one for s to t and another for t to s
       unordered_map<char,char> m1;
       unordered_map<char,char> m2;
       if(s.length() != t.length()){
           return false;
       }
       for(int i=0;i<s.length();i++){
           char c1 = s[i];
           char c2 = t[i];
           if(m1.find(c1) == m1.end()){
               m1[c1] = c2;
           }else{
               if(c2 != m1[c1]){
                   return false;
               }
           }
           
           if(m2.find(c2) == m2.end()){
               m2[c2] = c1;
           }else{
               if(c1 != m2[c2]){
                   return false;
               }
           }
           
       }
       return true;
   }
};

//LeetCode Link:https://leetcode.com/problems/isomorphic-strings/
