#include <stdio.h>

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
    return 0;
}

int main() {
    struct SinhVien sinhVien[50];
    int n = 5;
    int i, idTimKiem;

    for (i = 0; i < n; i++) {
        sinhVien[i].id = i + 1;

    }

    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &idTimKiem);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (sinhVien[i].id == idTimKiem) {
            found = 1;
            printf("Tim thay sinh vien co ID %d\n", idTimKiem);
            printf("Nhap ten moi: ");
            fgets(sinhVien[i].name, 50, stdin);
            sinhVien[i].name[my_strlen(sinhVien[i].name) - 1] = '\0';

            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhVien[i].age);
            getchar();
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ID %d\n", idTimKiem);
    }

    printf("\nThong tin cua cac sinh viên sau khi sua:\n");
    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
    }

    return 0;
}
