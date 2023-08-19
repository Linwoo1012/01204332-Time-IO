#include <stdio.h>
#include <time.h>

void run_io(){
    for(long i = 0; i < 100000; i++){
        printf("");
    }
}

void dont_run_io(){
    int a = 0;
    for(long i = 0; i < 100000; i++){
        a++;
    }
}

int main(){
    clock_t start, end;
    clock_t start2, end2;

    //run io
    start = clock();
    run_io();
    end = clock();
    
    //dont run io
    start2 = clock();
    dont_run_io();
    end2 = clock();
    
    printf("\nTime(I/O)\t: %lf s\n", (double)(end - start)/CLOCKS_PER_SEC);
    printf("Time(no I/O)\t: %lf s\n", (double)(end2 - start2)/CLOCKS_PER_SEC);
}