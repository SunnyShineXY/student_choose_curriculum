#include<stdio.h>
#include"jiegouti.h"

void scanf_moduleA()
{
    STU stu[50];
    CUR cur[50];
    FILE *fp1;
    int cur_num1[100];
	
    int i=0,j;
    stu_number=0;
	printf("000");
    if((fp1=fopen("xueshengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d%s%d%d%d%d",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		i++;
        
	
    }
	printf("111");
    stu_number=i-1;
    FILE *fp2;
    int m,k;
    cur_number=0;
    if((fp2=fopen("kechengxinxi.txt","r+"))==NULL)
    {
		printf("file open error!");
		exit(0);
    }
    while(!feof(fp2))
    {
        fscanf(fp2,"%d %s %s %d %d %d %d\n",&cur[m].bianhao,cur[m].name,cur[m].xingzhi,&cur[m].xueshi,&cur[m].xuefen,&cur[m].num,&cur[m].max);
	    m++;
        cur_number++;
	
    }
    
    for(i=0;i<stu_number;i++)
    {
		stu[i].score=0;
	    for(j=0;j<3;j++)
        {
		
		   cur_num1[stu[i].curlist[j]-1]++;
	  	    for(k=0;k<cur_number;k++)
			{
				if(stu[i].curlist[j]==cur[k].bianhao)
					stu[i].score+=cur[k].xuefen;
			}
	
    	}	
	}
		
    
    fclose(fp1);
    fclose(fp2);
    for(j=0;j<cur_number;j++)
        cur[j].num=cur_num1[cur[j].bianhao-1];
        
    FILE *fp;
    if((fp=fopen("kechengxinxi.txt","w+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    for(i=0;i<cur_number;i++)
        fprintf(fp,"%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
    fclose(fp);
}

int scanf_moduleB(int flag)
{
    STU stu[50];
    FILE *fp1,*fp2;
    int i=0,j;
    stu_number=0;
    if((fp1=fopen("xueshengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d%s%d%d%d%f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		i++;
        stu_number++;
    }
    for(i=0;i<stu_number;i++)
        for(j=0;j<3;j++)
            if(stu[i].curlist[j]==flag)
                stu[i].curlist[j]=0;
    if((fp2=fopen("xueshengxinxi.txt","w+"))==NULL)
    {
        printf("file open error");
        exit(0);
    }
    
    for(i=0;i<stu_number;i++)
        fprintf(fp2,"%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
    fclose(fp2);
}


int showstu(STU stu[50],int stu_number)
{
    int i;
    for(i=0;i<stu_number;i++)
        printf("%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
}
int showcur(CUR cur[50],int cur_nuber)
{
    int i;
    for(i=0;i<cur_number;i++)
        printf("%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
}
