#include <iostream>

using namespace std;

class Node {
public:
    Node(int data) {
        _data = data;
    }

    int _data;
    Node _next;
};

void task1() {
    Node node1(1);
    Node node2(2);
    Node node3(3);

    node1._next = node2;
    node2._next = node3;

    cout << node1._next._data << endl;
}

void task2() {
    // copy your working code from task1 and modify it here
}

void task3() {
    // copy your working code from task2 and modify it here
}

void task4() {
   // copy your working code from task3 and modify it here
}

int main() {
    task1();  
    //task2(); // uncomment after task1.
    //task3(); // uncomment after task2.
    //task4(); // uncomment after task3.
    return 0;
}