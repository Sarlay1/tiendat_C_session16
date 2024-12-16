#include <stdio.h>

int timKiemPhanTu(int *arr, int size, int giaTri) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == giaTri) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int mang[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(mang) / sizeof(mang[0]);
    int giaTriCanTim = 7;

    int viTri = timKiemPhanTu(mang, size, giaTriCanTim);

    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri: %d\n", giaTriCanTim, viTri);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", giaTriCanTim);
    }

    return 0;
}

