#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//            for (i = 0; i < 4; i++)
//            {
//                *(p + i) = 0;
//            }
//
//            for (i = 0; i < 5; i++)
//            {
//                printf("%d ", arr[i]);
//            }
//    return 0;
//}
//


//int main()
//{
//    unsigned long pulArray[] = { 6,7,8,9,10 };
//    unsigned long* pulPtr;
//    pulPtr = pulArray;
//        *(pulPtr + 3) += 3;
//        printf("%d %d\n", *pulPtr, *(pulPtr + 3));
//return 0;
//}
//



//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}


int main()
{
    int arr[]= {10,11,12,13,14,15,16,17,18,19,20};
    int* p = arr;
    int i  = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

        for(i = 11; i < sz; i++)
        {
            *( p+i ) = i;
        }
    int* q = arr + sz - 1;

        for (i = 0; i < sz; i++)
        {
          printf("%d ", *q);
          q--;
        }
  return 0;
}
