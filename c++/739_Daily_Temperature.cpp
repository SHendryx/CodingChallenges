#include <vector>
#include <stack>

using namespace std;

class Daily_Temperatures {
public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<pair<int,int>> myStack;
    vector<int> res(temperatures.size(), 0);
    for (int i = 0; i < temperatures.size(); i++) {
      while (!myStack.empty() && temperatures[i] > myStack.top().first) {
        int stackT = myStack.top().first;
        int stackIndex = myStack.top().second;
        myStack.pop();
        res[stackIndex] = (i - stackIndex);
      }
      myStack.push({temperatures[i], i});
    }
    return res;
  }
};

/* A faster implementation found on LC */
class Solution {
public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    stack<int> st;
    vector<int> days(n);
    
    for(int i = n - 1; i >= 0; i--){
      while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
        st.pop();
      }
      days[i] = (st.empty()) ? 0 : st.top() - i;
      st.push(i);
    }
    return days;
  }
};