#include<stdio.h>
#include<math.h>
void nhap(int a[], int &n) {
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&a[i]);
	}
}
bool kiemtra(int x) {
	if (x<2) {
		return false;
	}
	for(int i=2;i<=sqrt(x);i++) {
		if (x%i==0) {
			return false;
		}
	}
	return true;
	
}
main () {
	int a[100], n;
	nhap(a,n);
	for(int i=1;i<=n;i++) {
		if (kiemtra(a[i])==true) {
			printf("%d la so nguyen to\n",a[i]);
		}
		else {
			printf("%d khong phai la so nguyen to\n",a[i]);
		}
	}
}