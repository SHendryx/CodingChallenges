#include <vector>
#include <stack>

using namespace std;

/*
There is a second approach that is slightly faster. By calculating the amount 
of time it takes a car to reach the target during the initial loop and storing 
the time instead of the speed, we can iterate through the array and simply 
compare the times and count the cars that arrive at a later time, while 
updating the slowest time. Then we return that number. This saves a small 
amount of time by not using an additional stack.
*/
class Car_Fleet {
  public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        stack<double> mystack;
        double time;
        for (int i = 0; i < position.size(); i++) {
          cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end());

        for (int i = cars.size() - 1; i >= 0; i--) {
          time = double(target - cars[i].first) / double(cars[i].second);
          if ((mystack.empty()) || (time > mystack.top())) {
            mystack.push(time);
          }
        }
      return mystack.size();
    }
};