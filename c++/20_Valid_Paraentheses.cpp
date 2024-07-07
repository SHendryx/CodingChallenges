#include <string>
#include <vector>

using namespace std;

class Valid_Parentheses {
public:
    char getOpenPar(char c) {
        switch (c) {
        case '}':
            return '{';
        case ']':
            return '[';
        case ')':
            return '(';
        }
        return c;
    }
    
    bool isValid(string s) {
        vector<char> my_stack;
        for (char ch : s){
            if (ch == ')' || ch == ']' || ch == '}'){
                if (my_stack.empty() || my_stack.back() != getOpenPar(ch)){
                    return false;
                }
                my_stack.pop_back();
            }
            else {
                my_stack.push_back(ch);
            }
        }
        return my_stack.empty();
    }
};