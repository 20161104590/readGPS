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
    char lat[9],time[7],date[7];
    int i;
    fr=fopen("//Users//a20161104590//Desktop//readGPS//GPS170510.log","r+");
    fw=fopen("//Users//a20161104590//Desktop//readGPS//readGPS//output","w");
    fscanf(fr,"%s%s",str1,str2);
    for(i=0;i<6;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    printf("时间：%s\n",time);
    fprintf(fw,"时间：%s\n",time);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("纬度：%s\n",lat);
    fprintf(fw,"纬度：%s\n",lat);
    for(i=0;i<6;i++)
        date[i]=str1[i+51];
    date[6]='\0';
    printf("日期：%s\n",date);
    fprintf(fw,"日期：%s\n",date);
    fclose(fr);
    return 0;
}
