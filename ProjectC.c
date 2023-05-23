#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float tgat;
float tpat3;
float math;
float physics;
float chemistry;
int major;
float finalscore;

float general(float tgat, float tpat3, float math, float physics, float chemistry)
{
    float finalscore = tgat/5 + tpat3/3.33 + math/5 + physics/5 + chemistry/10;

    printf("Final score : %.2f\n", finalscore);
}


float computer(float tgat, float tpat3, float math, float physics)
{
    float finalscore = tgat/5 + tpat3*0.4 + math/5 + physics/5;

    printf("Final score : %.2f\n", finalscore);
}


float digital(float tgat, float tpat3, float math)
{
    float finalscore = tgat/5 + tpat3/3.33 + math/2;

    printf("Final score : %.2f\n", finalscore);
}


   

int main(void){

    printf("Welcome to TCAS score calculator\n");
    printf("Please complete your score\n");
    printf("Welcome to TCAS score calculator\n");

    printf("TGAT score : ");
    scanf("%f", &tgat);

    printf("TPAT3 score : ");
    scanf("%f", &tpat3);

    printf("Math score : ");
    scanf("%f", &math);

    printf("Physics score : ");
    scanf("%f", &physics);

    printf("Chemistry score : ");
    scanf("%f", &chemistry);


    printf("Please choose your major\n");
    printf("press 1 : general engineer, Civil engineer, Industrial engineer, Environmental engineer\n");
    printf("press 2 : Comnputer engineer\n");
    printf("press 3 : Computer and digital engineer\n");
    printf("Select your major : ");
    scanf("%d", &major);

    switch (major)
    {
        case 1 :
        general(tgat, tpat3, math, physics, chemistry);
        break;

        case 2 :
        computer(tgat, tpat3, math, physics);
        break;

        case 3 :
        digital(tgat, tpat3, math);
        break;
    }

    printf("Good luck in your way!!");
    

     return EXIT_SUCCESS;
}