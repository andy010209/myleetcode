class MinStack {
public:
    stack<pair<int,int>> s;
    int m;
    MinStack() {
        m=INT_MAX;
    }
    
    void push(int val) {
        if(s.size()==0) m=val;
        else m=s.top().second;
        m=min(m,val);
        s.push({val,m});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */