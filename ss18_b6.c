#include <stdio.h>

#define MAX_SINH_VIEN 50

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};


int my_strlen(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    struct SinhVien sinhVien[MAX_SINH_VIEN];
    int n = 5; 

    for (int i = 0; i < n; i++) {
        sinhVien[i].id = i + 1;
    }


    if (n < MAX_SINH_VIEN) {
        sinhVien[n].id = n + 1;
        printf("Nhap thong tin sinh vien moi:\n");
        printf("Nhap ten: ");
        fgets(sinhVien[n].name, 50, stdin);
        sinhVien[n].name[my_strlen(sinhVien[n].name) - 1] = '\0'; 

        printf("Nhap tuoi: ");
        scanf("%d", &sinhVien[n].age);
        getchar(); 

        printf("Nhap so dien thoai: ");
        fgets(sinhVien[n].phoneNumber, 20, stdin);
        sinhVien[n].phoneNumber[my_strlen(sinhVien[n].phoneNumber) - 1] = '\0';

        n++; 
    } else {
        printf("Mang da day, khong the them sinh vien moi.\n");
    }


    printf("\nThong tin cua cac sinh vien sau khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
    }

    return 0;
}
