//
//  main.c
//  C(Practise)
//
//  Created by Warron Yiang on 23/07/2020.
//  Copyright © 2020 Warron Yiang. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void show(int *a,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",*(a + i));
    }
    return;
}

int abs(int a)
{
    return a > 0 ? a : -a;
}
int main(int argc, const char * argv[]) {
    int test = 0;
    scanf("%d",&test);
    int dp[100000] = {0};
    int index = 1;
    dp[0] = 1;
    int rcd = test;
    int find = rcd;
    test /= 10;
    test += 1;
    int ten = 10;
    while(test != 0)
    {
        dp[index] = dp[index - 1] + (ten) + (dp[index -1] * 8);
        test /= 10;
        ten *= 10;
        index += 1;
    }
    index -= 2;
    // make dp
    ten /= 10;
    int ans = 0;
    bool four = false;
    while(rcd / 10 != 0)
    {
        if(rcd / ten > 4)
            ans += (((rcd / ten) - 1) * dp[index] ) + ten ;
        else if(rcd / ten < 4)
            ans += (rcd/ten)*dp[index];
        else
        {
            four = true;
            ans += (rcd/ten)*dp[index] + (rcd % ten);
            break;
        }
        rcd %= ten;
        ten /= 10;
        index -= 1;
    }
    if(!four)
        ans += rcd > 4? 1 : 0;
    printf("%d\n",ans);
    printf("%d",find + ans);
    return 0;
}

