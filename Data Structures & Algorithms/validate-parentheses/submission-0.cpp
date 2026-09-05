class Solution {
public:
    bool isValid(string exp) {
        stack<char>s;
        for(int i=0;i<exp.length();i++){
            char ch=exp[i];
            if(ch=='('||ch=='{'||ch=='['){
                s.push(ch);
            }
            else if(ch==')'||ch=='}'||ch==']'){
                if(s.empty()){
                    return false;
                }
                char top=s.top();
                s.pop();
                if((ch==')'&&top!='(') || (ch=='}' && top!='{') || (ch==']' && top!='[')){
                    return false;
                }
            }
        }
        return s.empty();
        
    }
};