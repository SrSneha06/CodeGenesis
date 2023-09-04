#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int queue[n];
    int front=0,back=0,ch=1,op;
    while(ch==1){
        printf("1.enqueue2.dequeue3.print4.exit\n");
        printf("enter ur choice:\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                int data;
                printf("enter the number to enqueue\n");
                scanf("%d",&data);
                if(back==n){
                    printf("queue is full\n");
                }
                else{
                    printf("number successfully added\n");
                    queue[back]=data;
                    back=back+1;
                }
                break;
            case 2:
                if(front==back){
                    printf("queue is empty\n");
                }
                else{
                    printf("%d",queue[front]);
                    front =front+1;
                }
                break;
            case 3:
                if(front!=back){
                    for(int i=front;i<back;i++){
                        printf("%d\n",queue[i]);
                    }
                }
                break;
            case 4:
                ch=0;
                break;
            default:
                printf("invalid choice\n");
        }
        printf("\n");
    }
    
    
    
}
