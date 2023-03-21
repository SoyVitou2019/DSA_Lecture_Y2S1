
// C++ program to illustrate the use
// of cout object
#include <iostream>
#include <string>
using namespace std;
const int capacity = 10;                           // size or capacity of stack
class Stack{                                       // create class stack 
private:                                           // private because don't user can access stack without method
    int top = -1;                                  // top of the stack
    int stack[capacity];                           // create stack with capacity 10
public:                                            // others can access method or variable
    void size(){                                   // size mehtod or function use it for get a size of stack
        cout << capacity << endl;                  // display size of stack
    }
    void push(int value){                           // push or append function use for put value last index of stack
        top++;                                      // increase top by 1
        stack[top] = value;                         // assign value into stack using access methods
    }                                               // close block
    void pop(){                                     // pop function use to remove element top of the stack
        top--;                                      // just decreasing top index of stack
    }
    void isFull(){                                   // isFull function use to check is full or yet /?
        if(top == capacity-1){                       // check top equal size of stack or not
            cout << "Stack has full !" << endl;      // display stack has full !
        }else{                                       // if above condition not true
            cout << "Stack not full yet !" << endl;  // just say stack not full yet !
        }
    }
    void isEmpty(){                                   // is Empty function use to check is empty or not
        if(top == -1){                                // if top equal -1 it's mean stack is empty
            cout << "Stack is empty !" << endl;       // let's say stack is empty !
        }else{                                        // if above not true let's say stack is not empty !
            cout << "Stack is not empty !" << endl;
        }
    }
    void toString(){                                   // toString function use to display all elements inside stack list
        if(top == -1){                                 // check stack empty or not if string empty just display []
            cout << "[]" << endl;
        }else{
            cout <<"[";
            for(int i = 0; i < top; i++){
            cout << stack[i] <<", ";
            }
            cout << stack[top] <<"]" << endl;
        }
    }
    void peek(){                                        // peek  function read value of the top of the stack without removing elements.
        cout << stack[top] << endl;
    }
};
// Driver Code
int main()
{

    Stack stack;                                        // create object of stack
    stack.push(5);                                      // object dot push method
    stack.push(54);
    stack.pop();
    stack.push(532);
    stack.isEmpty();
    stack.toString();                                    // display stack
    stack.peek();                                        // display last element of stack
    
    return 0;                                            // execute main function
}