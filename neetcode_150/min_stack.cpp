class MinStack {
private:
    stack<int> minSt, srtSt;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        minSt.push(val);
        val = min(val, srtSt.empty() ? val : srtSt.top());
        srtSt.push(val);
    }
    
    void pop() {
        minSt.pop();
    }
    
    int top() {
        return minSt.top();
    }
    
    int getMin() {
        return srtSt.top();
    }
};
