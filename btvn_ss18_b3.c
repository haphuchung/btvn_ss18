#include <stdio.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sinhVien[5]; 
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Nhap ten: ");
        fgets(sinhVien[i].name, 50, stdin);
        sinhVien[i].name[strcspn(sinhVien[i].name, "\n")] = '\0'; 

        printf("Nhap tuoi: \n");
        scanf("%d", &sinhVien[i].age);
        getchar();

        printf("Nhap so dien thoai: \n");
        fgets(sinhVien[i].phoneNumber, 20, stdin);
        sinhVien[i].phoneNumber[strcspn(sinhVien[i].phoneNumber, "\n")] = '\0';
    }

    printf("Thong tin cua cac sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
    }

    return 0;
}
