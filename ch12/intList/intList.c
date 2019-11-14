//
// Created by 李熠 on 2019/11/5.
//

#include "intList.h"

IntList *intListNew(int initSize) {
    IntList *rlt = (IntList *) malloc(sizeof(IntList));
    rlt->length = 0;
    rlt->size = initSize;
    rlt->data = malloc(initSize * sizeof(int));
    return rlt;
}

int intListDestroy(IntList *list) {
    free(list->data);
    free(list);
    return 1;
}

int intListAdd(IntList *list, int elem) {
    if (list->length >= list->size) {
        int *p = (int *) realloc(list->data, (list->size + SIZE_STEP) * sizeof(int));
        if (p == NULL) {
            printf("获取内存空间失败");
            return 0;
        }
        list->data = p;
        list->size += SIZE_STEP;
    }
    list->data[list->length] = elem;
    list->length++;
    return 1;
}

void intListDisplay(IntList *list) {
    for (int i = 0; i < list->length; ++i) {
        printf("[%d]=%d ", i, list->data[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}
int intListUpdate(IntList *list, int index, int elem)
{



}