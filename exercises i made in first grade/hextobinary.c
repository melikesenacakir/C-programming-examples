#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	char b,hex[4];
	printf("enter a digit");
	scanf("%c",&b);
	printf("the hexadecimal digit: %c\n",b);
	switch(b){
		case '0':
			strcat(hex,"0000");
		    break;
		case '1':
			strcat(hex,"0001");
			break;
		case '2':
			strcat(hex,"0010");
		    break;
		case '3':
			strcat(hex,"0011");
			break;
		case '4':
			strcat(hex,"0100");
			break;
		case '5':
			strcat(hex,"0101");
			break;
		case '6':
			strcat(hex,"0110");
			break;
		case '7':
			strcat(hex,"0111");
			break;
		case '8':
			strcat(hex,"1000");
		    break;
		case '9':
			strcat(hex,"1001");
			break;
		case 'a':
			strcat(hex,"1010");
			break;
		case 'A':
			strcat(hex,"1010");
			break;
		case 'B':
			strcat(hex,"1011");
			break;
		case 'b':
			strcat(hex,"1011");
			break;
		case 'c':
			strcat(hex,"1100");
			break;
		case 'C':
			strcat(hex,"1100");
			break;
		case 'D':
			strcat(hex,"1101");
			break;
		case 'd':
			strcat(hex,"1101");
			break;
		case 'e':
			strcat(hex,"1110");
			break;
		case 'E':
			strcat(hex,"1110");
			break;
		case 'f':
			strcat(hex,"1111");
			break;
		case 'F':
			strcat(hex,"1111");
			break;
		default:
			printf("not hexadecimal");	
	}
    
	printf("the binary digit %s",hex);  
    
	return 0;
}
