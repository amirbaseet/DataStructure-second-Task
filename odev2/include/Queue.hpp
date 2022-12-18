#ifndef Queue_hpp
#define Queue_hpp
#include <iostream>
#include <iomanip>
#include "CellNode.hpp"
using namespace std;
class Queue
{

public:
    Queue(/* args */);
    ~Queue();
    void add(int data);
    void dlt(); // delete
    bool empty();
    int get() const;
    int GetN_Number() const;
    int get_Organ() const; // getting the middle value
    friend ostream &operator<<(ostream &os, Queue &Queue);

private:
    CellNode *First;
    CellNode *Last;
    int N_Number;
};
#endif