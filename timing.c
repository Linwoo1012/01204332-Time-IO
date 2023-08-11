#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    clock_t start2, end2;

    //run io
    start = clock();
    for(long i = 0; i < 100000; i++){
        printf(" ");
    }
    end = clock();
    
    //dont run io
    int a = 0;
    start2 = clock();
    for(long i = 0; i < 100000; i++){
        a++;
    }
    end2 = clock();
    
    printf("\nTime(I/O)\t: %lf s\n", (double)(end - start)/CLOCKS_PER_SEC);
    printf("Time(no I/O)\t: %lf s\n", (double)(end2 - start2)/CLOCKS_PER_SEC);
}