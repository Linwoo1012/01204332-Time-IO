#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    clock_t start2, end2;

    //run io
    start = clock();
    for(long i = 0; i < 100; i++){
        printf(".");
    }
    end = clock();
    printf("\nTime(I/O)\t: %lf s\n", (double)(end - start)/CLOCKS_PER_SEC);

    //dont run io
    start2 = clock();
    for(long i = 0; i < 100; i++){
        ;
    }
    end2 = clock();
    printf("Time(no I/O)\t: %lf s\n", (double)(end2 - start2)/CLOCKS_PER_SEC);
}