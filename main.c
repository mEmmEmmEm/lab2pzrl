#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func16.h"

int main(){
	/*if(argc < 2){
		printf("error\n");
		return 1;
	}
	if(argc == 4){
	int op1 = 0;
	int num1;
	if(argv[1][0] == '0' && argv[1][1] == 'x'){
		//char* help = strstr(argv[1], "x") + 1;
		num1 = strtoq(argv[1], NULL, 16);
		op1 = 16;
	}
	if(argv[1][0] == '0' && argv[1][1] != 'x'){
		//char* help = strstr(argv[1], "0") + 1;
		num1 = strtoq(argv[1], NULL, 8);
		op1 = 8;
	}
	if(argv[1][0] != '0'){
		//char* help = argv[1];
		num1 = strtoq(argv[1], NULL, 2);
		op1 = 2;
	}
	
	int num2;
	int op2 = 0;
	if(argv[3][0] == '0' && argv[3][1] == 'x'){
		//char* help1 = strstr(argv[3], "x") + 1;
		num2 = strtoq(argv[3], NULL, 16);
		op2 = 16;
	}
	if(argv[3][0] == '0' && argv[3][1] != 'x'){
		//char* help1 = strstr(argv[3], "0") + 1;
		num2 = strtoq(argv[3], NULL, 8);
		op2 = 8;
	}
	if(argv[3][0] != '0'){
		//char* help1 = argv[3];
		num2 =  strtoq(argv[3], NULL, 2);
		op2 = 2;
	}
	//printf("%d", num1 + num2);
	plus(num1, num2, op1, op2);


	}*/
	
	int num1;
	int op1;
	int op2;
	int num2;
	char znak = 0;
	char* str = NULL;
	scanf("%s", &str);
	if(str == NULL) {
		printf("error\n");
		return 1;
	}

	if (str[0] == '~') {
		znak = '~';
		++str;
	}

	if(str[0] == "0" &&  str[1] == "x" ){
		num1 = strtoq(str, NULL, 16);
	       	op1 = 16;	
	}

	if(str[0] == "0" && str[1] != "x"){
		num1 = strtoq(str, NULL, 8);
		op1 = 8;
	}
	if(str[0] != "0" && str[0] != "~"){
		num1 = strtoq(str, NULL, 2);
		op1 = 2;
	}

	if (znak == 0) {
		scanf("%c", &znak);
		char* str1;
		scanf("%s", &str1);
		if(str1[0] == "0" && str[1] == "x"){
			num2 = strtoq(str, NULL, 16);
			op2 = 16;
		}
		if(str1[0] == "0" && str[1] != "x"){
			num2 = strtoq(str, NULL, 8);
			op2 = 8;
		}
		if(str1[0] != "0"){
			num2 = strtoq(str, NULL, 2);
			op2 = 2;
		}
		if(op1 == op2){
			printf("Ошибка: системы счисления не совпадают\n");
			return 1;
		}
		if(znak == "+"){
		
			if(op1 == 16){
				plus16(num1, num2);
			}
			if(op1 == 8){
				plus8(num1, num2);
			}
			if(op1 == 2){
				plus2(num1, num2);
			}	
		}
		if(znak == "-"){
			if(op1 == 16){
				df16(num1, num2);
			}
			if(op1 == 8){
				df8(num1, num2);
			}
			if(op1 == 2){
				df2(num1, num2);
			}

		}
		if(znak == "*"){
			if(op1 == 16){
				mp16(num1, num2);
			}
			if(op1 == 8){
				mp8(num1, num2);
			}
			if(op1 == 2){
				mp2(num1, num2);
			}
		}
		if(znak == "%"){
			if(op1 == 16){
				pros16(num1, num2);
			}
			if(op1 == 8){
				pros8(num1, num2);
			}
			if(op1 == 2){
				pros2(num1, num2);
			}
		}
		if(znak == "&"){
			if(op1 == 16){
				a_nd16(num1, num2);
			}
			if(op1 == 8){
				a_nd8(num1, num2);
			}
			if(op1 == 2){
				a_nd2(num1, num2);
			}
		}

		if(znak == "|"){

			if(op1 == 16){
				o_r16(num1, num2);
			}
			if(op1 == 8){
				o_r8(num1, num2);
			}
			if(op1 == 2){
				o_r2(num1, num2);
			}
		}
		if(znak == "^"){
			if(op1 == 16){
				x_or16(num1, num2);
			}
			if(op1 == 8){
				x_or8(num1, num2);
			}
			if(op1 == 2){
				x_or2(num1, num2);
			}
		}



	}
	else{
		if(op1 == 16){
			inver16(num1);
		}
		if(op1 == 8){
			inver8(num1);
		}
		if(op1 == 2){
			inver2(num1);
		}
	}

	
	return 0;
}
