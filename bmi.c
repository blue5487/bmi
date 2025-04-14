#include <stdio.h>

int main(){

    float kg,m,bmi;


    printf("pls enter your(kg): ");
    
    if(scanf("%f", &kg)!= 1)
    {
        printf("404");
        return 1;
    }


    printf("next pls enter your(m): ");
    
    if(scanf("%f", &m)!= 1)
    {
        printf("404");
        return 1;
    }
    
    m = m / 100.0;
    bmi = kg / (m * m);

    printf("your bmi is===%.2f\n",bmi);

    if(bmi <18.5)
    {
        printf("bad :(");
    }
    else if(bmi <24.9)
    {
        printf("normal");
    } 
    else if(bmi <29.9)
    {
        printf("oh bad");
    }
    else if (bmi < 30)
    {
        printf("ver baddddd");
    }
    else
    {
        printf("404");
    }
    return 0;

}