class Stack {
public:
    queue<int> Q;
    queue<int> Q1;
    // Push element x onto stack.
    void push(int x) {
        while(!Q.empty()){
            Q1.push(Q.front());
            Q.pop();
        }
        Q.push(x);
         while(!Q1.empty()){
            Q.push(Q1.front());
            Q1.pop();
        }
        
    }
    // Removes the element on top of the stack.
    void pop() {
        Q.pop();
    }
    // Get the top element.
    int top() {
        int val = Q.front();
    }
    // Return whether the stack is empty.
    bool empty() {
        return Q.empty();
    }
};
