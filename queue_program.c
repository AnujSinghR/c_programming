//Write a C program to implement a queue using an array
#include <stdio.h>

#define MAX_SIZE 10
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
// Function to insert an element into the queue
void enqueue(int item) {
if (rear == MAX_SIZE - 1) {
printf("Error: Queue is full\n");
return;
}
if (front == -1) {
front = 0;
}
rear++;
queue[rear] = item;
}

// Function to display the elements in the queue
void display() {
if (front == -1 || front > rear) {
printf("Queue is empty\n");

return;
}
printf("Queue elements are: ");
for (int i = front; i <= rear; i++) {
printf("%d ", queue[i]);
}
printf("\n");
}
// Function to check whether the queue is empty
int is_empty() {
if (front == -1 || front > rear) {
return 1;
}
return 0;
}
int main() {
printf("Initialize a queue!");
// Insert some elements into the queue.
printf("\nCheck the queue is empty or not? %s\n", is_empty() ? "Yes" : "No");
printf("\nInsert some elements into the queue:\n");
enqueue(1);
enqueue(2);
enqueue(3);
display();

printf("\nInsert another element into the queue:\n");
enqueue(4);
display();
printf("\nCheck the queue is empty or not? %s\n", is_empty() ? "Yes" : "No");
return 0;
}