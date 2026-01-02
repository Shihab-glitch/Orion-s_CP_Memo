/*
 * Stack Implementation using Array
 * 
 * A stack is a linear data structure that follows LIFO (Last In First Out) principle.
 * Elements are added and removed from the same end (top).
 * 
 * Operations:
 * - push(): Add element to top - O(1)
 * - pop(): Remove element from top - O(1)
 * - peek(): View top element - O(1)
 * - isEmpty(): Check if stack is empty - O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> data;
    
public:
    // Push element onto stack
    void push(T value) {
        data.push_back(value);
    }
    
    // Remove and return top element
    T pop() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty");
        }
        T value = data.back();
        data.pop_back();
        return value;
    }
    
    // Return top element without removing
    T peek() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty");
        }
        return data.back();
    }
    
    // Check if stack is empty
    bool isEmpty() {
        return data.empty();
    }
    
    // Get size of stack
    int size() {
        return data.size();
    }
};

int main() {
    Stack<int> stack;
    
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    cout << "Top element: " << stack.peek() << endl;
    cout << "Stack size: " << stack.size() << endl;
    
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    
    cout << "Stack size after pops: " << stack.size() << endl;
    
    return 0;
}
