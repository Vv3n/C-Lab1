#include <stdio.h>

int GetSet(int **arr);

int main(){
    int *data, num;
    num = GetSet(&data);

    printf("You enter: ");
    for(int i = 0; i < num; i++){
        printf("%d ", data[i]);
    }
    return 0;
}

int GetSet(int **arr){
    int Unum;
    static int Sarr[10];

    printf("Enter number of your element: ");
    scanf("%d",&Unum);

    for(int i = 0; i < Unum; i++){
        printf("Enter your %d numbers: ", i+1);
        scanf("%d", &Sarr[i]);
    }

    *arr = Sarr;
    return Unum;
}