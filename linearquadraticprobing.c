#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
# define size 5
int hash[size]={0};
void insertlinear(int data){
    int index=data%size;
    int i=0;
    while(hash[(index+i)%size]!=0){
        i++;
    }
hash[(index+i)%size]=data;
}
int searchlinear(int data){
    int index=data%size;
    int i=0;
    while(hash[((index+i)%size)]!=0){
        if(hash[((index+i)%size)]=0){
            return -1;
        }
        i++;
    }
    return ((index+i)%size);
}
void insertquadratic(int data){
    int index=data%size;
    int i=0;
    while(hash[(index+i*i)%size]!=0){
        i++;
    }
hash[(index+i*i)%size]=data;
}
int searchquadratic(int data){
    int index=data%size;
    int i=0;
    while(hash[((index+i*i)%size)]!=0){
        if(hash[((index+i*i)%size)]=0){
            return -1;
        }
        i++;
    }
    return ((index+i*i)%size);
}
void display(){
    printf("the hash table is:\n");
    for(int i=0;i<size;i++){
        printf("%d",hash[i]);
    }
    printf("\n");
}
int main(){
int data,op,index;
while(1){
    printf("\n 1.linearprobing 2.searchlinearprobing 3.quadraticprobing  4.searchquadraticprobing 5.display 6.exit\n");
    printf("enter your choice\n");
    scanf("%d",&op);
    switch(op){
        case 1: printf("enter the data\n");
                scanf("%d",&data);
                insertlinear(data);
                break;
        case 2:printf("enter the data\n");
        scanf("%d",&data);
        index = searchlinear(data);
         if(index==-1){
             printf("data not found\n");
         }
         else{
             printf("data found at index %d\n",index);
         }
         break;
         case 3:printf("enter the data\n");
                scanf("%d",&data);
                insertquadratic(data);
                break;
        case 4:printf("enter the data\n");
        scanf("%d",&data);
        index=searchquadratic(data);
         if(index==-1){
             printf("data not found\n");
         }
         else{
             printf("data found at index %d\n",index);
         }
         break;
         case 5:display();
         break;
         case 6: exit(0);
         default:printf("invalid input\n");
    }
}
}


