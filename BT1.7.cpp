#include<stdio.h>
#include<conio.h>
struct Ngay
{
    int ngay, thang, nam;
};
typedef Ngay NGAY;
void nhapngay(NGAY&);
void xuatngay(NGAY);
void nhapngay(NGAY& ng)
{
    printf("\nNhap ngay: ");
    scanf("%d", &ng.ngay);
    printf("\nNhap thang: ");
    scanf("%d", &ng.thang);
    printf("\nNhap nam: ");
    scanf("%d", &ng.nam);
}
void xuatngay(NGAY ng)
{
    printf("\n%d-%d-%d", ng.ngay, ng.thang, ng.nam);
}
int main()
{
    NGAY ng;
    nhapngay(ng);
    xuatngay(ng);
    getch();
    return 0;
}