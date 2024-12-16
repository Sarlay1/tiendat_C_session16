#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Cach 1:\n");
    printf("Gia tri cua num: %d\n", num);
    printf("Dia chi cua num: %p\n", (void *)&num);

    printf("Cach 2:\n");
    printf("Gia tri cua num thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua num thong qua con tro: %p\n", (void *)ptr);

    return 0;
}

