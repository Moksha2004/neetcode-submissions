class Solution {
public:
    bool isValid(string st) {
        stack<int>s;
        for(char c:st){
            if(c=='}'||c==']'||c==')'){
            if(!s.empty() && ((c=='}' && s.top()=='{')||(c==']' && s.top()=='[') || (c==')' && s.top()=='(') )) s.pop();
            else return false;
            }
            else s.push(c);
            
        }
        return s.empty();
    }
};
