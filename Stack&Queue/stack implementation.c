#include <stdio.h>
#define size 20

int arr[size], top = -1;

void push(int n) {
    if(top == size-1){
        printf("Overflow\n");
        return;
    }
    top++;
    arr[top] = n;
}

void pop() {
    if(top == -1){
        printf("Underflow\n");
        return;
    }
    printf("%d \n", arr[top]);
    top--;
}

void peek() {
    if(top == -1){
        printf("Underflow\n");
        return;
    }
    printf("%d\n", arr[top]);
}

void display() {
    if(top == -1) {
        printf("Underflow\n");
        return;
    }
    for(int i = top; i>=0; i--) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(void) {
	// your code goes here
	int ch,item;;
	do {
	    printf("Press 1 tp push, 2 to pop,  3 to peek, 4 to display, 5 to exit\n");
	    scanf("%d", &ch);
	    
	    switch(ch) {
	        case 1 : 
	                 printf("Enter item: ");
	                 scanf("%d", &item);
	                  push(item);
	                  break;
	        
	        case 2 : pop();
	                 break;
	                 
	        case 3 : peek();
	                 break;
	                 
            case 4 : display();
                     break;
                     
            case 5 : break;
            
            default : printf("Wrong Choice");
	    }
	}while(ch!=5);
	return 0;
}

