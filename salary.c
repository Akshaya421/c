#include<stdio.h>
int main () {
	int bpay;
	float hra,ta,da,ded,gpay,netpay;
	printf("enter the basic pay");
	scanf("%d",&bpay);
	if (bpay<50000) {
		hra=bpay*0.1,ta=bpay*0.8,da=bpay*0.4;
		ded=bpay*0.15;
		gpay=hra+ta+da;
		netpay=gpay-ded;
		printf("gross salary of employee :%.2f\n",gpay);
		printf("net salary of employee :%.2f\n",netpay);
	} else if (bpay>50000 && bpay<100000) {
		hra=bpay*0.12,ta=bpay*0.1,da=bpay*0.08;
		ded=bpay*0.12;
		gpay=hra+ta+da;
		netpay=gpay-ded;
		printf("gross salary of employee:%.2f\n",gpay);
		printf("net saalary of an employee:%.2f\n",netpay);
	} else if (bpay>100000) {
		hra=bpay*0.15,ta=bpay*0.1,da=bpay*0.1;
		ded=bpay*0.15;
		printf("gross salary of employee :%.2f\n",gpay);
		printf("net salary of employee :%.2f\n",netpay);	
	}
	return 0;
}

