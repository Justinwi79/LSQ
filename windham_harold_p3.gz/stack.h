// *********************************************************************
// * stack.h provided by Dr Gaitros                                    *
// * Last updated: 6/19/22                                             *
// *********************************************************************


#ifndef STACK_H 
#define STACK_H

#include <iostream> 
#include <string>
#include <vector> 
#include <utility>

namespace cop4530 
{
const int DEFAULTSIZE = 100; 
template <typename T>
class Stack 
{
    public: 
        Stack(); 
        ~Stack(); 
        Stack(const Stack<T>&);
        Stack<T>& operator=(const Stack <T>& s); 
        bool empty() const; 
        void clear(); 
        void push(const T& x);
        void push(T && x);
        void pop(); 
        T& top(); 
        const T& top() const; 
        int size() const; 
        void print(std::ostream& os, char ofc = ' ') const; 

    private: 
    std::vector<T> v; 
    protected: 
    T * _stack; 
    int _size; 
    int _top; 
};

template <typename T> 
std::ostream& operator<< (std::ostream& os, const Stack<T>& a)
{
    a.print(os); 
    return os; 
}

template <typename T> 
bool operator== (const Stack<T>&, const Stack <T> &);

template <typename T> 
bool operator!= (const Stack<T>&, const Stack <T> &);

template <typename T> 
bool operator< (const Stack<T>& a, const Stack <T> & b);






#include "stack.hpp" 

}

#endif