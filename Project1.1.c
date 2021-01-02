//Metehan ERTAN

#include<stdio.h> 
#include<stdlib.h> 

	int main(){
		
		FILE *fp;
    	char str[15];
    	char* filename = "input.txt";
    	char inputs[8][9];
 
    	fp = fopen(filename, "r");												//Here program open input.txt file
    
    	if (fp == NULL){
    	    printf("Could not open file %s",filename);
    	    return 1;
    	}
    	
    	
    	printf("Inputs from %s are:\n",filename);
    	int i=0;	
    	while (fgets(str, 13, fp) != NULL){									//Gets the pharagraphs
    		
    		int x,count;
    		for(x=0;x<13;x++){
    			
    			
    			if(str[x]=='\n'){
    				x=15;
    				i--;
				}
    			
    			if(isalpha(str[x]) || isdigit(str[x])){
    				inputs[count][i]=str[x];
    				printf(" %c",inputs[count][i]);
    				count++;
				}
    			
    			if(x==12){
    				printf("\n");
				}
				
				if(count==8){
					count=0;
				}
			}
    		
    		i++;
		}
		printf("\n");
		
		
		/* This part prints the inputs
		int x,y;
		for(x=0;x<9;x++){
			for(y=0;y<8;y++){
				printf("%c",inputs[y][x]);
			}
			printf("\n");
		}
		*/
		
		int order,type,size;
		for(;1;){
			printf("Byte ordering:\n0-Little Endian\n1-for Big Endian : ");
			scanf("%d",&order);
			if(order==0 || order==1){
				break;
			}else{
				printf("\nEnter a valid number!\n\n");
			}
		}
		
		for(;1;){
			printf("\nData type:\n0-Signed Integer\n1-Unsigned Integer\n2-Floating Point Number : ");
			scanf("%d",&type);
			if(type==0 || type==1 ||type==2 ){
				break;
			}else{
				printf("\nEnter a valid number!\n\n");
			}
		}
		
		for(;1;){
		printf("\nData type size(1, 2, 3, 4 or 6): ");
		scanf("%d",&size);
			if( size==1 ||size==2 ||size==3 ||size==4 ||size==6 ){
				break;
			}else{
				printf("\nEnter a valid number!\n\n");
			}
		}
	
	}
