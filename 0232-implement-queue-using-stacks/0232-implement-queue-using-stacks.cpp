class MyQueue {
public:
    queue<int> a;
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        int x;
        x=a.front();
        a.pop();
        return x;
    }
    
    int peek() {
       return a.front();
    }
    
    bool empty() {
        return a.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */