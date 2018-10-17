#include<stdio.h>
#include<stdlib.h>
#include"jiegouti.h"
#include"cur_info_module.h"
#include"cur_perform_module.h"




cur_add()
{
    CUR cur1;
    FILE *fp1;
    if((fp1=fopen("kechengxinxi.txt","a"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    int j,i;
    printf("please iput bianhao:");
    scanf("%d",&cur1.bianhao);
    printf("please input name:");
    scanf("%s",cur1.name);
    printf("please input xingzhi:");
    scanf("%s",cur1.xingzhi);
    printf("please input xueshi:");
    scanf("%d",&cur1.xueshi);
    printf("please input xuefen:");
    scanf("%d",&cur1.xuefen);
    printf("please input num:");
    scanf("%d",&cur1.num);
    printf("please input max:");
    scanf("%d",&cur1.max);
	//printf("all curriculums' infomation:\n");
    /*printf("%d %s %s %d %d %d %d\n",cur1.bianhao,cur1.name,cur1.xingzhi,cur1.xueshi,cur1.xuefen,cur1.num,cur1.max);*/
    fprintf(fp1,"%d %s %s %d %d %d %d\n",cur1.bianhao,cur1.name,cur1.xingzhi,cur1.xueshi,cur1.xuefen,cur1.num,cur1.max);
	fclose(fp1);
   
    
}

cur_delete(CUR cur[50])
{
    FILE *fp1,*fp2;
    int  i=0,j;
    cur_number=0;
    if((fp2=fopen("kechengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp2))
    {
        fscanf(fp2,"%d %s %s %d %d %d %d\n",&cur[i].bianhao,cur[i].name,cur[i].xingzhi,&cur[i].xueshi,&cur[i].xuefen,&cur[i].num,&cur[i].max);
	
	    i++;
        cur_number++;
    }
	printf("all curriculums' infomation:\n");
    showcur(cur,cur_number); 
    if((fp1=fopen("kechengxinxi.txt","w+"))==NULL)
    {
        printf("file open error");
        exit(0);
    }
    
    int flag1;
    printf("please enter the num,which you want to delete:");
    scanf("%d",&flag1);
   
    for(i=0;i<cur_number;i++)
        if(cur[i].bianhao == flag1)
            break;
    for(j=i;j<cur_number;j++)
        cur[j]=cur[j+1];
 	cur_number--; 
    
    for(i=0;i<cur_number;i++)
        fprintf(fp1,"%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
    scanf_moduleB(flag1);
    fclose(fp1);
    fclose(fp2);


}

cur_search(CUR cur[50])
{
    int flag2,m=0;
    int i,j; 
    FILE *fp1;
    cur_number=0;
    if((fp1=fopen("kechengxinxi.txt","r+"))==NULL)
    {
		printf("file open error!");
		exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d %s %s %d %d %d %d\n",&cur[m].bianhao,cur[m].name,cur[m].xingzhi,&cur[m].xueshi,&cur[m].xuefen,&cur[m].num,&cur[m].max);
	    m++;
        cur_number++;
    }
    printf("please input the number,which you want to search:");
    scanf("%d",&flag2);
    for(i=0;i<cur_number;i++)
    {
        if(cur[i].bianhao == flag2)
        {
             printf("%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
        }
    }
    fclose(fp1);
}

cur_polish(CUR cur[50])
{
    int flag3,i,m=0;
    printf("please input the number,which you want to polish:");
    scanf("%d",&flag3);
    FILE *fp1;
    cur_number=0;
    if((fp1=fopen("kechengxinxi.txt","r+"))==NULL)
    {
		printf("file open error!");
		exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d %s %s %d %d %d %d\n",&cur[m].bianhao,cur[m].name,cur[m].xingzhi,&cur[m].xueshi,&cur[m].xuefen,&cur[m].num,&cur[m].max);
	    m++;
        cur_number++;
    }
    FILE *fp;
    if((fp=fopen("kechengxinxi.txt","w+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    
    for(i=0;i<cur_number;i++)
    {
        if(cur[i].bianhao == flag3)
        {
            
            printf("please iput new bianhao:");
    	    scanf("%d",&cur[i].bianhao);
            printf("please input new name:");
            scanf("%s",cur[i].name);
            printf("please input new xingzhi:");
            scanf("%s",cur[i].xingzhi);
            printf("please input new xueshi:");
            scanf("%d",&cur[i].xueshi);
            printf("please input new xuefen:");
            scanf("%d",&cur[i].xuefen);
            printf("please input new num:");
            scanf("%d",&cur[i].num);
            printf("please input new max:");
            scanf("%d",&cur[i].max);
        }
	  printf("all curriculums' infomation:\n");
	 printf("%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
    }
    for(i=0;i<cur_number;i++)
        fprintf(fp,"%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
	fclose(fp);
}
