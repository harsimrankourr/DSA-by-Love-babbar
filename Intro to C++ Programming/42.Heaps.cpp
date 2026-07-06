/*

-> A heap is a specialised, tree - based data  structure that satisfies the heap property
    and is structurally a complete binary tree.

-> In other wirds it is a completely binary tree that comes with a heap order property.

-> COMPLETELY BINARY  TREE
    - every level is completely filled except the last level
    - nodes always added from the left.
    - or nodes always lean from left

-> HEAP ORDER PROPERTY
    - Max heap
        Child of every node must be smaller than that node.

    - Min heap
        child of every node must be greater than that node.

*/

#include <iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size = 0;

    void insert(int val){

        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }

    }

    void print(){
        for (int i = 1; i<=size; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }
};

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    
    return 0;
}