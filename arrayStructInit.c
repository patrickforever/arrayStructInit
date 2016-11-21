#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    int intType;
    int intArray[5];
}TEST;
int main()
{
    /////array give value///////////
    int i  , j;
    int arrayReal[5] = {1,2,3,4,5};
    int *array1;
    int *array2;
    array1 = &arrayReal[0];
    array2 = array1 ;
    for(i=0;i<5;i++){
        printf("%d %d %d\n",arrayReal[i],*(array1+i), *(array2+i) );
    }
    //////init struct and struct give value //////////////
    #if 1
    TEST init = {
        .intType = 5,
        .intArray = {1,2,3,4,5}
    };
    #else
    TEST init = {5,{1,2,3,4,5}};
    #endif // 1
    TEST takeInit;
    takeInit = init;
    printf("%d %d %d %d %d %d\n",takeInit.intType,takeInit.intArray[0],takeInit.intArray[1],takeInit.intArray[2],takeInit.intArray[3],takeInit.intArray[4]);

}
