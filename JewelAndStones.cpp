class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        map<char,int>m;
    
    for(auto it:  S) m[it]++;
    
    int ans = 0;
    
    for(auto it: J) ans += m[it];
    
    return ans;
    }

};
