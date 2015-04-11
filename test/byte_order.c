/*************************************************************************
	> File Name: byte_order.c
	> Author: 
	> Mail: 
	> Created Time: Sat 11 Apr 2015 01:29:29 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int i = 0x12345678;
    if(*(char*)&i == 0x12){
        printf("big endition\n");
    }else{
        printf("little endition\n");
    }
}
