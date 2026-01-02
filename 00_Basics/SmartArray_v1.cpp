#include <iostream>
using namespace std;

class SmartArray {
private:
    int* data;      // The pointer to our memory
    int capacity;   // How big is the house?
    int size;       // How many people are inside?

public:
    // Constructor: Allocates memory
    SmartArray(int cap) {
        capacity = cap;
        size = 0;
        data = new int[capacity]; // "new" asks the computer for heap memory
    }

    // Function to add elements
    void push_back(int value) {
        if (size == capacity) {
            cout << "Error: Array is full!" << endl;
            return;
        }
        // TODO: Add the "value" to "data" at the current "size" index
        // TODO: Increment "size"
        data[size]=value;
        size++;
    }

    // Function to print elements
    void print() {
        // TODO: Write the loop to print the array (You can use data[i] here)
        for(int i=0;i<size;i++)
        {
            cout<<data[i]<<endl;
        }
    }
    
    // Destructor: Cleans up memory (Crucial for C++)
    ~SmartArray() {
        delete[] data; // Give the memory back to the computer
    }
};

int main() {
    SmartArray arr(5);
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    
    arr.print(); // Should print: 10 20 30
    
    return 0;
}
