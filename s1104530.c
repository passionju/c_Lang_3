#include<stdio.h>
main(){
int n,i1=1,i2=1,f=1,i3=0,max=5,p=0 ;//n�O�X�h,i1�O�ثe�ĴX�h,i2�O�ثe�@�h�����ĴX��,f�O�Ĥ@�観�X���P,i3�O���X��-,p�O�ثe�ĴX�ӬP�F
do {
printf("�п�J�@�ө_��:");
scanf(" %d",&n);
	if(n%2!=1){
		printf("�п�J�_��");	
	}
}
while(n%2!=1);
//i�O�ثe�h��
while(i1<=n){
	while(i2%4!=0){
	//�ĤT�洫�U�@�h
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
		//�@�浲����n������
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
