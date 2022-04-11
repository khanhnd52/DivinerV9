#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>	//.h được gọi là LIBRARY - THƯ VIỆN/NƠI CHỨA
					//NHIỀU ĐỒ CHƠI DÙNG CHUNG, XÀI LẠI NHIỀU LẦN

int main(int argc, char *argv[]) {
	
	char fL;
	printf("Welcome to ACER diviner.\n");
	printf("You are required to input the 1st letter in your firstname.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char:");
	scanf("%c", &fL); 	//kệ mẹ ko care hoa thường
						
	
	/*
	if(fL == 'A')
		printf("Dua cot ko phai la so truong cua ban...\n");
	else if(fL == 'B')
		printf("Ban nang gioi tinh rat tu nhien...\n");
	else if(fL == 'C')
		printf("Tinh cam cua ban gan gui than mat...\n");
	else
		printf("Coming soon...\n"); 
	*/
	switch(fL)
	{
		case 'A' :
		case 'a' :
			printf("Dua cot ko phai la so truong cua ban...\n");
			break;		
		case 'B' :
		case 'b' :
			printf("Ban nang gioi tinh rat tu nhien...\n");
			break;			
		case 'C' :
		case 'c' :
			printf("Tinh cam cua ban gan gui than mat...\n");
			break;			
		case 'D' :
		case 'd' :
			printf("Tinh cam cua ban nong nan manh liet...\n");
			break;			
		default:
			printf("Coming soon...\n");
	}
	
	return 0; 
}