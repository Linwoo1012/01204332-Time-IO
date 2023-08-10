#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    char ch;
    printf("Run I/O(y/n)? ");
    scanf("%c", &ch);
    start = clock();
    if(ch == 'y'){
        for(long i = 0; i < 100000000; i++){
            printf("");
        }
    }
    else{
        for(long i = 0; i < 100000000; i++){
            ;
        }
    }
    end = clock();
    printf("Time: %lf s\n", (double)(end - start)/CLOCKS_PER_SEC);
}