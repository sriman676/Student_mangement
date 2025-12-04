// 8 queen coordinates - print specific attacking positions

#include <stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(i == r || j == c || (i - j) == (r - c) || (i + j) == (r + c)){
                printf("1 ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    return 0;
}