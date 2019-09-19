//
//  main.c
//  boj13460_구슬탈출
//
//  Created by 이영현 on 2019/09/04.
//  Copyright © 2019 이영현. All rights reserved.
//

#include <stdio.h>

int

int main(int argc, const char * argv[]) {
    int N,M;
    char temp;
    scanf("%d%d",&N,&M);
    
    int Matrix[N][M];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%c",&temp);
            Matrix[i][j]=temp;
        }
    }
    
    
    
    return 0;
}
