#include<stdio.h>
#include<string.h>

typedef struct{
    char *en;
    char *ch;
}Dictionary;

int main(){
    Dictionary dictionary[] = {
        {"dog", "狗"}, {"cat", "貓"}, {"duck", "鴨"}, {"cow", "牛"}, {"fox", "狐"}
    };
    int size = sizeof(dictionary) / sizeof(Dictionary);
    char input[51];
    scanf("%s", input);
    for(int i = 0 ; i < size ; i++){
        if(strcmp(input, dictionary[i].en) == 0){
            printf("%s", dictionary[i].ch);
            break;
        }
        if(strcmp(input, dictionary[i].ch) == 0){
            printf("%s", dictionary[i].en);
            break;
        }
    }
}