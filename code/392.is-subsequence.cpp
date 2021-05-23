class Solution {
public:
	int firstUniqChar(string s)
	{
		list<int> unique;
        unordered_map<char, list<int>::iterator> mp;
        for(int i = 0; i < s.length(); ++i) 
        {
            if(!mp.count(s[i])) 
            {
                unique.push_back(i);
                mp[s[i]] = prev(unique.end());
            }
            else if(mp[s[i]] != unique.end()) 
            {
                unique.erase(mp[s[i]]);
                mp[s[i]] = unique.end();
            }
        }
        return unique.empty() ? -1 : unique.front();
	}
};
