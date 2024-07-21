#include <vector>
#include <stack>
#include <string>

using namespace std;

class Evaluate_Reverse_Polish_Notation {
public:
  int evalRPN(vector<string>& tokens) {
    stack<int> myStack;
    int num1, num2;
    for (string x : tokens) {
      if (x == "*") {
        num1 = myStack.top(); myStack.pop();
        num2 = myStack.top(); myStack.pop();
        myStack.push(num2 * num1);
      } else if (x == "/") {
        num1 = myStack.top(); myStack.pop();
        num2 = myStack.top(); myStack.pop();
        myStack.push(int(num2 / num1));
      } else if (x == "+") {
        num1 = myStack.top(); myStack.pop();
        num2 = myStack.top(); myStack.pop();
        myStack.push(num2 + num1);
      } else if (x == "-") {
        num1 = myStack.top(); myStack.pop();
        num2 = myStack.top(); myStack.pop();
        myStack.push(num2 - num1);
      } else {
        myStack.push(stoi(x));
      }
    }
    return myStack.top();
  }
};