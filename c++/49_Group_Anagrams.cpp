#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class GroupAnagrams {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    unordered_map<string, vector<string>> hashmap;
    for (auto word:strs){
      string cur = word;
      sort(cur.begin(), cur.end());
      hashmap[cur].push_back(word);
    }
    for (auto x:hashmap){
      result.push_back(x.second);
    }
    return result;
  }
};