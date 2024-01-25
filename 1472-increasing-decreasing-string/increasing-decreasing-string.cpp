class Solution {
public:
    string sortString(string s) {
        map<char, int> mp;
        for (auto it : s) {
            mp[it]++;
        }
        string result = "";
        while (!mp.empty()) {
            for (auto it = mp.begin(); it != mp.end();) {
                result += it->first;
                if (--it->second == 0) {
                    it = mp.erase(it);
                } else {
                    ++it;
                }
            }
            for (auto it = mp.rbegin(); it != mp.rend();) {
                result += it->first;
                if (--it->second == 0) {
                    it = decltype(it){mp.erase(std::next(it).base())};
                } else {
                    ++it;
                }
            }
        }
        return result;
    }
};