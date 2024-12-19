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


int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && *str2 && tolower(*str1) == tolower(*str2)) {
        str1++;
        str2++;
    }
    return tolower(*str1) - tolower(*str2);
}

int main() {
    struct SinhVien sinhVien[MAX_SINH_VIEN];
    int n = 5; 


    for (int i = 0; i < n; i++) {
        sinhVien[i].id = i + 1;
    }

    char tenCanXoa[50];
    printf("Nhap ten sinh vien can xoa: ");
    fgets(tenCanXoa, 50, stdin);
    tenCanXoa[my_strlen(tenCanXoa) - 1] = '\0'; 

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (my_strcmp(sinhVien[i].name, tenCanXoa) == 0) {
            found = 1;

            for (int j = i; j < n - 1; j++) {
                sinhVien[j] = sinhVien[j + 1];
            }
            n--; 
            break;
        }
    }

    if (found) {
        printf("Da xoa sinh vien thanh cong!\n");
    } else {
        printf("Khong tim thay sinh vien can xoa.\n");
    }

    printf("\nThong tin cua cac sinh vien sau khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
    }

    return 0;
}

