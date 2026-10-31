class Node {
    public:
        int val;
        Node* next;
        Node* prev;

        Node (int val, Node* next = NULL, Node* prev = NULL) {
            this->val = val;
            this->next = next;
            this->prev = prev;
        }
};

class MyCircularQueue {
public:
    Node* left;
    Node* right;
    int space;
    
    MyCircularQueue(int k) {
        left = new Node(-1);
        right = new Node(-1, NULL, left);
        left->next = right;
        space = k;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        Node* temp = new Node(value, right, right->prev);
        right->prev->next = temp;
        right->prev = temp;
        space -= 1;

        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        Node *todel = left->next;
        left->next = todel->next;
        todel->next->prev = left;
        delete todel;
        space += 1;

        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return left->next->val;
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return right->prev->val;
    }
    
    bool isEmpty() {
        return left->next == right;
    }
    
    bool isFull() {
        return space == 0;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */