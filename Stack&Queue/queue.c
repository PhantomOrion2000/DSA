#include <stdio.h>
#define size 50

int arr[size], rear = -1, front = -1;

void enqueue(int n) {
  if (rear == size - 1) {
    printf("Overflow");
    return;
  }
  if (front == -1 && rear == -1 || front > rear) {
    rear = 0;
    front = 0;
  } else {
    rear++;
  }
  arr[rear] = n;
}

void dequeue() {
  if (front == -1 || front > rear) {
    printf("Underflow");
    return;
  }
  printf("%d \n", arr[front]);
  front++;
}

void peek() {
  if (front == -1 || front > rear) {
    printf("Underflow");
    return;
  }
  printf("%d \n", arr[front]);
}

void display() {
  if (front == -1 || front > rear) {
    printf("Underflow");
    return;
  }
  for (int i = front; i <= rear; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int ch;
  int item;
  do {
    printf("Press 1 tp enqueue, 2 to dequeue,  3 to peek, 4 to display, 5 to "
           "exit");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
      printf("Enter item: ");
      scanf("%d", &item);
      enqueue(item);
      break;

    case 2:
      dequeue();
      break;

    case 3:
      peek();
      break;

    case 4:
      display();
      break;

    case 5:
      break;

    default:
      printf("Wrong Choice");
    }
  } while (ch != 5);
  return 0;
}
