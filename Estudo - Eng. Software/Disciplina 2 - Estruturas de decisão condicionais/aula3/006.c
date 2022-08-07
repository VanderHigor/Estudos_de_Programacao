# include <stdio.h>

int main(){
    
    for(int i = 0; i <= 30; i++){
        if(i % 2 == 1){
            continue;
        }
        printf("\n %d", i);
    }
    return 0;
}