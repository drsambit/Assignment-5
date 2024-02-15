#include<stdio.h>
int main (){
    int a,arr[4];
    printf("ENTER A 4 DIGIT NUMBER :");
    scanf("%d",&a);
    int p=a,new;
    for( int i=0;i<=3;i++){
        arr[i]=a%10;
        a=a/10;
    }
        int brr[24];
        int swas=0;
        for (int j=0;j<=3;j++){
            for (int k=0;k<=3;k++){
                for (int l=0;l<=3;l++){
                    for (int m=0;m<=3;m++){
                        if (m!=l&&m!=k&&m!=j&&l!=k&&l!=j&&k!=j){
                        brr[swas]=(10*10*10)*arr[j]+(10*10)*arr[k]+10*arr[l]+arr[m];
                        swas++;
                    }
                }
            }
        }
        }
        for(int i=0;i<=23;i++){
            if (brr[i]>=10000||brr[i]<=999) brr[i]=0;
            for(int j=i+1;j<=23;j++){
                if (brr[i]==brr[j]) brr[j]=0;
            }
        }
         for (int i=0;i<=23;i++){
         if (brr[i]!=0) printf("%d\t",brr[i]);
        }

    return 0;
}