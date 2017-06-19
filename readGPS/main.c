//
//  main.c
//  readGPS
//
//  Created by 20161104590 on 2017/6/16.
//  Copyright © 2017年 20161104590. All rights reserved.
//

#include <stdio.h>
#define N 2
typedef
struct {
    char name[6];
    int time;
    char a[1];
    int latitude;
    char b[1];
    int longitude;
    char c[1];
    int rate;
    int course;
    int date;
    char d[3];
} gps;
void savegps(gps [],char *);
void readgps(char *);
int main(int argc, const char * argv[]) {
    int i;
    gps gps1[N];
    for(i=0;i<N;i++)
    {
        printf("输入第%d个gps的名字:",i+1);
        gets(gps1[i].name);
        printf("输入第%d个gps的UTC时间:",i+1);
        scanf("%d",&gps1[i].time);
        printf("输入第%d个gps的定位状态:",i+1);
        scanf("%s",gps1[i].a);
        printf("输入第%d个gps的纬度:",i+1);
        scanf("%d",&gps1[i].latitude);
        printf("输入第%d个gps的纬度半球:",i+1);
        scanf("%s",gps1[i].b);
        printf("输入第%d个gps的经度:",i+1);
        scanf("%d",&gps1[i].longitude);
        printf("输入第%d个gps的经度半球:",i+1);
        scanf("%s",gps1[i].c);
        printf("输入第%d个gps的地面速率:",i+1);
        scanf("%d",&gps1[i].rate);
        printf("输入第%d个gps的地面航向:",i+1);
        scanf("%d",&gps1[i].course);
        printf("输入第%d个gps的UTC日期:",i+1);
        scanf("%d",&gps1[i].date);
        printf("输入第%d个gps的异或和:",i+1);
        scanf("%s",gps1[i].d);
        getchar();
    }
    savegps(gps1,);
