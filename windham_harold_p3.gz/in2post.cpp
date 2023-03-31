#include <iostream> 
#include <string>
#include <vector> 
#include <utility>
#include <iomanip> 
#include "stack.h"

using namespace std; 
using namespace cop4530; 



int main() 
{
    Stack<int> inn; 
    Stack<char> ch; 
    Stack<string> str; 
    const int size = 10;
    int i = 0; 
    int el = 0; 
    int in = 0;
    int arr[size]; 
    
     

    cout << "Enter in an expression, x to end: " << endl; 

    cin >> in;
	
	while((in != 'x') && (i < size))
	{	el++;
		arr[i] = in;
		i++;
		cin >> in;
        if(!cin) 
        {
            break;
        }
		
	}
    cout << "The Stack: ";  

	for(int j = 0; j < el; j++)
	{
		cout << arr[j];
	}

    cout << endl; 

    cout << "The InFix Notation is: " << endl; 

    cout << "The PostFix Notation is: " << endl; 


    cout << "Results are: " << endl; 













}