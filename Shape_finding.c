/*SHAPE FINDING CODE*/
//Author: Vishal Kumar Vasnani
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 150

int side1=0;
int side2=0;
int side3=0;
int side4=0;
static int p;

char a[MAX][MAX];
char b[MAX][MAX];
int main()
{
    FILE *fp;
    int i,j,flag=0,ch,n;
    fp=fopen("Original.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open File!\n");
        exit(1);
    }
    srand(time(NULL));
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            a[i][j]=rand()%5+1+48;
        }
    }
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            fprintf(fp,"%c",a[i][j]);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
    printf("****SHAPE FINDING****\n");
    while(flag==0)
    {
        printf("MENU:\n");
        printf("-------\n");
        printf("1. Rectangle\n");
        printf("2. Square\n");
        printf("3. Line\n");
        printf("4. Arc\n");
        printf("5. Chunk\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: //Rectangle
                    printf("RECTANGLE\nEnter the number(1 to 5): ");
                    L4: scanf("%d",&n);
                    if(n<1 || n>5)
                    {
                        printf("1 to 5 only!\nRe-enter: ");
                        goto L4;
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            b[i][j]=a[i][j];
                        }
                    }
                    rectangle(0,0,n+48);
                    FILE *fr;
                    fr=fopen("Rectangle.txt","w");
                    if(fr==NULL)
                    {
                        printf("Cannot Load File!\n");
                        exit(7);
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            fprintf(fr,"%c",b[i][j]);
                        }
                        fprintf(fr,"\n");
                    }
                    printf("Open Rectangle.txt file in the directory.\n");
                    fclose(fr);
                    printf("\n");
                    break;
            case 2: //Square
                    printf("SQUARE\nEnter the number(1 to 5): ");
                    L3: scanf("%d",&n);
                    if(n<1 || n>5)
                    {
                        printf("1 to 5 only!\nRe-enter: ");
                        goto L3;
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            b[i][j]=a[i][j];
                        }
                    }
                    square(0,0,n+48);
                    FILE *fs;
                    fs=fopen("Square.txt","w");
                    if(fs==NULL)
                    {
                        printf("Cannot Load File!\n");
                        exit(6);
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            fprintf(fs,"%c",b[i][j]);
                        }
                        fprintf(fs,"\n");
                    }
                    printf("Open Square.txt file in the directory.\n");
                    fclose(fs);
                    printf("\n");
                    break;
            case 3: //Line
                    printf("LINE\nEnter the number(1 to 5): ");
                    L: scanf("%d",&n);
                    if(n<1 || n>5)
                    {
                        printf("1 to 5 only!\nRe-enter: -");
                        goto L;
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            b[i][j]=a[i][j];
                        }
                    }
                    line(0,0,n+48);
                    FILE *fl;
                    fl=fopen("Line.txt","w");
                    if(fl==NULL)
                    {
                        printf("Cannot Load File!\n");
                        exit(2);
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            fprintf(fl,"%c",b[i][j]);
                        }
                        fprintf(fl,"\n");
                    }
                    printf("Open Line.txt file in the directory.\n");
                    fclose(fl);
                    printf("\n");
                    break;
            case 4: //Arc
                    printf("ARC\nEnter the number(1 to 5): ");
                    L1: scanf("%d",&n);
                    if(n<1 || n>5)
                    {
                        printf("1 to 5 only!\nRe-enter: ");
                        goto L1;
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            b[i][j]=a[i][j];
                        }
                    }
                    arc(0,0,n+48);
                    FILE *fa;
                    fa=fopen("Arc.txt","w");
                    if(fa==NULL)
                    {
                        printf("Cannot Load File!\n");
                        exit(4);
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            fprintf(fa,"%c",b[i][j]);
                        }
                        fprintf(fa,"\n");
                    }
                    printf("Open Arc.txt file in the directory.\n");
                    fclose(fa);
                    printf("\n");
                    break;
            case 5: //Chunk
                    printf("CHUNK\nEnter the number(1 to 5): ");
                    L2: scanf("%d",&n);
                    if(n<1 || n>5)
                    {
                        printf("1 to 5 only!\nRe-enter: ");
                        goto L2;
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            b[i][j]=a[i][j];
                        }
                    }
                    chunk(0,0,n+48);
                    FILE *fc;
                    fc=fopen("Chunk.txt","w");
                    if(fc==NULL)
                    {
                        printf("Cannot Load File!\n");
                        exit(5);
                    }
                    for(i=0;i<MAX;i++)
                    {
                        for(j=0;j<MAX;j++)
                        {
                            fprintf(fc,"%c",b[i][j]);
                        }
                        fprintf(fc,"\n");
                    }
                    printf("Open Chunk.txt file in the directory.\n");
                    fclose(fc);
                    printf("\n");
                    break;
            case 6: flag=1;
                    break;
            default: printf("No such option!\n");
        }
    }
    return 0;
}

void rectangle(int i,int j,char n)
{
    int m,k,p,q,r,s,t,u;
    for(m=i;m<MAX;m++)
    {
        for(k=j;k<MAX;k++)
        {
            side1=0;
            side2=0;
            side3=0;
            side4=0;
            if(b[m][k]==n)
            {
                if(b[m][k+1])
                {
                    if(b[m+1][k])
                    {
                        if(b[m][k]==b[m][k+1] && b[m][k]==b[m+1][k])
                        {
                            for(p=m;p<MAX;p++)
                            {
                                if(b[p+1][k])
                                {
                                    if(b[p+1][k]==b[m][k])
                                        side1++;
                                    else
                                        break;
                                }
                                else
                                    break;
                            }
                            for(q=k;q<MAX;q++)
                            {
                                if(b[m][q+1])
                                {
                                    if(b[m][k]==b[m][q+1])
                                        side2++;
                                    else
                                        break;
                                }
                                else
                                    break;
                            }
                            for(r=1;r<MAX;r++)
                            {
                                if(b[m+r][q]==b[m][k])
                                    side3++;
                                else
                                    break;
                            }
                            for(s=1;s<MAX;s++)
                            {
                                if(b[p][k+s]==b[m][k])
                                    side4++;
                                else
                                    break;
                            }
                            if(side3==side1 && side4==side2)
                            {
                                for(t=m;t<=p;t++)
                                {
                                    b[t][k]=38;
                                    b[t][k+side2]=38;
                                }
                                for(u=k;u<=q;u++)
                                {
                                    b[m][u]=38;
                                    b[m+side1][u]=38;
                                }
                            }
                        }
                        else
                            continue;
                    }
                }
            }
            else
                continue;
        }
    }
}

void square(int i,int j,char n)
{
    int m,k,p,q,r,s,t,u;
    for(m=i;m<MAX;m++)
    {
        for(k=j;k<MAX;k++)
        {
            side1=0;
            side2=0;
            side3=0;
            side4=0;
            if(b[m][k]==n)
            {
                if(b[m][k+1])
                {
                    if(b[m+1][k])
                    {
                        if(b[m][k]==b[m][k+1] && b[m][k]==b[m+1][k])
                        {
                            for(p=m;p<MAX;p++)
                            {
                                if(b[p+1][k])
                                {
                                    if(b[p+1][k]==b[m][k])
                                        side1++;
                                    else
                                        break;
                                }
                                else
                                    break;
                            }
                            for(q=k;q<MAX;q++)
                            {
                                if(b[m][q+1])
                                {
                                    if(b[m][k]==b[m][q+1])
                                        side2++;
                                    else
                                        break;
                                }
                                else
                                    break;
                            }
                            if(side1==side2)
                            {
                                for(r=1;r<MAX;r++)
                                {
                                    if(b[m+r][q]==b[m][k])
                                        side3++;
                                    else
                                        break;
                                }
                                for(s=1;s<MAX;s++)
                                {
                                    if(b[p][k+s]==b[m][k])
                                        side4++;
                                    else
                                        break;
                                }
                                if(side3==side1 && side4==side1)
                                {
                                    for(t=m;t<=p;t++)
                                    {
                                        b[t][k]=36;
                                        b[t][k+side1]=36;
                                    }
                                    for(u=k;u<=q;u++)
                                    {
                                        b[m][u]=36;
                                        b[m+side1][u]=36;
                                    }
                                }
                            }
                        }
                        else
                            continue;
                    }
                }
            }
            else
                continue;
        }
    }
}

void line(int i, int j,char n)
{
    int m,k;
    for(m=i;m<MAX;m++)
    {
        for(k=j;k<MAX;k++)
        {
            if(b[m][k]==n)
            {
                if(b[m][k+1])
                {
                    if(b[m][k]==b[m][k+1])
                    {
                        b[m][k]=95;
                        line(m,k+1,n);
                    }
                    else
                    {
                        b[m][k]=95;
                    }
                }
                else
                  continue;
            }
        }
    }
    if(b[m-1][k-1]==n)
    {
        b[m-1][k-1]=95;
    }
}

void arc(int i,int j,char n)
{
    int m,k;
    for(m=i;m<MAX;m++)
    {
        for(k=j;k<MAX;k++)
        {

            if(b[m][k]==n)
            {
                if(b[m-1][k+1])
                {
                    if(b[m][k]==b[m-1][k+1])
                    {
                        if(b[m-1][k+2])
                        {
                            if(b[m-1][k+1]==b[m-1][k+2])
                            {
                                b[m][k]=64;
                                b[m-1][k+1]=64;
                                b[m-1][k+2]=64;
                            }
                        }
                        if(b[m-2][k+1])
                        {
                            if(b[m-1][k+1]==b[m-2][k+1])
                            {
                                b[m][k]=64;
                                b[m-1][k+1]=64;
                                b[m-2][k+1]=64;
                            }
                        }
                    }
                }
                if(b[m+1][k+1])
                {
                    if(b[m][k]==b[m+1][k+1])
                    {
                        if(b[m+1][k+2])
                        {
                            if(b[m+1][k+1]==b[m+1][k+2])
                            {
                                b[m][k]=64;
                                b[m+1][k+1]=64;
                                b[m+1][k+2]=64;
                            }
                        }
                        if(b[m+2][k+2])
                        {
                            if(b[m+1][k+1]==b[m+2][k+1])
                            {
                                b[m][k]=64;
                                b[m+1][k+1]=64;
                                b[m+2][k+1]=64;
                            }
                        }
                    }
                }
                if(b[m-1][k-1])
                {
                    if(b[m][k]==b[m-1][k-1])
                    {
                        if(b[m-1][k-2])
                        {
                            if(b[m-1][k-1]==b[m-1][k-2])
                            {
                                b[m][k]=64;
                                b[m-1][k-1]=64;
                                b[m-1][k-2]=64;
                            }
                        }
                        if(b[m-2][k-1])
                        {
                            if(b[m-1][k-1]==b[m-2][k-1])
                            {
                                b[m][k]=64;
                                b[m-1][k-1]=64;
                                b[m-2][k-1]=64;
                            }
                        }
                    }
                }
                if(b[m+1][k-1])
                {
                    if(b[m][k]==b[m+1][k-1])
                    {
                        if(b[m+1][k-2])
                        {
                            if(b[m+1][k-1]==b[m+1][k-2])
                            {
                                b[m][k]=64;
                                b[m+1][k-1]=64;
                                b[m+1][k-2]=64;
                            }
                        }
                        if(b[m+2][k-1])
                        {
                            if(b[m+1][k-1]==b[m+2][k-1])
                            {
                                b[m][k]=64;
                                b[m+1][k-1]=64;
                                b[m+2][k-1]=64;
                            }
                        }
                    }
                }
            }
        }
    }
}

void chunk(int i,int j,char n)
{
int m,k,p,q,r,s,t,u;
    for(m=i;m<MAX;m++)
    {
        for(k=j;k<MAX;k++)
        {
            int flag=0;
            side1=0;
            side2=0;
            if(b[m][k]==n)
            {
                if(b[m][k+1])
                {
                    if(b[m+1][k])
                    {
                        if(b[m][k]==b[m][k+1] && b[m][k]==b[m+1][k])
                        {
                            for(p=m;p<MAX;p++)
                            {
                                if(b[p+1][k])
                                {
                                    if(b[p+1][k]==b[m][k])
                                        side1++;
                                    else
                                        break;
                                }
                                else
                                    break;
                            }
                            for(q=k;q<MAX;q++)
                            {
                                if(b[m][q+1])
                                {
                                    if(b[m][k]==b[m][q+1])
                                        side2++;
                                    else
                                        break;
                                }
                                else
                                    break;
                            }
                            if(side1==side2)
                            {
                                for(r=m+1;r<=m+side1;r++)
                                {
                                    for(s=k+1;s<=k+side1;s++)
                                    {
                                        if(b[m][k]==b[r][s])
                                            flag=1;
                                        else
                                            break;
                                    }
                                }
                                if(flag==1)
                                {
                                    for(r=m;r<=m+side1;r++)
                                    {
                                        for(s=k;s<=k+side1;s++)
                                        {
                                            b[r][s]=42;
                                        }
                                    }
                                }
                                else
                                    continue;
                            }
                        }
                        else
                            continue;
                    }
                }
            }
            else
                continue;
        }
    }
}
