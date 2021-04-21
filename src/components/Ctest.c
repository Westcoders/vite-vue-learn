#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define bool _Bool
struct TIME
{
    int seconds;
    int minutes;
    int hours;
};
typedef struct complex
{
    float entity;
    float virtual;
} complex;
int main()
{
    int array[30] = {0};
    void test();
    void putThisCText();
    int theLoop();
    void put_a_line();
    void write_text();
    void getDifferenceBetweenTime();
    void module_complex();
    void computers();
    void convertBtoD();
    convertBtoD();

    return 0;
}
int theLoop(int i, int n, int s, int a[30])
{

    int j = n;
    int b;
    int count = s;
    if (count < 15)
    {
        for (i = i; i < 30; i++)
        {
            if (count >= 15)
            {
                break;
            }
            else if (a[i] != 1)
            {
                j += 1;
                if ((j % 9) == 0)
                {
                    a[i] = 1;
                    count += 1;
                    b = i + 1;
                    printf("this is the %d one", b);
                    printf("\n");
                }
            }
            else
            {
                i += 1;
                theLoop(i, j, count, a);
            }
        }
        theLoop(0, j, count, a);
    }
    printf("%d", count);
    return 0;
}
void putThisCText()
{
    FILE *fp;
    char c;
    fp = fopen(__FILE__, "r");
    do
    {
        c = getc(fp);
        putchar(c);
    } while (c != EOF);
    fclose(fp);
}
void put_a_line()
{
    FILE *Context;
    char C[1000];
    Context = fopen("studens", "r");
    fscanf(Context, "%s[^\n]", C);
    printf("%s", C);
    fclose(Context);
}
void write_text()
{
    FILE *afile;
    char sentence[1000];
    afile = fopen("text", "w");
    if (afile == NULL)
    {
        printf(" cann't creat the file");
        exit(1);
    }
    printf("please put your text:\n");
    fgets(sentence, (sizeof sentence / sizeof sentence[0]), stdin);
    fprintf(afile, "%s", sentence);
    fclose(afile);
}
void compute_time(struct TIME star, struct TIME stop, struct TIME *diff)
{
    if (star.seconds > stop.seconds)
    {
        --stop.minutes;
        star.seconds += 60;
    }
    diff->seconds = stop.seconds - star.seconds;
    if (star.minutes > stop.minutes)
    {
        --stop.hours;
        star.minutes += 60;
    }
    diff->minutes = stop.minutes - star.minutes;
    diff->hours = stop.hours - star.hours;
}
void getDifferenceBetweenTime()
{
    void compute_time(struct TIME star, struct TIME stop, struct TIME * diff);
    struct TIME starTime, stopTime, diff;
    printf("please entry the star time: seconds,minutes,hours\n");
    scanf("%d %d %d", &starTime.seconds, &starTime.minutes, &starTime.hours);
    printf("please entry the stop time: seconds,minutes,hours\n");
    scanf("%d %d %d", &stopTime.seconds, &stopTime.minutes, &stopTime.hours);
    compute_time(starTime, stopTime, &diff);
    printf("the time diff is:\n %d hours\n %d minutes \n %d seconds", diff.hours, diff.minutes, diff.seconds);
}
complex add_complex(complex a, complex b)
{
    complex sum;
    sum.entity = a.entity + b.entity;
    sum.virtual = a.virtual + b.virtual;
    return (sum);
}
void module_complex()
{
    complex add_complex();
    complex complex1, complex2, sum;
    printf("please entry the complex1's entity and virtual:\n");
    scanf("%.1f %.1f", &complex1.entity, &complex1.virtual);
    printf("please entry the complex2's entity and virtual:\n");
    scanf("%.1f %.1f", &complex2.entity, &complex2.virtual);
    sum = add_complex(complex1, complex2);
    printf("the sum's entity is:\n %.1f\nthe sum's virtual is:\n %.1f", sum.entity, sum.virtual);
}
void computers()
{
    int number1, number2;
    char operator;
    printf("please entry formula that you want  to compute:\n");
    scanf("%d %c %d", &number1, &operator, & number2);
    printf("the result of your formula is \n");
    switch (operator)
    {
    case '+':
        printf("%d", number1 + number2);
        break;
    case '-':
        printf("%d", number1 - number2);
    case '*':
        printf("%d", number1 * number2);
    case '/':
        printf("%d", number1 / number2);
    default:
        break;
    }
}
void convertBtoD()
{
    float n, m, d;
    float sum = 0;
    for (n = 1; n < 99; n++)
    {
        m = n * (n + 1) * (n + 2);
        d = 2 / m;
        sum = sum + d;
    };
    printf("this is : \n%5.5f", sum);
}
void test()
{
}
