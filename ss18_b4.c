#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sinhVien[50];
    int i, n = 5; 

    for (i = 0; i < n; i++) {
        sinhVien[i].id = i + 1; 

        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Nhap ten: ");
        fgets(sinhVien[i].name, 50, stdin);
        sinhVien[i].name[strcspn(sinhVien[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &sinhVien[i].age);
        getchar(); 

        printf("Nhap so dien thoai: ");
        fgets(sinhVien[i].phoneNumber, 20, stdin);
        sinhVien[i].phoneNumber[strcspn(sinhVien[i].phoneNumber, "\n")] = '\0';
    }

    printf("\nThong tin cua cac sinh vien:\n");
    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
    }

    return 0;
}
