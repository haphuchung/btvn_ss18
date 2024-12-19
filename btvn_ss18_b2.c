#include <stdio.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sv;

    printf("Nhap ten sinh vien: ");
    int i = 0;
    while ((sv.name[i] = getchar()) != '\n' && i < 49) {
        i++;
    }
    sv.name[i] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &sv.age);

    printf("Nhap so dien thoai: ");
    i = 0;
    while ((sv.phoneNumber[i] = getchar()) != '\n' && i < 19) {
        i++;
    }
    sv.phoneNumber[i] = '\0';

    printf("\nThong tin sinh vien:\n");
    printf("Ten: ");
    for (i = 0; sv.name[i] != '\0'; i++) {
        putchar(sv.name[i]);
    }
    printf("\nTuoi: %d\n", sv.age);
    printf("So dien thoai: ");
    for (i = 0; sv.phoneNumber[i] != '\0'; i++) {
        putchar(sv.phoneNumber[i]);
    }
    printf("\n");

    return 0;
}
