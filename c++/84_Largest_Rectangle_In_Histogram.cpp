#include <stack>
#include <utility>
#include <vector>

using namespace std;

class Largest_Rectangle_In_Histogram {
public:
  int largestRectangleArea(vector<int>& heights) {
    stack<pair<int,int>> myStack;
    int maxArea = 0;

    for (int i = 0; i < heights.size(); i++) {
      int start = i;
      while (myStack.size() && myStack.top().second > heights[i]) {
        int index = myStack.top().first;
        int height = myStack.top().second;
        myStack.pop();
        int area = height * (i - index);
        maxArea = max(maxArea, area);
        start = index;
      }
      myStack.push({start,heights[i]});
    }

    while (myStack.size()) {
      int index = myStack.top().first;
      int height = myStack.top().second;
      int area = height * (heights.size() - index);
      maxArea = max(maxArea, area);
      myStack.pop();
    }
    return maxArea;
  }
};