#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int copyn = n;
    scanf("%d", &n);
    int n1, m;
    int list[100];
    int count = 0;
    while(1){
        n1 = n % 10;
        list[count] = n1;
        n = n / 10;
        count++;
        if(n % 10 == 0){
            break;
        }
    }
    if(count == 0){
        printf("0");
    }
    else{
        int min = copyn;
        int sum = copyn;
        for(int i = 0; i < copyn; i++){
            m = i;
            for(int j = 0; j < count; j++){
                sum += list[count];
            }
            if(copyn == sum & m < min){
                min = m;
            }
        }
        m = min;
    }
    printf("%d", m);
}
