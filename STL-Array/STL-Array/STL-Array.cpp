// STL-Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
using namespace std;

void print_vector(array<int, 20>& data, int size)
{
   
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << "   ";

    }
}
int main()
{
    array<int, 20> data = { 2 ,3, 4 };
    print_vector(data,4 ); 
}

