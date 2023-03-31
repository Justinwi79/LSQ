//

// *********************************************************************
// * Constructor.                                                      *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
Stack<T>::Stack()
{
    _top = 0;
    _size = DEFAULTSIZE; 
    _stack = new T[_size];
}

// *********************************************************************
// * Destructor.                                                       *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
Stack<T>::~Stack()
{
    clear();
}

// *********************************************************************
// * Copy Constructor.                                                 *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
Stack<T>::Stack(const Stack<T>& Obj)
{
    _size = Obj._size; 
    _top = Obj._top;
    _stack = new T[_size];
    for(int i = 0; i <= _top; i++)
    {
        _stack[i] = Obj._stack[i];
    }
}

// *********************************************************************
// * Assignment operator                                               *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
cop4530::Stack<T>& Stack<T>::operator=(const Stack<T>& s)
{
   Stack<T> c = s; 
   std::swap(*this,c); 
   return *this; 
}

// *********************************************************************
// * Return true if empty                                              *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
bool Stack<T>::empty() const
{
    if(_top == 0) 
    {
        return true; 
    }
    else  
    {
        return false; 
    }
}

// *********************************************************************
// * Clear the Stack                                                   *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
void Stack<T>::clear()
{
    while(!empty()) 
        pop();
}

// *********************************************************************
// * Add element to Stack                                              *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
void Stack<T>::push(const T& x)
{
    _stack[_top++] = x;
    _top++;
}

// *********************************************************************
// * Add element to Stack                                              *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
void Stack<T>::push(T && x)
{
    _stack[_top++] = std::move(x);
    _top++;
}

// *********************************************************************
// * Remove element from the Stack                                     *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
void Stack<T>::pop()
{
    _top--;
}

// *********************************************************************
// * Return top of Stack                                               *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
T& Stack<T>::top()
{
    return _stack[_top];
}

// *********************************************************************
// * Return top of Stack                                               *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
const T& Stack<T>::top() const
{
    return _stack[_top]; 
}

// *********************************************************************
// * Return size of Stack                                              *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
int Stack<T>::size() const
{
    return _size;
}

// *********************************************************************
// * Output Stack                                                      *
// * Last updated: 6/21/22                                             *
// * By: Harold Windham                                                * 
// * References: Dr. Gaitros course videos                             *
// * Past Stack and List project                                       *
// *********************************************************************

template <typename T> 
void Stack<T>::print(std::ostream& os, char ofc) const
{
    for(auto i = top(); i >= !empty(); i++)
    os << i << ofc; 
}



