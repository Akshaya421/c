// SET - 2
//    4.Write a program to swap two numbers using call by value & Call by reference.

#include <stdio.h> // call by value

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Values after swapping in swap_by_value function (call by value): a = %d, b = %d\n", a, b);
}

int main() {
    int a = 10;
    int b = 20;
    printf("Original values: a = %d, b = %d\n", a, b);
    swap_by_value(a, b);
    printf("Values after swapping in main function (call by value): a = %d, b = %d\n", a, b);
    return 0;
}
// Original values: a = 10, b = 20
 //          Values after swapping in swap_by_value function (call by value): a = 20, b = 10
//           Values after swapping in main function (call by value): a = 10, b = 20
// call by reference
include <stdio.h>

void swap_by_reference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Values after swapping in swap_by_reference function (call by reference): a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 10;
    int b = 20;
    printf("Original values: a = %d, b = %d\n", a, b);
    swap_by_reference(&a, &b);
    printf("Values after swapping in main function (call by reference): a = %d, b = %d\n", a, b);
    return 0;
}


//Output:Original values: a = 10, b = 20
//          Values after swapping in swap_by_reference function (call by reference): a = 20, b = 10
//          Values after swapping in main function (call by reference): a = 20, b = 10



