/* 
題目名稱:作業6
製作:呂家明 
修改/完成日期:2019/4/7
*/

#include<stdio.h>
#include<stdlib.h>

bool isIdentify(char[]);    //副函式

int  translate(char);       //副函式

int main(void){
	char id[10];              //輸入身分證字號
	printf("請輸入身分證字號:");
	scanf("%s",&id);
	if(isIdentify(id)==true){ //判斷是否為正確的身分證字號
		printf("符合身分字號格式\n");
	}
	else{
		printf("不符合身分字號格式\n");
	}
	system("pause");

}
bool isIdentify(char id[]){
	int id_int[10];           //身分證字號
	int sum,i;
	int j=8;
	for(i=0;i<10;i++){
		id_int[i]=translate(id[i]);
	}
	sum=(id_int[0]/10)+((id_int[0]%10)*9);
	for(i=1;i<9;i++){
		sum+=id_int[i]*j;
		j--;
	}
	sum+=id_int[9];
	//printf("%d\n",sum);
	if(sum%10==0){
		return true;
	}
	else{
		return false;
	}

}
int translate(char x){   //將字串轉換成數字
	switch(x){
    case 'A':
       return 10;
       break;
    case 'B':
       return 11;
       break;
    case 'C':
       return 12;
       break;
    case 'D':
       return 13;
       break;
    case 'E':
       return 14;
       break;
    case 'F':
       return 15;
       break;
    case 'G':
       return 16;
       break;
    case 'H':
       return 17;
       break;
    case 'I':
       return 34;
       break;
    case 'J':
       return 18;
       break;
    case 'K':
       return 19;
       break;
    case 'L':
       return 20;
       break;
    case 'M':
       return 21;
       break;
    case 'N':
       return 22;
       break;
    case 'O':
       return 35;
       break;
    case 'P':
       return 23;
       break;
    case 'Q':
       return 24;
       break;
    case 'R':
       return 25;
       break;
    case 'S':
       return 26;
       break;
    case 'T':
       return 27;
       break;
    case 'U':
       return 28;
       break;
    case 'V':
       return 29;
       break;
    case 'W':
       return 32;
       break;
    case 'X':
       return 30;
       break;
    case 'Y':
       return 31;
       break;
    case 'Z':
       return 33;
       break;
    case '0':
       return 0;
       break;
    case '1':
       return 1;
       break;
    case '2':
       return 2;
       break;
    case '3':
       return 3;
       break;
    case '4':
       return 4;
       break;
    case '5':
       return 5;
       break;
    case '6':
       return 6;
       break;
    case '7':
       return 7;
       break;
    case '8':
       return 8;
       break;
    case '9':
       return 9;
       break;

  }

}

