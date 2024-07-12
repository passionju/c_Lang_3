#include<stdio.h>
main(){
int n,i1=1,i2=1,f=1,i3=0,max=5,p=0 ;//n是幾層,i1是目前第幾層,i2是目前一層中的第幾行,f是第一航有幾顆星,i3是有幾個-,p是目前第幾個星了
do {
printf("請輸入一個奇數:");
scanf(" %d",&n);
	if(n%2!=1){
		printf("請輸入奇數");	
	}
}
while(n%2!=1);
//i是目前層數
while(i1<=n){
	while(i2%4!=0){
	//第三行換下一層
		while(i3<((max+(n-1)*2)-f)/2){

			printf("-");
			i3++;

		}
		i3=0;
		while(p<f){
			printf("*");
			p++;
		}
		
		while(i3<((max+(n-1)*2)-f)/2){
			printf("-");
			i3++;
			
		}
		//一行結束後要做的事
		i2++;
		f=f+2;
		p=0;
		i3=0;
		printf("\n");
	}
	f=f-4;
	i2=1;	
	i1++;
}

while(i2<=(n+1)/2){
		
	while(i3<((max+(n-1)*2)-n)/2){
		printf("-");
		i3++;	
	}
	i3=0;
	while(p<n){
		printf("*");
		p++;
	}

	while(i3<((max+(n-1)*2)-n)/2){
		printf("-");
		i3++;

	}
i2++;
p=0;
i3=0;
printf("\n");
}

}
