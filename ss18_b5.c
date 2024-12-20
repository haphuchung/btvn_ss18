#include <stdio.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct sinhVien SV[50] = {
        {1, "Phung Vuong", 18, "0123456789"},
        {2, "Bui Vu", 18, "0123456788"},
        {3, "Le Long", 18, "0123456777"},
        {4, "Xuan Vinh", 18, "0123456666"},
        {5, "Ha Hung", 18, "0123455555"}
    };

    int searchId;
    int flag = 0;
    printf("nhap id sinh vien can tim: ");
    scanf("%d", &searchId);
	fflush(stdin);
    for(int i = 0; i < 5; i++){
        if (SV[i].id == searchId){
            flag = -1;

            printf("sinh vien tim thay:\n");
            printf("id: %d\n", SV[i].id);
            printf("ten: %s\n", SV[i].name);
            printf("tuoi: %d\n", SV[i].age);
            printf("so dien thoai: %s\n", SV[i].phoneNumber);

            printf("nnhap ten moi cho sinh vien: ");
            fgets(SV[i].name, sizeof(SV[i].name), stdin);
            printf("nhap tuoi moi cho sinh vien: ");
            scanf("%d", &SV[i].age);
			fflush(stdin);
        }
    }   

    if(!flag){
        printf("khong tim thay sinh vien voi id %d\n", searchId);
    }else{
        printf("thong tin cac sinh vien sau khi sua:\n");
        for (int i = 0; i < 5; i++) {
            printf("sinh vien %d:\n", SV[i].id);
            printf("id: %d\n", SV[i].id);
            printf("ten: %s\n", SV[i].name);
            printf("tuoi: %d\n", SV[i].age);
            printf("so dien thoai: %s\n", SV[i].phoneNumber);
        }
    }

    return 0;
}

