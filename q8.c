#include<stdio.h>
int main(){
	int i;
	int a=64;
	for(i=0;i<5;i++){
		if(i==0 || i==4){
		printf("%c %c %c %c %c\n",a+1,a+2,a+3,a+4,a+5);//A B C D E (65 66 67 68 69) 
		a++;//65
		}
		else if(i==1 || i==3 ){
		printf("  %c   %c\n",a+2,a+5);//68 //70
		a++;//66
		}
		
		else{
			printf("    %c   \n",a+3);
			a++;
		}
		
	}
}