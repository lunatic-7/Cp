class MyStack {
    queue<int> one_q, two_q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        two_q.push(x);
        while(!one_q.empty())
        {
            two_q.push(one_q.front());
            one_q.pop();
        }
        swap(one_q, two_q);  // because we want two_q to be empty again and one_q is our main stack
    }
    
    int pop() {
        int temp = one_q.front();
        one_q.pop();

        return temp;
    }
    
    int top() {
        return one_q.front();
    }
    
    bool empty() {
        return one_q.clear();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */