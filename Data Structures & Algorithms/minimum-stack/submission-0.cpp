class MinStack{
    stack<long long>st;
    long long mini;long long x;
public:
    void push(int value){
        long long val=value;
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else{
           if(val>=mini){
            st.push(val);
           }
           else{
            st.push(2*val-mini);
            mini=val;
           }
        }
    }
        void pop(){
            if(st.empty()) return ;
            x=st.top();
            st.pop();
            if(x<mini){
                mini=2*mini-x;
            }
        }
        int top(){
            if(st.empty()) return -1;
            x=st.top();
            if(mini<x) return x;
            return mini;
        }
        int getMin(){
            return mini;
        }
    
};
