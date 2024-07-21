#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    if (s.size() < 2){
      return true;
    }
    /* This is called the erase-remove idiom.
        It's an often used algorithm to remove characters from a string.
        remove_if doesn't remove characters, it just moves unwanted 
        characters to the end of a range and moves the end forward, pushing
        the unwanted characters off the end of the data structure.
        erase removes the range from the start returned by remove_if, and 
        the end in this case.
    */
    s.erase(std::remove_if(s.begin(), s.end(), [](char ch) {return !std::isalnum(ch);}), s.end());
    int head = 0;
    int tail = s.size() - 1;
    while (head < tail) {
      if (tolower(s[head++]) != tolower(s[tail--])) return false;
    }
    return true;
  }
};