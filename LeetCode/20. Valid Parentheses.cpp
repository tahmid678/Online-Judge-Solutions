class Solution {
public:
    bool isValid(string s) {
        stack<char> pt;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                pt.push(s[i]);
            }
            else if(s[i]==')'&&!pt.empty()){
                if(pt.top()=='('){
                    pt.pop();
                }
                else{
                    pt.push(s[i]);
                }
            }
            else if(s[i]=='}'&&!pt.empty()){
                if(pt.top()=='{'){
                    pt.pop();
                }
                else{
                    pt.push(s[i]);
                }
            }
            else if(s[i]==']'&&!pt.empty()){
                if(pt.top()=='['){
                    pt.pop();
                }
                else{
                    pt.push(s[i]);
                }
            }
            else{
                pt.push(s[i]);
            }
        }

        if(pt.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
