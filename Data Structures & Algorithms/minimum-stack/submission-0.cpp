class MinStack {
private:
    stack<long>mini;
    stack<long>s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        int k=mini.empty()?val:mini.top();
        val=min(val,k);
        mini.push(val);
    }
    
    void pop() {
        s.pop();mini.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
