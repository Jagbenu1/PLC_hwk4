#include <iostream>
#include <time.h>
using namespace std;

void stack_dynamic_array();
void static_array();
void explicit_heap_dynamic_array();

void stack_dynamic_array(){
    int stack_dynamic_array[1000];
}

void static_array(){
    static int static_array[1000];
}

void explicit_heap_dynamic_array(){
    int *explicit_heap_dynamic_array[1000];
}

int main(){
    clock_t start1;
    clock_t start2;
    clock_t start3;
    double dur1;
    double dur2;
    double dur3;

    //timer
    start1 = clock();
        for(int i = 0; i < 200000;i++){
            stack_dynamic_array();
        }
    dur1 = (clock() - start1) / (double) CLOCKS_PER_SEC;
    //stop timer
    cout<<"Time for stack: "<< dur1 << '\n';
    //print time
    

    //timer
    start2 = clock();
        for(int i = 0; i < 100000;i++){
            static_array();
        }
    
    dur2 = (clock() - start2) / (double) CLOCKS_PER_SEC;
    //stop timer
    cout<<"Time for static: "<< dur2 << '\n';
    //print time
    
    //timer
    start3 = clock();
        for(int i = 0; i < 100000;i++){
            explicit_heap_dynamic_array();
        }
    dur3 = (clock() - start3) / (double) CLOCKS_PER_SEC;
    //stop timer
    cout<<"Time for heap: "<< dur3 << '\n';
    //print time
    return 0;
}





