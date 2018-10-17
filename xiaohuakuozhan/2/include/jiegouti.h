#ifndef JIEGOUTI_HEAD_H
#define JIEGOUTI_HEAD_H

int stu_number;
int cur_number;
#define cur_num 20

typedef struct studentinfo
{
    int xuehao;
    char name[20];
    int curlist[cur_num];
    int score;
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
void scanf_moduleA();
int scanf_moduleB(int flag);
#endif
