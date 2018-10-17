#include<stdio.h>
#include<stdlib.h>


/*   
int stu_number;
int cur_number;
#define cur_num 20

typedef struct studentinfo
{
    int xuehao;
    char name[20];
    int curlist[cur_num];
    float score;
}STU;

typedef struct curriculuminfo
{
    int bianhao;
    char name[20];
    char xingzhi[20];
    int xueshi;
    int xuefen;
    int num;
    int max;
}CUR;
*/
/*STU* readstu(STU stu[50])
{
    int i=0;
    FILE *fp1;
    if((fp1=fopen("xueshengxinxi.txt","r+")==NULL))
    {
	printf("file open error!");
	exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d %s %d %d %d %f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		
       	        
	
        i++;
        stu_number++;
    }
    return stu;
}
void readcur(CUR cur[50])
{
     int m=0;
     FILE *fp2;
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
    return cur[50];
}
*/

/*
int scanf_moduleA()
{
    STU stu[50];
    CUR cur[50];
    FILE *fp1;
    int cur_num1[100];
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
    fclose(fp1);
    for(i=0;i<stu_number;i++)
        for(j=0;j<3;j++)
            cur_num1[stu[i].curlist[j]-1]++;
    
    FILE *fp2;
    int m;
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
*/
/*
student_perform(STU stu[50])
{
    FILE *fp1;
    int i;
    STU stu1[50];
    printf("what do you want to do? add?delete?search?polish?");
    char done[20];
    scanf_moduleA();
    while(scanf("%s",done)!=EOF)
    {
       if((fp1=fopen("xueshengxinxi.txt","r+"))==NULL)
       {
            printf("file open error!");
            exit(0);
       }
       while(!feof(fp1))
       {
            fscanf(fp1,"%d %s %d %d %d %f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		    i++;
            stu_number++;
       }
	for(i=0;i<stu_number-1;i++)
            printf("%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
        scanf_moduleA();
        switch(done[0])
        {
            case 'a':stu_add();break;
            case 'd':stu_delete(stu1);break;
            case 's':stu_search(stu1);break;
            case 'p':stu_polish(stu1);break;
	        case 'q':exit(0) ;
            default : printf("your performance is wrong.");
        }
    printf("what do you want to do? add?delete?search?polish?");
    }
}
*/
/*
curriculum_perform(CUR cur[50])
{
    FILE *fp2;
    int m;
    CUR cur1[50];
    printf("what do you want to do? add?delete?search?polish?");
    char done[20];
    while(scanf("%s",done)!=EOF)
    {
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
	for(m=0;m<cur_number;m++)
            printf("%d %s %s %d %d %d %d\n",cur[m].bianhao,cur[m].name,cur[m].xingzhi,cur[m].xueshi,cur[m].xuefen,cur[m].num,cur[m].max);
	switch(done[0])
        {
            case 'a':cur_add();break;
            case 'd':cur_delete(cur1);break;
            case 's':cur_search(cur1);break;
            case 'p':cur_polish(cur1);break;
	        case 'q':exit(0) ;
            default : printf("your performance is wrong!");
        }
	printf("what do you want to do? add?delete?search?polish?");
    }
}
*/
/*
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
    printf("%d %s %s %d %d %d %d\n",cur1.bianhao,cur1.name,cur1.xingzhi,cur1.xueshi,cur1.xuefen,cur1.num,cur1.max);
    fprintf(fp1,"%d %s %s %d %d %d %d\n",cur1.bianhao,cur1.name,cur1.xingzhi,cur1.xueshi,cur1.xuefen,cur1.num,cur1.max);
	fclose(fp1);
   //fwrite(cur1,sizeof(cur1),1,fp);
    
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
    showcur(cur,cur_number); 
    printf("   %d   \n",cur_number);
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
    showcur(cur,cur_number);
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
	 printf("%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
    }
    for(i=0;i<cur_number;i++)
        fprintf(fp,"%d %s %s %d %d %d %d\n",cur[i].bianhao,cur[i].name,cur[i].xingzhi,cur[i].xueshi,cur[i].xuefen,cur[i].num,cur[i].max);
	fclose(fp);
}
*/
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
    {
        scanf("%d",&stu1.curlist[j]);
    }
    printf("please input score:");
    scanf("%f",&stu1.score);
    
        printf("%d %s %d %d %d %f\n",stu1.xuehao,stu1.name,stu1.curlist[0],stu1.curlist[1],stu1.curlist[2],stu1.score);
    fprintf(fp1,"%d %s %d %d %d %f\n",stu1.xuehao,stu1.name,stu1.curlist[0],stu1.curlist[1],stu1.curlist[2],stu1.score);
	fclose(fp1);
	//stu[stu_number]=stu1;
	//stu_number+=1;
   //fwrite(stu1,sizeof(stu1),1,fp);
    
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
        fscanf(fp2,"%d%s%d%d%d%f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
	    i++;
        stu_number++;
    }
    showstu(stu,stu_number); 
    printf("   %d   \n",stu_number);
    if((fp1=fopen("xueshengxinxi.txt","w+"))==NULL)
    {
        printf("file open error");
        exit(0);
    }
    
    int flag1;
    printf("please enter the num,which you want to delete:");
    scanf("%d",&flag1);
   
    for(i=0;i<stu_number;i++)
        if(stu[i].xuehao == flag1)
            break;
    for(j=i;j<stu_number;j++)
        stu[j]=stu[j+1];
 	stu_number--; 
    showstu(stu,stu_number-1);
    for(i=0;i<stu_number-1;i++)
        fprintf(fp1,"%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
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
        fscanf(fp1,"%d%s%d%d%d%f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		i++;
        stu_number++;
    }
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
        fscanf(fp1,"%d%s%d%d%d%f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
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
            scanf("%f",&stu[i].score);
           
	    for(j=0;j<3;j++)
		scanf("%d",&stu[i].curlist[j]);
        }
	printf("%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
    }
    for(i=0;i<stu_number-1;i++)
        fprintf(fp,"%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);
	fclose(fp);
}
    */
main()
{
    STU stu[50];
    CUR cur[50];
    char option[20];
    FILE *fp1,*fp2;
    int j,k,i=0,m=0;
   /* if((fp1=fopen("xueshengxinxi.txt","r+"))==NULL)
    {
        printf("file open error!");
        exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%d %s %d %d %d %f",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
		
       	        
	
        i++;
        stu_number++;
    }
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
    
    */
    //fclose(fp1);fclose(fp2);
    printf("which one do you want to do, stu,cur?");
    scanf("%s",option);
    switch(option[0])
    {
        case 's':
        /*for(i=0;i<stu_number;i++)
            printf("%d %s %d %d %d %f\n",stu[i].xuehao,stu[i].name,stu[i].curlist[0],stu[i].curlist[1],stu[i].curlist[2],stu[i].score);*/
            student_perform(stu);break;
        case 'c':
       /* for(m=0;m<cur_number;m++)
	    printf("%d %s %s %d %d %d %d\n",cur[m].bianhao,cur[m].name,cur[m].xingzhi,cur[m].xueshi,cur[m].xuefen,cur[m].num,cur[m].max);*/
            curriculum_perform(cur);break;
        default :
            printf("error!");break;
    }
}
