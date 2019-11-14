#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct {
    int *head;       //顺序表指针变量
    int length;      //记录当前顺序表的长度
    int capacity;    //记录顺序表分配的存储容量

} SeqList;

/*初始化顺序表*/
SeqList initSeqList() {
    SeqList list;
    list.head = (int *)malloc(SIZE * sizeof(int));

    if (!list.head) {
        printf("初始化失败！\n");
    }

    list.length = 0;
    list.capacity = SIZE;
    return list;
}




int main()
{
    SeqList a = initSeqList();
    for (int i = 0; i < 5; i++)
    {   a.head[i] =i+1; 

    }
    printf("head[%d]=%d\n",3,a.head[3]);
}
