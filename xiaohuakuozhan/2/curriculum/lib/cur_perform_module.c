#include<stdio.h>
#include<stdlib.h>
#include"jiegouti.h"
#include"cur_info_module.h"
#include"cur_perform_module.h"
curriculum_perform(CUR cur[50])
{
    FILE *fp2,*fpp;
    int m;
    CUR cur1[50];
    printf("what do you want to do? add?delete?search?polish?");
    char done[20];
	//scanf_moduleA();
    while(scanf("%s",done)!=EOF)
    {
	system("clear");        
	if((fp2=fopen("kechengxinxi.txt","r"))==NULL)
        {
            printf("file open error!");
            exit(0);
        }
        while(!feof(fp2))
        {
            fscanf(fp2,"%d %s %s %d %d %d %d",&cur[m].bianhao,cur[m].name,cur[m].xingzhi,&cur[m].xueshi,&cur[m].xuefen,&cur[m].num,&cur[m].max);
            m++;
            cur_number++;
		
        }
	if((fpp=fopen("log.log","a"))==NULL)
       {
            printf("file open error!");
            exit(0);
       }
	
      	    system("date >> log.log");
	 
            fprintf(fpp,"do curriculum %s\n",done);
		   
       
	
	fclose(fpp);
	fclose(fp2);
	/*for(m=0;m<cur_number;m++)
            printf("%d %s %s %d %d %d %d\n",cur[m].bianhao,cur[m].name,cur[m].xingzhi,cur[m].xueshi,cur[m].xuefen,cur[m].num,cur[m].max);*/
	switch(done[0])
        {
            case 'a':cur_add();break;
            case 'd':cur_delete(cur1);break;
            case 's':cur_search(cur1);break;
            case 'p':cur_polish(cur1);break;
	        case 'q':return ;
            default : printf("your performance is wrong!");
        }
	
	printf("what do you want to do? add?delete?search?polish?");
	
    }
}

