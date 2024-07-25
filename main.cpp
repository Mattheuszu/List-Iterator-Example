/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <list>

int main()
{
    std::list<int> numbers{1,2,3};
    for(int n : numbers){
        std::cout << n << " ";
    }

    return 0;
}