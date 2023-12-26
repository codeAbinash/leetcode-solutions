// by @codeAbinash

#include "vector"
using namespace std;

class MyCircularQueue {
 private:
   vector<int> data;
   int size, front = -1, rear = -1;

 public:
   MyCircularQueue(int k) {
      data.resize(k);
      size = k;
   }

   bool enQueue(int value) {
      if (isFull()) return false;
      if (isEmpty()) {
         rear = front = 0;
         data[rear] = value;
         return true;
      }
      rear = (rear + 1) % size;
      data[rear] = value;
      return true;
   }

   bool deQueue() {
      if (isEmpty()) return false;
      if (front == rear) {
         front = rear = -1;
         return true;
      }
      front = (front + 1) % size;
      return true;
   }

   int Front() {
      if (isEmpty()) return -1;
      return data[front];
   }

   int Rear() {
      if (isEmpty()) return -1;
      return data[rear];
   }

   bool isEmpty() {
      if (front == -1 && rear == -1) return true;
      return false;
   }

   bool isFull() { return (rear + 1) % size == front; }
};
