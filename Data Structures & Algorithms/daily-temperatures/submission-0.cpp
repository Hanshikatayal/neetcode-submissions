class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> results(temp.size());
        stack<int> stack;
         for (int i = 0; i < temp.size(); i++) {
            while (!stack.empty() && temp[stack.top()] < temp[i]) {
                results[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }

        return results;
    }
};
