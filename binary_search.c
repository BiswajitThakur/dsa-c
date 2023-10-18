#include <stdio.h>
#include <assert.h>

#define ARR_SIZE 10

int binary_search(int arr[], int arr_size, int item){
    int beg = 0;
    int end = arr_size - 1;
    int mid = (beg + end)/2;
    while((beg <= end) && (arr[mid] != item)){
        if(item<arr[mid]){
            end = mid-1;
        } else {
            beg = mid+1;
        };
        mid = (beg + end)/2;
    };
    if (beg > end){
        return -1;
    };
    return mid;
}

int main(){
    int arr[ARR_SIZE] = {-56, -21, 0, 4, 10, 23, 25, 100, 234, 300};

    assert(binary_search(arr, ARR_SIZE, -56) == 0);
    assert(binary_search(arr, ARR_SIZE, -21) == 1);
    assert(binary_search(arr, ARR_SIZE, 0) == 2);
    assert(binary_search(arr, ARR_SIZE, 4) == 3);
    assert(binary_search(arr, ARR_SIZE, 10) == 4);
    assert(binary_search(arr, ARR_SIZE, 23) == 5);
    assert(binary_search(arr, ARR_SIZE, 25) == 6);
    assert(binary_search(arr, ARR_SIZE, 100) == 7);
    assert(binary_search(arr, ARR_SIZE, 234) == 8);
    assert(binary_search(arr, ARR_SIZE, 300) == 9);
    assert(binary_search(arr, ARR_SIZE, -55) == -1);
    assert(binary_search(arr, ARR_SIZE, -50) == -1);
    assert(binary_search(arr, ARR_SIZE, -560) == -1);
    assert(binary_search(arr, ARR_SIZE, 1000) == -1);
    assert(binary_search(arr, ARR_SIZE, 33) == -1);

    return 0;
}