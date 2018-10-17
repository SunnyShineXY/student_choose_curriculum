#include<stdio.h>
#include<stdlib.h>
#include"jiegouti.h"
#include"stu_info_module.h"
#include"stu_perform_module.h"


stu_add()
{
    STU stu1;
    FILE *fp1;
    if((fp1=fopen("xueshengxinxi.txt","a"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    int j,i;
    printf("please iput xuehao:");
    scanf("%d",&stu1.xuehao);
    printf("please input name:");
    
    scanf("%s",stu1.name);
    printf("please input cur_al_list:");
    for(j=0;j<3;j++)
    {
        scanf("%d",&stu1.curlist[j]);
    }
    printf("please input score:");
    scanf("%d",&stu1.score);
    
      
    fprintf(fp1,"%d %s %d %d %d %d\n",stu1.xuehao,stu1.name,stu1.curlist[0],stu1.curlist[1],stu1.curlist[2],stu1.score);
	fclose(fp1);
	
    
}

stu_delete(STU stu[50])
{
    FILE *fp1,*fp2;
    int  i=0,j;
    stu_number=0;
    if((fp2=fopen("xueshengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp2))
    {
        fscanf(fp2,"%d%s%d%d%d%d",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
	    i++;
        stu_number++;
    }
	printf("all students' infomation:\n");
    showstu(stu,stu_number); 
    
    if((fp1=fopen("xueshengxinxi.txt","w+"))==NULL)
    {
        printf("file open error");
        exit(0);
    }
    
    int flag1;
    printf("please enter the num,which you want to delete:");
    scanf("%d",&flag1);
   //scanf_moduleB(flag1);
    for(i=0;i<stu_number;i++)
        if(stu[i].xuehao == flag1)
            break;
    for(j=i;j<stu_number;j++)
        stu[j]=stu[j+1];
 	stu_number--; 
    showstu(stu,stu_number-1);
    for(i=0;i<stu_number-1;i++)
        fprintf(fp1,"%d %s %d %d %d %d\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
    fclose(fp1);
    fclose(fp2);
}

stu_search(STU stu[50])
{
    int flag2;
    int i,j;
    FILE *fp1;
    stu_number=0;
    if((fp1=fopen("xueshengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d%s%d%d%d%d",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		i++;
        stu_number++;
    }
    printf("please input the number,which you want to search:");
    scanf("%d",&flag2);
    for(i=0;i<stu_number;i++)
    {
        if(stu[i].xuehao == flag2)
        {
            printf("%d %s %d ",stu[i].xuehao,stu[i].name,stu[i].score);
            for(j=0;j<3;j++)
                printf(" %d ",stu[i].curlist[j]);
		printf("\n");
        }
    }
    fclose(fp1);
}

stu_polish(STU stu[50])
{
    int flag3,i;
    stu_number=0;
    printf("please input the number,which you want to polish:");
    scanf("%d",&flag3);
    FILE *fp,*fp1;
    if((fp1=fopen("xueshengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d%s%d%d%d%d",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		i++;
        stu_number++;
    }
    if((fp=fopen("xueshengxinxi.txt","w+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    for(i=0;i<stu_number;i++)
    {
        if(stu[i].xuehao == flag3)
        {
            
            printf("please input new number:");
            scanf("%d",&stu[i].xuehao);
            printf("please input new name:");
            scanf("%s",stu[i].name);
            printf("please input new score:");
            scanf("%d",&stu[i].score);
            int j=0;
            printf("please input new cur:");
           
	    for(j=0;j<3;j++)
		scanf("%d",&stu[i].curlist[j]);
        }
	printf("%d %s %d %d %d %d\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
    }
    for(i=0;i<stu_number-1;i++)
        fprintf(fp,"%d %s %d %d %d %d\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
	fclose(fp);
}
    
