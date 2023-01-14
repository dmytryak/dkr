#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 6
void t1(void);
int t2(int [], int);
void t3(void);
int main()
{
    int answer;
    printf("Choose task:\n1)DKR1\n2)DKR2\n3)DKR3\n");
    scanf("%d",&answer);
    system("cls");
    while(answer!=1&&answer!=2&&answer!=3)
    {
    printf("Choose task:\n1)DKR1\n2)DKR2\n3)DKR3\n");
    scanf("%d",&answer);
    system("cls");
    }

    if(answer==1)
    {
        t1();
    }

    if(answer==2)
    {
        int res;
        int X[SIZE];
        res=t2(X,SIZE);
        printf("Result=%d",res);
    }

    if(answer==3)
    {
        t3();
    }
    return 0;
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------*/




void t1(void)
{
    printf("\n\t\t\t\t\tDKR1");
    double a,res,res1,res2;
    int N;
    printf("\na=");
    scanf("%lf",&a);
    printf("N=");
    scanf("%d",&N);
    res1=1;
    for(int i=1;i<=N-1;i++)
        res1=res1*a;
    res2=N*(N+1)/2;
    res=res1+res2;
    printf("Result:%lf",res);
}



int t2(int X[], int N)
{
    srand(time(NULL));
    int j,res,i;
    res=1;
    printf("\n\t\t\t\t\tDKR2\n");
    for(j=0;j<N;j++)
    {
        X[j]=1+rand()%25;// від 1 до 25
        printf("X[%d]=%d\n",j,X[j]);
        if(j%2==0)
        {
            res=res*X[j];
        }

    }
    return res;
}




void t3(void)
{
    printf("\n\t\t\t\t\tDKR3");
    FILE* fp_input;
    int count = 0;
    char A;
    fp_input = fopen("D:\\ok\\nazvafilu.txt", "r");
    if (fp_input==NULL)
    {
        printf("\nOops...something wrong.FIX ME");
        printf("\nPress any key to exit");
        getche();
        exit(1);
    }
        while ((A= fgetc(fp_input))!= EOF)
        {
            switch(A)
            {
                case 'z':
                case 'Z':
                case 'y':
                case 'Y':
                case 'x':
                case 'X':
                case 'w':
                case 'W':
                case 'v':
                case 'V':
                count++;
            }
        }
    fclose(fp_input);
    printf("\n\nResult:%d\n\n\n",count);
}
