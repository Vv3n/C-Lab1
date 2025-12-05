#include <stdio.h>
#include <stdlib.h>

int *GetSet( int *num);
int main(){
    int *data, num;
    data = GetSet(&num);
    for(int i = 0; i < num; i++){
        printf("%d ", data[i]);
    }
    return 0;
}
int *GetSet( int *num){
    static int arr[100];
    printf("Enter number of elements: ");\
    if(scanf("%d", num) != 1){
        printf("No number Goodby!");
        return 0;
    }
    for(int i = 0; i < *num; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    return arr;
}
