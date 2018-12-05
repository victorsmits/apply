#include <stdio.h>
#include <stdbool.h>

int apply(char *str, bool (*check) (char));
bool check(char def);
int size(char *s);

int main() {
    printf("%d\n",apply("AAABBBaaabbb", check));
}

int size(char *s){
    int size = 0;
    while (*s ++ != '\0')
        size ++;
    return size ;
}

bool check(char def){
    if (def == 'A')
        return true;
    else
        return false;
}

int apply(char *str, bool (*check) (char)){
    int N = size(str)+1;
    int i;
    int count = 0;
    for(i = 0; i< N; i++){
        if(check(str[i])){
            count ++;
        }
    }
    return count;
}