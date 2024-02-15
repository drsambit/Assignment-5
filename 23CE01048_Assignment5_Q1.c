#include <stdio.h>
int main (){
    int n,c,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    int m=n;
    
    while(n>0){
        int d=n%10;
        c++;
        n=n/10;
        
    }
    int a[c];
    for (int i=0;i<c;i++){
        a[i]=m%10;
        m=m/10;
    }
    for (int i=0;i<c;i++){
        for (int j=i+1;j<c;j++){
            if (a[i]==a[j]){
                a[j]=0;
            }
        }
        s=s+a[i];
    }
    printf("The sum is %d",s);
    printf("The number of digits is %d",c);
    return 0;


    
}