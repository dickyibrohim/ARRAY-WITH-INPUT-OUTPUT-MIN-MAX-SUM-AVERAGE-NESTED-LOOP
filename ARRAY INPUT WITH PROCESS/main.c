#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
int main()
{ int loop1, loop2, input_sub, input_manyexam, min=100, max=0;
float sum, average;
//ARRAY
int value [100];
//INPUT
printf ("Input How Many Subject: "); scanf ("%d",&input_sub);
//INPUT LOOPING FOR VALUE
for (loop1=1;loop1<=input_sub;loop1++)
{
    printf ("Subject - %d\n",loop1);
    printf ("\tHow Many Exam: "); scanf ("%d",&input_manyexam);
    min=100; max=0, sum=0;
    for (loop2=1;loop2<=input_manyexam;loop2++)
    {
        printf ("Input Value Exam-%d: ",loop2);scanf ("%d",&value[loop2-1]); //INPUT TO ARRAY
        //SUM
        sum+=value[loop2-1];
        //MIN OR MAX
        if (min>value[loop2-1]){min=value[loop2-1];}
        if (max<value[loop2-1]){max=value[loop2-1];}
    }
//OUTPUT ALL ARRAY
    printf ("--------Array Output----------\n");
    for (loop2=1;loop2<=input_manyexam;loop2++)
    {
        printf ("Value Exam-%d= %d\n",loop2,value[loop2-1]);
    }
    //PROCESS
    printf ("-----------Proccess------------\n");
    printf ("\tSum: %.2f \n",sum);
    printf ("\tMin: %d \n",min);
    printf ("\tMax: %d \n",max);
    printf ("\tAverage: %.2f \n",sum/input_manyexam);
    printf ("--------End of Process--------\n");
}
    return 0;
}
