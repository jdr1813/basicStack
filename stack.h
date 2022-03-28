/*********************
Name: Justin Rivas
Coding 03
Purpose: Building a simple integer stack data structure.
**********************/

#ifndef STACK_STACK_H
#define STACK_STACK_H

#define SIZE 10

class Stack {

public:

    Stack();
    ~Stack();

    bool push(int);
    int pop();
    bool isEmpty();
    int peek();

private:
    int top, *array;

};

#endif