//
//  main.c
//  SS16 Bai5
//
//  Created by Little Chick on 30/03/2022.
//

#include <stdio.h>
#include <math.h>
int sum(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
double divi(int a, int b);

int main(int argc, const char * argv[]) {
    int a,b,i;
    int s;
    float d;
    int op;
    printf("\tTINH TOAN");
    printf("\n=================\n");
    printf("1.Nhap so\n");
    printf("2.Tinh tong\n");
    printf("3.Tinh hieu\n");
    printf("4.Tinh tich\n");
    printf("5.Tinh thuong\n");
    printf("6.Thoat\n");
    printf("=================\n");
    for(i=1;i<7;i++){
    printf("Chon: ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("Nhap so: ");
            scanf("%d%d",&a,&b);
            break;
        case 2: s = sum(a, b);
            printf("Tong la: %d\n",s);
            break;
        case 3: s = sub(a, b);
            printf("Hieu la: %d\n",s);
            break;
        case 4: s = multi(a, b);
            printf("Tich la: %d\n",s);
            break;
        case 5: d = divi(a, b);
            
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
    }}
    return 0;
}
int sum(int a, int b){
    int s;
    s = a + b;
    return s;
}
int sub(int a, int b){
    int s;
    s = a - b;
    return s;
}
int multi(int a, int b){
    int s;
    s = a * b;
    return s;
}
double divi(int a, int b){
    float s;
    if(b == 0){
        printf("Khong thuc hien thanh cong.\n");
        return 0;
    }else{
        s = (float)a/b;
        printf("Thuong la: %0.3f\n",s);
        return s;
    }
}
