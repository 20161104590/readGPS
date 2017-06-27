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
    char h[3],m[3],s[3],d[3],t[3],y[3];
    char a[3],b[8],c[4],e[3];
    char speed[6],dir[6];
    char lat1[9],longitude1[10],sate[3],height[5];
    int i;
    fr=fopen("//Users//a20161104590//Desktop//readGPS//GPS170510.log","r+");
    fw=fopen("//Users//a20161104590//Desktop//readGPS//readGPS//output","w");
    while(fscanf(fr,"%s%s",str1,str2)!=EOF)
    {
        for(i=0;i<2;i++)
            h[i]=str1[i+7];
        h[2]='\0';
        for(i=0;i<2;i++)
            m[i]=str1[i+9];
        m[2]='\0';
        for(i=0;i<2;i++)
            s[i]=str1[i+11];
        s[2]='\0';
    printf("GPRMC格式 时间:%s时%s分%s秒",h,m,s);
    fprintf(fw,"GPRMC格式 时间:%s时%s分%s秒",h,m,s);
        for(i=0;i<2;i++)
            a[i]=str1[i+];
        a[2]='\0';
        for(i=0;i<7;i++)
            b[i]=str1[i+29];
        b[7]='\0';
    printf(" 纬度:%s度%s分",a,b);
    fprintf(fw," 纬度:%s度%s分",a,b);
        for(i=0;i<3;i++)
            c[i]=str1[i+39];
        c[3]='\0';
        for(i=0;i<2;i++)
            e[i]=str1[i+42];
        e[2]='\0';
    printf(" 经度:%s度%s分",c,e);
    fprintf(fw," 经度:%s度%s分",c,e);
    for(i=0;i<5;i++)
        speed[i]=str1[i+39];
    speed[5]='\0';
    printf(" 速度:%s",speed);
    fprintf(fw," 速度:%s",speed);
    for(i=0;i<5;i++)
        dir[i]=str1[i+45];
    dir[5]='\0';
    printf(" 方向:%s",dir);
    fprintf(fw," 方向:%s",dir);
        for(i=0;i<2;i++)
            y[i]=str1[i+51];
        h[2]='\0';
        for(i=0;i<2;i++)
            t[i]=str1[i+53];
        m[2]='\0';
        for(i=0;i<2;i++)
            d[i]=str1[i+55];
        s[2]='\0';
    printf(" 日期:%s年%s月%s日\n",d,t,y);
    fprintf(fw," 日期:%s年%s月%s日\n",d,t,y);
        for(i=0;i<2;i++)
            h[i]=str1[i+7];
        h[2]='\0';
        for(i=0;i<2;i++)
            m[i]=str1[i+9];
        m[2]='\0';
        for(i=0;i<2;i++)
            s[i]=str1[i+11];
        s[2]='\0';
    printf("GPGGA格式 时间:%s时%s分%s秒",h,m,s);
    fprintf(fw,"GPGGA格式 时间:%s时%s分%s秒",h,m,s);
        for(i=0;i<2;i++)
            a[i]=str1[i+27];
        a[2]='\0';
        for(i=0;i<7;i++)
            b[i]=str1[i+29];
        b[7]='\0';
    printf(" 纬度:%s度%s分",a,b);
    fprintf(fw," 纬度:%s度%s分",a,b);
    for(i=0;i<9;i++)
        longitude1[i]=str2[i+25];
    longitude1[9]='\0';
    printf(" 经度:%s",longitude1);
    fprintf(fw," 经度:%s",longitude1);
    for(i=0;i<2;i++)
        sate[i]=str2[i+39];
    sate[2]='\0';
    printf(" 卫星个数:%s",sate);
    fprintf(fw," 卫星个数:%s",sate);
    for(i=0;i<4;i++)
        height[i]=str2[i+43];
    height[4]='\0';
    printf(" 海拔高度:%s\n\n",height);
    fprintf(fw," 海拔高度:%s\n\n",height);
    }
    
    fclose(fr);
    return 0;
}
