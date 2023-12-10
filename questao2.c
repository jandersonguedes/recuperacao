#include <stdio.h>
 
int main() {
 
    double price[5] = {4,4.5,5,2,1.5};
    int code;
    int amount;
    double result;
    
    scanf("%d %d",&code,&amount);
    
    int i;
    for(i=0;i<5;i++){
        if(code==(i+1)){
            result = price[i]*amount;
            printf("Total: R$ %.2lf\n",result);
        }
    }
 
    return 0;
}
