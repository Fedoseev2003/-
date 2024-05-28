#include <stdio.h>
#include "lr.h"
int main() {
    int n,z;
    printf("What is the laboratory number?");
    scanf("%d",&n);
    if (n==1) {
        printf("(1) Main task or (2) additional task?\n");
        scanf("%d",&z);
        if (z==1){
            lr1();
        }
        else{
            lr1dop();
        }
    }
    if (n==2) {
        printf("(1) Main task or (2) additional task?\n");
        scanf("%d",&z);
        if (z==1){
            lr2();
        }
        else{
            lr2dop();
        }
    }
    if (n==3) {
        printf("(1) Main task or (2) additional task?\n");
        scanf("%d",&z);
        if (z==1){
            lr3();
        }
        else{
            lr3dop();
        }
    }
    if (n==4) {
        printf("(1) Main task or (2) additional task?\n");
        scanf("%d",&z);
        if (z==1){
            lr4();
        }
        else{
            lr4dop();
        }
    }
    if (n==5) {
        printf("(1) Main task or (2) additional task?\n");
        scanf("%d",&z);
        if (z==1){
            lr5();
        }
        else{
            lr5dop();
        }
    }
    if (n==6) {
        printf("(1) Main task or (2) additional task?\n");
        scanf("%d",&z);
        if (z==1){
            lr6();
        }
        else{
            lr6dop();
        }
    }
    if (n==7) {
            lr7();
    }
    return 0;
}
