#include <stdio.h>

void capNhatPhanTu(int *arr, int size, int viTri, int giaTriMoi) {
    if (viTri >= 0 && viTri < size) {
        arr[viTri] = giaTriMoi;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int size = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi cap nhat:\n");
    inMang(mang, size);

    capNhatPhanTu(mang, size, 2, 99);

    printf("Mang sau khi cap nhat:\n");
    inMang(mang, size);

    return 0;
}

