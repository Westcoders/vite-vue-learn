#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct
{
    int ID;
    int math;
    int English;
    int C;
    int avargrade;
    char name[20];
} Stu;
int main()
{
    FILE *fp;
    Stu stu[1];
    int i, avargrade = 0;
    printf("请please write the student's message: id,name,score\n");
    for (i = 0; i < 1; i++)
    {
        scanf("%d %s %d %d %d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i].C));
        stu[i].avargrade = (stu[i].C + stu[i].English + stu[i].math) / 3;
    }
    if ((fp = fopen("students", "w")) == NULL)
    {
        printf("error : cannot open this file!\n");
        exit(0);
    }
    for (i = 0; i < 1; i++)
    {
        fprintf(fp, "%d %s %d %d %d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English, stu[i].C, stu[i].avargrade);
    }
    fclose(fp);
    return 0;
}
