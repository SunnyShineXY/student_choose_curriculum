#include<stdio.h>
#include<stdlib.h>
#include"stu_perform_module.h"
#include"stu_info_module.h"
#include"jiegouti.h"

student_perform(STU stu[50])
{
    FILE *fp1,*fpp;
    int i=0;
    STU stu1[50];
    char done[50];
    printf("what do you want to do? add?delete?search?polish?\n");
	
    while(scanf("%s", done)!=EOF)
    {
	system("clear");
       if((fp1=fopen("xueshengxinxi.txt","r"))==NULL)
       {
            printf("file open error!\n");
            exit(0);
       }
	
       while(!feof(fp1))
       {
            fscanf(fp1,"%d %s %d %d %d %d",&stu[i].xuehao,stu[i].name,&stu[i].curlist[0],&stu[i].curlist[1],&stu[i].curlist[2],&stu[i].score);
	    i++;
            stu_number++;
	    
       }
	
	 if((fpp=fopen("log.log","a"))==NULL)
       {
            printf("file open error!");
            exit(0);
       }
	
      	    system("date >> log.log");
	    
            fprintf(fpp,"do student %s\n",done);
		   
       
	
	fclose(fpp);fclose(fp1);
	 /*  for(i=0;i<stu_number-1;i++)
            printf("%d %s %d %d %d %d\n",
		stu[i].xuehao,stu[i].name, stu[i].curlist[0], stu[i].curlist[1], 
                stu[i].curlist[2],stu[i].score);*/
        switch(done[0])
        {
            case 'a':stu_add();break;
            case 'd':stu_delete(stu1);break;
            case 's':stu_search(stu1);break;
            case 'p':stu_polish(stu1);break;
	    	case 'q':return;
            default : printf("your performance is wrong.");
        }
	
	//fclose(fpp);
	
    printf("what do you want to do? add?delete?search?polish?\n");
    }
}
	
   
