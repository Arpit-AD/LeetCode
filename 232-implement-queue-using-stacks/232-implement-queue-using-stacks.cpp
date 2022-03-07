class MyQueue {
    stack<int> s1, s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        // Push everything from s1 to s2
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        
        // Now push given element in s1
        s1.push(x);
        
        // Push evrything ffrom s2 back in s1
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        if(s1.empty()) return -1;
        
        int element = s1.top();
        s1.pop();
        
        return element;
    }
    
    int peek() {
        if(s1.empty()) return -1;
        
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};