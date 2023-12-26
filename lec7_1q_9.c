#include<stdio.h>

void main(){
	int i,j,k=2;
	char c='A';
	

	
	for(i='A';i<='E';i++){
		for(j=i;j<='E';j++){
			if(i%2==0){
				if(j%2==0){
				
				printf("%c",c++);
			}else{
				printf("%d",k++);
			}
		}else if(j%2==0){
				printf("%d",k++);
			}else{
				printf("%c",c++);
			}
		}
		
	
		printf("\n");
	}
	 }

