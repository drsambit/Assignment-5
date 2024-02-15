#include <stdio.h>

int main (){
    int n,s=0;
    printf("Provide the number");
    scanf("%d",&n);
    if(n%2==0){
        s=s+n;
    }
    
   
    
    while(1){
        printf("\nDo you want to continue");
        char ch;
        
        
        scanf(" %c",&ch);
        if(ch=='Y'||ch=='y'){
            printf("Enter a number");
            scanf("%d",&n);
            printf("%d",n);
            if(n%2!=0){
                continue;
            }
            s=s+n;
        }
        else if (ch=='n'||ch=='N'){
            break;
        }
        else{
            printf("Invalid Input");
            
        }
    }
    printf("sum=%d",s);
    return 0;
    
    
}