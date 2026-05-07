class MinStack {
private:
    long mini;
    stack<long>s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(0);mini=val;
        }
        else {
            s.push(val-mini);
            if(val<mini) mini=val;
        }
    }
    
    void pop() {
        if(s.empty()) return;
        long pop=s.top();
        s.pop();
        if(pop<0) mini=mini-pop;
    }
    
    int top() {
        long top=s.top();
        return (top>0)?(top+mini):mini;
    }
    
    int getMin() {
        return (int)mini;
    }
};
