/*********************
Name: Justin Rivas
Coding 03
Purpose: Building a simple integer stack data structure.
**********************/

#include "stack.h"


Stack::Stack(){
    top = -1;
    array = new int[SIZE];
}

Stack::~Stack(){
    delete[] array;
}

bool Stack::push(int newNum){
    bool pushCompleted;

    if(top < SIZE - 1){
        top++;
        array[top] = newNum;
        pushCompleted = true;
    }
    else{
        pushCompleted = false;
    }

    return pushCompleted;
}

int Stack::pop(){
    int topNum;

    if(isEmpty()){
        throw 0;
    } 
    else{
        topNum = array[top];
        top--;
    }
    return topNum;
}


bool Stack::isEmpty(){
    bool empty = false;

    if(top < 0){
        empty = true;
    }

    return empty;
}

int Stack::peek(){
    int topNum;

    if(isEmpty()){
        throw 0;
    } 
    else{
        topNum = array[top];
    }
    return topNum;
}
