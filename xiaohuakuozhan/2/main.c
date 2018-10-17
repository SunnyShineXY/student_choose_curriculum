#include<stdio.h>
#include<stdlib.h>
#include"jiegouti.h"
#include"stu_info_module.h"
#include"stu_perform_module.h"
#include"cur_info_module.h"
#include"cur_perform_module.h"

main()
{
    STU stu[50];
    CUR cur[50];
    char option[20];
    FILE *fp1,*fp2;
    int j,k,i=0,m=0;
    printf("which one do you want to do, stu,cur?");
    while(scanf("%s",option)!=EOF)
    {
    	switch(option[0])
    	{
        	case 's':
           		student_perform(stu);break;
        	case 'c':
            		curriculum_perform(cur);break;
		case 'q':exit(0);
        	default :
            		printf("error!");break;
    	}
	printf("which one do you want to do, stu,cur?");
    }
}
