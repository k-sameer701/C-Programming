#include <stdio.h>

int main(){

    int start, i, j;
    printf("Enter the starting number: ");
    scanf("%d", &start);

    int end;
    printf("Enter the ending number: ");
    scanf("%d", &end);

    int count = 0;
    for(i=start+1; i<=end-1; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                ;
                break;
            }
            
        }
        if(j==i){
            printf("%d ",i);
            
        }
        
    
    }
    printf("%d", count)  ;
}