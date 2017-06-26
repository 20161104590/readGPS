//
//  main.c
//  readGPS
//
//  Created by 20161104590 on 2017/6/16.
//  Copyright © 2017年 20161104590. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    // insert code here...
    FILE *fr;
    FILE *fw;
    char str1[70];
    char str2[70];
    char time[7],lat[9],longitude[10],speed[6],dir[6],date[7];
    char time1[7],lat1[9],longitude1[10],sate[3],height[5];
    int i;
    fr=fopen("//Users//a20161104590//Desktop//readGPS//GPS170510.log","r+");
    fw=fopen("//Users//a20161104590//Desktop//readGPS//readGPS//output","w");
    fscanf(fr,"%s%s",str1,str2);
    for(i=0;i<6;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    printf("GPRMC 时间：%s",time);
    fprintf(fw,"GPRMC 时间：%s",time);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf(" 纬度：%s",lat);
    fprintf(fw," 纬度：%s",lat);
    for(i=0;i<9;i++)
        longitude[i]=str1[i+27];
    longitude[9]='\0';
    printf(" 经度：%s",longitude);
    fprintf(fw," 经度：%s",longitude);
    for(i=0;i<5;i++)
        speed[i]=str1[i+39];
    speed[5]='\0';
    printf(" 速度：%s",speed);
    fprintf(fw," 速度：%s",speed);
    for(i=0;i<5;i++)
        dir[i]=str1[i+45];
    dir[5]='\0';
    printf(" 方向：%s",dir);
    fprintf(fw," 方向：%s",dir);
    for(i=0;i<6;i++)
        date[i]=str1[i+51];
    date[6]='\0';
    printf(" 日期：%s\n",date);
    fprintf(fw," 日期：%s\n",date);
    for(i=0;i<6;i++)
        time1[i]=str2[i+7];
    time1[6]='\0';
    printf("GPGGA 时间：%s",time1);
    fprintf(fw,"GPGGA 时间：%s",time1);
    for(i=0;i<8;i++)
        lat1[i]=str2[i+14];
    lat1[8]='\0';
    printf(" 纬度：%s",lat1);
    fprintf(fw," 纬度：%s",lat1);
    for(i=0;i<9;i++)
        longitude1[i]=str1[i+27];
    longitude1[9]='\0';
    printf(" 经度：%s",longitude1);
    fprintf(fw," 经度：%s",longitude1);
    for(i=0;i<2;i++)
        sate[i]=str2[i+39];
    sate[2]='\0';
    printf(" 卫星个数：%s",sate);
    fprintf(fw," 卫星个数：%s",sate);
    for(i=0;i<4;i++)
        height[i]=str2[i+43];
    height[4]='\0';
    printf(" 海拔高度：%s\n",height);
    fprintf(fw," 海拔高度：%s\n",height);
    
    
    fclose(fr);
    return 0;
}
