/*************************************************************************
	> File Name: first_word_upchar.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 10 Apr 2015 04:06:40 PM CST
 ************************************************************************/

#include<stdio.h>

void change_word_first_char(char *word){
    char *b;
    for(b = word; *b != '\0'; ++b){
        if((*b >= 97) && (*b <= 122) && (b == word) || (*(b-1) == ' ')){
            *b -= 32;
        }
    }
}

int main(){
    char a[] = "How are you?";
    change_word_first_char(a);
    printf("%s\n", a);
    return 0;
}
