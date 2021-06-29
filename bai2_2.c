#include<stdio.h>
#include<stdlib.h>

int main(){
    int t, a, b, n, arr[1002];
    scanf("%d", &t);
    for(int index=1; index<=t; ++index){
        scanf("%d%d%d", &a, &b, &n);
        a = abs(a);
        b = abs(b);
        if((n-a-b>=0) && ((n-a-b) % 2 == 0)){
            arr[index] = 1;
        } else {
            arr[index] = 0;
        }
    };
    for(int index=1; index<=t; ++index){
        if(arr[index] == 1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
