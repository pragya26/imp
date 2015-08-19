class Queue {
public:
    stack<int> stk1;
    stack<int> stk2;
    // Push element x to the back of queue.
    void push(int x) {
        while(!stk1.empty()){
            int t1 = stk1.top();
            stk1.pop();
            stk2.push(t1);
        }
        stk1.push(x);
        while(!stk2.empty()){
            int t2 = stk2.top();
            stk2.pop();
            stk1.push(t2);
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        stk1.pop();
    }

    // Get the front element.
    int peek(void) {
         int m = stk1.top();
         return m;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return stk1.empty();

    }
};
