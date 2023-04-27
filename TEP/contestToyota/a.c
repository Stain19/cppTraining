#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int o = 0;
    int x = 1;

    

    for( int i = 0; i<n ; i++){
        if((int)(s[i]) == 120){printf("No");return 0;}else{
            if (!((int)(s[i]) ^111)){o = 1;}
        }
    }

    if(o){
        printf("Yes");
    }
    
    return 0;
}