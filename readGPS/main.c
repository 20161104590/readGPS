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
    char h[3],m[3],s[3],d[3],t[3],y[3];//时，分，秒，年，月，日
    char a[3],b[8],c[4],e[8],n[3],hei[5];     //纬度，纬分，经度，经分,卫星个数
    char speed[6],dir[6];              //速度，方向
    int i;
    fr=fopen("//Users//a20161104590//Desktop//readGPS//GPS170510.log","r+");
    fw=fopen("//Users//a20161104590//Desktop//readGPS//readGPS//output.csv","w");
    fprintf(fw,"时间,   纬度,    经度,     速度／卫星个数,    方向／海拔,    日期\n");
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
    printf("GPRMC格式 %s时%s分%s秒",h,m,s);
    fprintf(fw,"GPRMC格式 %s时%s分%s秒,",h,m,s);
        for(i=0;i<2;i++)
            a[i]=str1[i+16];
        a[2]='\0';
        for(i=0;i<6;i++)
            b[i]=str1[i+18];
        b[6]='\0';
    printf(" %s度%s分",a,b);
    fprintf(fw," %s度%s分,",a,b);
        for(i=0;i<3;i++)
            c[i]=str1[i+27];
        c[3]='\0';
        for(i=0;i<7;i++)
            e[i]=str1[i+29];
        e[7]='\0';
    printf(" %s度%s分",c,e);
    fprintf(fw," %s度%s分,",c,e);
    for(i=0;i<5;i++)
        speed[i]=str1[i+39];
    speed[5]='\0';
    printf(" %s",speed);
    fprintf(fw," %s米／秒,",speed);
    for(i=0;i<5;i++)
        dir[i]=str1[i+45];
    dir[5]='\0';
    printf(" %s",dir);
    fprintf(fw," %s,",dir);
        for(i=0;i<2;i++)
            y[i]=str1[i+51];
        h[2]='\0';
        for(i=0;i<2;i++)
            t[i]=str1[i+53];
        m[2]='\0';
        for(i=0;i<2;i++)
            d[i]=str1[i+55];
        s[2]='\0';
    printf(" %s年%s月%s日\n",d,t,y);
    fprintf(fw," %s年%s月%s日,\n",d,t,y);
        for(i=0;i<2;i++)
            h[i]=str1[i+7];
        h[2]='\0';
        for(i=0;i<2;i++)
            m[i]=str1[i+9];
        m[2]='\0';
        for(i=0;i<2;i++)
            s[i]=str1[i+11];
        s[2]='\0';
    printf("GPGGA格式 %s时%s分%s秒",h,m,s);
    fprintf(fw,"GPGGA格式 %s时%s分%s秒,",h,m,s);
        for(i=0;i<2;i++)
            a[i]=str1[i+16];
        a[2]='\0';
        for(i=0;i<6;i++)
            b[i]=str1[i+18];
        b[6]='\0';
    printf(" %s度%s分",a,b);
    fprintf(fw," %s度%s分,",a,b);
        for(i=0;i<3;i++)
            a[i]=str1[i+27];
        c[3]='\0';
        for(i=0;i<7;i++)
            b[i]=str1[i+29];
        e[7]='\0';
        printf(" %s度%s分",c,e);
        fprintf(fw," %s度%s分,",c,e);
    for(i=0;i<2;i++)
        n[i]=str2[i+39];
    n[2]='\0';
    printf(" %s",n);
    fprintf(fw," %s个,",n);
    for(i=0;i<4;i++)
        hei[i]=str2[i+43];
    hei[4]='\0';
    printf(" %s米\n\n",hei);
    fprintf(fw," %s米,\n\n",hei);
    }
    
    fclose(fr);
    return 0;
}
