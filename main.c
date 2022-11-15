#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"
#include "string.h"

#define MALLOC_ERROR 1
#define ERROR 2


int *initArray(int n, int *array) {
    for (int i = 0; i < n; i++) {
        array[i] = 1;
        printf("%d ", array[i]);
    }
    printf("\n");
    return array;
}

//令pointer1数组的第一位数字的值等于pointer数组第一位数字的值与最后一位数字的值相加，
//剩余的值等于pointer数组其余位置的值
int *partitionArray(int n, int pos, const int *pointer, int *pointer1) {
    if (pointer1 == NULL || pointer == NULL) {
        printf("Error: Missing Pointer value\n");
        return NULL;
    } else {
        pointer1[pos] = pointer[pos] + pointer[n - 1];
        for (int i = 1; i < n; i++) {
            pointer1[i] = pointer[i];
        }
    }
    return pointer1;
}

int main(int argc, char *argv[]) {

    // if (argc != 2) {
    //     printf("Error: Argument Error\n");
    //     return ERROR;
    // }

    int num;//数组长度
    // num = (int) strtol(argv[1], NULL, 10);//将字符串转换为整数
    num = 6;

    int *pointer = (int *) malloc(num * sizeof(int));//动态分配内存
    pointer = initArray(num, pointer);//初始化数组
//    printf("argc num is %d\n", argc);


    for (int i = 0; i < num - 1; i++) {
        int *partition = (int *) malloc((num - 1 - i) * sizeof(int));
        // printf("malloc partition size is %d\n", (num - i));
        if (partition == NULL) {
            printf("malloc failed");
            return MALLOC_ERROR;
        } else {
                partition = partitionArray(num - i, 0, pointer, partition);
                // todo -- we need to add a for loop to set pos value 
                // from 0 to num - i - 1
                pointer = partition; //将partition的地址赋值给pointer
                for (int k = 0; k < num - 1 - i; k++) {
                    printf("%d ", pointer[k]);
                } //输出pointer数组
                printf("\n");
            // }
        }
    }
    return 0;
}
