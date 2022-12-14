//#include "stdio.h"
//#include "malloc.h"
//#include "stdlib.h"
//
//#define MALLOC_ERROR 1
//#define ARG_ERROR 2
//#define MISSING_POINTER_VALUE 3
///*
//Init the first array
//*/
//
//int *initArray(int n, int *array)
//{
//    for (int i = 0; i < n; i++)
//    {
//        array[i] = 1;
//        printf("%d ", array[i]);
//    }
//    printf("\n");
//    return array;
//}
//
///*
//add the first number of pointer1 array with the last number of pointer array
//and the rest of the numbers of pointer1 array equal to the rest of the numbers
//of pointer array
//
//add a pos variable to record the position of the array the pos variable may
// shift from the head to the tail
//*/
//
//int *partitionArray(int n, int pos, const int *pointer, int *pointer1)
//{
//    if (pointer1 == NULL || pointer == NULL)
//    {
//        printf("Error: Missing Pointer value\n");
//        return MISSING_POINTER_VALUE;
//    }
//    else
//    {
//        pointer1[pos] = pointer[pos] + pointer[n - 1];
//        if (pos > 0)
//        {
//            for (int i; i < pos; i++)
//            {
//                pointer1[i] = pointer[i];
//            }
//        }
//
//        for (int j = pos + 1; j < n; j++)
//        {
//            pointer1[j] = pointer[j];
//        }
//        // set the rest of the numbers of pointer1 array equal to
//        // the rest of the numbers of pointer array
//    }
//    return pointer1;
//}
//
//int main(int argc, char *argv[])
//{
//
//    if (argc != 2)
//    {
//        printf("Error: Argument Error\n");
//        return ARG_ERROR;
//    } // check the argument number is 2 or not
//
//    int num; // set the length of the array
//
//    num = (int) strtol(argv[1], NULL, 10);//turn the string into int
//    // default num = 6;
//
//    int *pointer = (int *)malloc(num * sizeof(int)); // malloc the array pointer
//    pointer = initArray(num, pointer);               // initialize the array
//    //    printf("argc num is %d\n", argc); // check the argc num
//
//    for (int i = 0; i < num - 1; i++)
//    {
//        int *partition = (int *)malloc((num - 1 - i) * sizeof(int));
//        // printf("malloc partition size is %d\n", (num - i));
//        if (partition == NULL)
//        {
//            printf("malloc failed");
//            return MALLOC_ERROR;
//        }
//        else
//        {
//            partition = partitionArray(num - i, 0, pointer, partition);
//            // from 0 to num - i - 1
//            pointer = partition; // give the pointer the address of partition
//            for (int k = 0; k < num - 1 - i; k++)
//            {
//                printf("%d ", pointer[k]);
//            } // print the array pointer
//            printf("\n");
//            // }
//        }
//    }
//    return 0;
//}
