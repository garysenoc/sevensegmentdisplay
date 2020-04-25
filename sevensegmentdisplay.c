#include <stdio.h>
#include <string.h>


void print_digits_array();
int charInt(char a);

					     //0,1,2,3,4,5,6
	int segments[][10] = {{1,1,1,1,1,1,0}, //0
						  {0,1,1,0,0,0,0}, //1
						  {1,1,0,1,1,0,1}, //2
						  {1,1,1,1,0,0,1}, //3
						  {0,1,1,0,0,1,1}, //4
						  {1,0,1,1,0,1,1}, //5
						  {1,0,1,1,1,1,1}, //6
						  {1,1,1,0,0,0,0}, //7
						  {1,1,1,1,1,1,1}, //8
						  {1,1,1,0,0,1,1}};//9
						  
	char digits[100];
						  
	
int main(){
	int i,s=0,position=0;
	char number[100];
	
	printf("Enter a number: ");
	gets(number);		  
	
	for(i=0;i<strlen(number);i++)
		if(isdigit(number[i]))
			digits[s++] = number[i];	 		
			
	print_digits_array();
					  
	return 0;
}

int charInt(char a){
	return (int)(a)-48;
}

void print_digits_array(){
	int i=0;
	
	for(i=0;i<strlen(digits);i++){
		if(segments[charInt(digits[i])][0]==1)
			printf(" _ ");
		else
			printf("   ");
	printf("  ");
	}
	
	printf("\n");
	for(i=0;i<strlen(digits);i++){
	if(segments[charInt(digits[i])][5]==1)
		printf("|");
	else
		printf(" ");
		
	if(segments[charInt(digits[i])][6]==1)
			printf("_");
	else
		printf(" ");
		
		
	if(segments[charInt(digits[i])][1]==1)
		printf("|");
	else
		printf(" ");
		
	printf("  ");
}

printf("\n");

	for(i=0;i<strlen(digits);i++){
	if(segments[charInt(digits[i])][4]==1)
		printf("|");	
	else
		printf(" ");
	if(segments[charInt(digits[i])][3]==1)
		printf("_");
	else
		printf(" ");
	if(segments[charInt(digits[i])][2]==1)
		printf("|");	
	else
		printf(" ");
	
	printf("  ");
}

}


