/*- mssv: 110124048
- Ho ten: Nguyen Minh Duy 
-lop: DA24TTA
*/
#include<stdio.h>
void nhapNgay(float a[], int n),thoigianhoc(float a[], int n);
float trungbinhsogiohoc(float a[], int n);
int main(){
	int a[SIZE];
	float a;
	printf("\nNhap so ngay trong tuan: ");
	printf("tong so gio hoc trong tuan: %.2f gio\n", &tonggio);
return 0;
}
void nhapNgay(float a[], int n){
	for (int i=0;i<n;i++){
		do{
			printf("\nNhap thoi gian hoc cho ngay: ", i+2);
			scanf("%.2f", a[i]);
			if (a[i]<0||a[i]>15.0)
		}while(a[i]<0||a[i]>15.0);
	}
}
void thoigianhoc(float a[], int n){
	for (int i=0;i<n;i++){
		printf("thoi gian hoc cua thu %d la: ",i+2);
		scanf("%.2f", &a[i]);
	}
}
float tonggio(float a[];int n){
	int kq=0;
	for (int i=0; i<n;i++){
		kq+= a[i];
	}
	return kq;
}
float trungbinhsogiohoc(float a[], int n){
	int kq=0;
	for (int i=0;i<n;i++){
		kq+= a[i];
	}
	return kq/ngay;
}
void ngayhocnhieunhatvaitnhat(float a[], int n, int j, int g){
	int nhieunhat=0, int itnhat=0;
	for(int i=0;i<n;i++){
		if (a[i]>a[j]){
			
		}
	}
}
