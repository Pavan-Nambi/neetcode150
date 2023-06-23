// can sort n do
class Solution {
public:
    bool isAnagram(string s, string t) {

    if (s.length() != t.length()) {
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
    }
};

// time complexity: O(nlogn) because of sorting
// space complexity: O(1) because we are not using any additional data structure
