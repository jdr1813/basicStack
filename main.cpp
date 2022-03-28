/*********************
Name: Justin Rivas
Coding 03
Purpose: Building a simple integer stack data structure.
**********************/

#include "main.h"

int main(){

    srand(time(0));

    Stack myStack;

    for(int i=0; i < SIZE+1; i++){
        int random = (rand() % 100) - 50;
        if(myStack.push(random)){
            cout << "Element inserted successfully\n" << endl;
            cout << "The element inserted was: " << myStack.peek() << endl;
            cout << endl;

        } else{
            cout << "Stack Overflow\n" << endl;
        }
    }

    cout << endl;
    cout << "Peeking a full stack" << endl;
    try{
        cout << myStack.peek() << endl;
    } 
    catch(...){
        cout << "Stack is empty" << endl;
    }
    cout << endl;

    for(int i=0; i < SIZE+1; i++){
        cout << "Popping the number at the top of the stack" << endl;
        try{
            cout << myStack.pop() << endl;
        }
        catch(...){
            cout << "Stack is empty" << endl;
        }
    }

    cout << endl;
    cout << "Peeking an empty stack" << endl;

    try{
        cout << myStack.peek() << endl;
    } 
    catch(...){
        cout << "Stack is empty" << endl;
    }

    cout << endl;
    cout << "Popping an empty stack" << endl;

    try{
        cout << myStack.pop() << endl;
    }
    catch(...){
        cout << "Stack is empty" << endl;
    }
    cout << endl;

    cout << "Testing isEmpty method" << endl;
    cout << endl;

    if(myStack.isEmpty()){
        cout << "Stack is empty" << endl;
    } else{
        cout << "Here is the top element of the stack" << myStack.pop() << endl;
    }

    cout << "Filling the stack again to test isEmpty method" << endl;

    for(int i=0; i < SIZE+1; i++){
        int random = (rand() % 100) - 50;
        if(myStack.push(random)){
            cout << "Element inserted successfully\n" << endl;
            cout << "The element inserted was: " << myStack.peek() << endl;
            cout << endl;

        } else{
            cout << "Stack Overflow\n" << endl;
        }
    }

    if(myStack.isEmpty()){
        cout << "Stack is empty" << endl;
    } else{
        cout << "Stack is not empty" << endl;
    }
    

    return 0;
}