#include<stdio.h>
#include<stdlib.h>



int stu_number=0;
/*#define cur_num 20

typedef struct studentinfo
{
    int xuehao;
    char name[20];
    int curlist[cur_num];
    float score;
}STU;

typedef struct curriculuminfo
{
    int cur_bianhao;
    char name[20];
    char cur_xingzhi[20];
    int cur_xueshi;
    int xuefen;
    int cur_al_num;
    int cur_man_max;
}CUR;
*/
int show(STU stu[50])
{
    int i;
    for(i=0;i<stu_number-1;i++)
        printf("%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
}


/*student_perform(STU stu[50])
{
    printf("what do you want to do? add?delete?search?polish?");
    char done[20];
    while(scanf("%s",done)!=EOF)
    {
        switch(done[0])
        {
            case 'a':stu_add();break;
            case 'd':stu_delete(stu);break;
            case 's':stu_search(stu);break;
            case 'p':stu_polish(stu);break;
            default : printf("your performance is wrong.");
        }

    }
}*/

/*
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
        scanf("%d",&stu1.curlist[j]);
    printf("please input score:");
    scanf("%f",&stu1.score);
    
        printf("%d %s %d %d %d %f\n",stu1.xuehao,stu1.name,stu1.curlist[0],stu1.curlist[1],stu1.curlist[2],stu1.score);
    fprintf(fp1,"%d %s %d %d %d %f",stu1.xuehao,stu1.name,stu1.curlist[0],stu1.curlist[1],stu1.curlist[2],stu1.score);
	fclose(fp1);
   //fwrite(stu1,sizeof(stu1),1,fp);
    
}

stu_delete(STU stu[50])
{
    FILE *fp;
    int  i,j;
    if((fp=fopen("xueshengxinxi.txt","w+"))==NULL)
    {
        printf("file open error");
        exit(0);
    }
    show(stu); 
    printf("   %d   ",stu_number);
    int flag1;
    printf("please enter the num,which you want to delete:");
    scanf("%d",&flag1);
   
    for(i=0;i<stu_number-1;i++)
        if(stu[i].xuehao == flag1)
            break;
    for(j=i;j<stu_number-1;j++)
        stu[j]=stu[j+1];
    show(stu);
    for(i=0;i<stu_number-1;i++)
        fprintf(fp,"%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
	fclose(fp);
}

stu_search(STU stu[50])
{
    int flag2;
    int i,j;
    printf("please input the number,which you want to search:");
    scanf("%d",&flag2);
    for(i=0;i<stu_number;i++)
    {
        if(stu[i].xuehao == flag2)
        {
            printf("%d %s %f ",stu[i].xuehao,stu[i].name,stu[i].score);
            for(j=0;j<3;j++)
                printf(" %d ",stu[i].curlist[j]);
        }
    }
}

stu_polish(STU stu[50])
{
    int flag3,i;
    printf("please input the number,which you want to polish:");
    scanf("%d",&flag3);
    FILE *fp;
    if((fp=fopen("xueshengxinxi.txt","w+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    for(i=0;i<stu_number-1;i++)
    {
        if(stu[i].xuehao == flag3)
        {
            
            printf("please input new number:");
            scanf("%d",&stu[i].xuehao);
            printf("please input new name:");
            scanf("%s",stu[i].name);
            printf("please input new score:");
            scanf("%f",&stu[i].score);
            int j=0;
            printf("please input new cur:");
           /* while(stu[i].curlist[j]!=-1)
            {
                scanf("%d",&stu[i].curlist[j]);
                j++;
            }
	    for(j=0;j<3;j++)
		scanf("%d",&stu[i].curlist[j]);
        }
	printf("%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
    }
    for(i=0;i<stu_number-1;i++)
        fprintf(fp,"%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
	fclose(fp);
}*/

/*main()
{
    STU stu[50];
    CUR cur[50];
    char option[20];
    FILE *fp;
    int j,k,i=0;
    if((fp=fopen("xueshengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp))
    {
        fscanf(fp,"%d%s%d%d%d%f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		
       	        
	
        i++;
        stu_number++;
    }
    for(i=0;i<stu_number-1;i++)
        printf("%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
    fclose(fp);
    printf("which one do you want to do, stu,cur?");
    scanf("%s",option);
    switch(option[0])
    {
        case 's':
            student_perform(stu);break;
       
        default :
            printf("error!");break;
    }
}*/

