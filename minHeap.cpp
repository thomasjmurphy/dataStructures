#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


void swap(int &a, int &b)
{
a = a + b;
b = a - b;
a = a - b;
}

//minHeap
class Heap
{
public:
    vector<int> heap;
    void insert(int element);
    int extract();
    int parent(int child);
    void heapifyUp();
    void heapifyDown();
    int left(int parent);
    int right(int parent);
    int maxChildIndex(int index);
};

void Heap::insert(int element)
{
    heap.push_back(element);
    heapifyUp();
}

int Heap::extract()
{
    int ret = heap[0];
    heap[0] = heap[heap.size()-1];
    heap.pop_back();
    heapifyDown();
    return ret;
}

void Heap::heapifyUp()
{
    int index = heap.size()-1;
    while((index > 0) && (parent(index) >= 0) && (heap[parent(index)] > heap[index]))
    {
        swap(heap[parent(index)], heap[index]);
        index = parent(index);
    }
}

void Heap::heapifyDown()
{
     int maxIndex;
     int index = 0;
     while(left(index) < heap.size())
     {
         if(right(index) < heap.size())
         {
             if(heap[index] > heap[maxChildIndex(index)])
             {
                 swap(heap[index] , heap[maxChildIndex(index)]);
             }
         }
         else
         {
             if(heap[index] > heap[left(index)])
             {
                 swap(heap[index], heap[left(index)]);
             }
         }
     }
}

int Heap::parent(int child)
{
    if (child != 0)
    {
        int i = (child - 1) >> 1;  //floor(child-1)
        return i;
    }
    return -1;
}

int Heap::left(int parent)
{
    return parent*2 + 1;
}

int Heap::right(int parent)
{
    return parent*2 + 2;
}

int Heap::maxChildIndex(int index)
{
    if(heap[left(index)] > heap[right(index)])
    {
        return left(index);
    }
    else return right(index);
}


int main()
{
    vector<int> vec = {5,4,3,2,1};
    Heap heap;
    for(int i = 0;i<5;i++)
    {
        heap.insert(vec[i]);
    }
    for(int i = 0;i<5;i++)
    {
        cout << heap.heap[i];
    }
    return 0;
}
