#include <stdio.h>
int main(){
    int a,b,i=0;
    printf("Enter dividend");
    scanf("%d",&a);
    printf("Enter divisor");
    scanf("%d",&b);
    a=a-b;
    for (i=1;a>0;i++){
        if ((a-b)<0){
            break;
        }
        a=a-b;
    }
    printf("Quotient=%d\n",i);
    printf("Remainder=%d",a);
    return 0;

}