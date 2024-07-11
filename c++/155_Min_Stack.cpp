#include <vector>

using namespace std;

class MinStack {
public:
  std::vector<std::pair<int,int>> myStack;
  MinStack() {
  }
  
  void push(int val) {
    if (myStack.empty()) {
      myStack.push_back({val, val});
    } else {
      int prevMin = myStack.back().second;
      myStack.push_back({val, min(prevMin, val)});
    }
  }
  
  void pop() {
    myStack.pop_back();
  }
  
  int top() {
    return myStack.back().first;
  }
  
  int getMin() {
    return myStack.back().second;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */