#include <iostream>
#include <unordered_map>

using namespace std;

class ValidAnagram {
public:
  bool isAnagram(std::string s, std::string t) {
    if (s.size() != t.size()){
      return false;
    }
    std::unordered_map <char,int> hashmap;
    for (int i = 0; i < s.size(); i++){
      hashmap[s[i]]++;
      hashmap[t[i]]--;
    }

    for (auto &count:hashmap){
      if (count.second != 0){
        return false;
      }
    }
    return true;
  }
};