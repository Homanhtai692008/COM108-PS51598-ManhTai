#include <stdio.h>
int main() {
    char mssv[10] = "PS51598";
    char fullname[20] = "Ho Manh Tai";

    float toan = 7;
    float ly = 5;
    float hoa = 8;

    float dtb = ((toan * 2) + ly + hoa) / (float)4;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s\n", fullname);
    printf("Diem trung binh: %.2f\n", dtb);

    return 0;
}