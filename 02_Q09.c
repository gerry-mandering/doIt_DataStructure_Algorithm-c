///* Q9 배열의 모든 요소를 역순으로 복사합니다. */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 b의 모든 요소를 배열 a에 COPY ---*/
//void ary_rcopy(int* numArr, int* arrCopy, int size);
//
//int main(void) {
//    int size;
//    int *numArr, *arrCopy;
//
//    printf("요솟수를 입력하시오 : ");
//    scanf("%d", &size);
//
//    numArr = (int*)calloc(size, sizeof(int));
//    arrCopy = (int*)calloc(size, sizeof(int));
//
//    for (int i=0; i<size; i++) {
//        printf("%d번째 수를 입력하시오 : ", i+1);
//        scanf("%d", numArr+i);
//    }
//
//    ary_rcopy(numArr, arrCopy, size);
//
//    for (int i=0; i<size; i++) {
//        printf("%d ", arrCopy[i]);
//    }
//
//    return 0;
//}
//
//void ary_rcopy(int* numArr, int* arrCopy, int size) {
//    for (int i=0; i<size; i++) {
//        arrCopy[size-i-1] = numArr[i];
//    }
//}