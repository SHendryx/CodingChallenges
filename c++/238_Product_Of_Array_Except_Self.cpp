#include <vector>

using namespace std;

class Product_Of_Array_Except_Self {
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> answer(nums.size());
    answer[0] = 1;
    for (int i = 1; i < nums.size(); i++){
      answer[i] = nums[i-1] * answer[i-1];
    }
    int product = 1;
    for (int i = (nums.size() - 2); i >= 0; i--){
      product *= nums[i+1];
      answer[i] *= product;
    }
    return answer;
  }
};