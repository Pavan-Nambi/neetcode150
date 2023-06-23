class Solution {
public:
    bool isAnagram(string s, string t) {

      unordered_map<char,int> count;

      for(char character:s){
          count[character]++;
      }
      for(char character:t){
          count[character]--;
      }

      for(auto pair:count){
          if(pair.second!=0){
              return false;
          }
      }
      return true;
    }
};


// using hash map to store the count of each character in the string
// then iterate through the second string and decrement the count of each character in the hash map
// if the count of any character is not zero then return false meaning the strings are not anagrams
// time complexity: O(n) hmm iterating through the strings once(s+t)
// space complexity: O(n) hmm using a hash map to store the count of each character in the string
