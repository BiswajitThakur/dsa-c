#include <stdio.h>
#include <assert.h>

#define ARR_SIZE 8

int linear_search(int arr[], int arr_size, int item){
    int i;
    for (i=0;i<arr_size;i++){
        if(arr[i]==item){
            return i;
        };
    };
    return -1;
}

int main(){
    int arr1[ARR_SIZE] = {47, 6, -50, 8, 100, -43, 66, 77};

    assert(linear_search(arr1, ARR_SIZE, 100) == 4);
    assert(linear_search(arr1, ARR_SIZE, 10) == -1);
    assert(linear_search(arr1, ARR_SIZE, 47) == 0);
    assert(linear_search(arr1, ARR_SIZE, 77) == 7);
    assert(linear_search(arr1, ARR_SIZE, -100) == -1);
    assert(linear_search(arr1, ARR_SIZE, -43) == 5);

    return 0;
}

