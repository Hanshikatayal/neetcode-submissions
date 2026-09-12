class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int >st;int n=arr.size();
       long long maxArea=0;int element;int nse;int pse;
        for(int i=0;i<=n;i++){
            int currentHeight = (i == n) ? 0 : arr[i];
            while(!st.empty()&& arr[st.top()]>currentHeight){
                element=st.top();
                st.pop();
                nse=i;
                pse=st.empty()? -1:st.top();
                maxArea=max(maxArea,(long long)arr[element]*(nse-pse-1));
            }
            st.push(i);
        }
       
        return maxArea;
        
    }
};