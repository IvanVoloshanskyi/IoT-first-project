#include <stdio.h>
#include <math.h>

void solve1(){
    const double e = 2.71828182846;
    printf("%s","x:");
    double x;scanf("%lf", &x);
    printf("%s","a:" );
    double a;scanf("%lf",&a);
    printf("%s","krok");
    double krok;scanf("%lf",&krok);
   do{
        if(x < 4.5){
            printf("%lf", 1/sin(x*x));
            printf("%s","\n");
        }
        else if(x <= 4.5 && x < 5){
            printf("%lf",x + log10(sqrt(pow(x,7))));
            printf("%s","\n");
        }
        else if(x >= 5){
            double a = log(e + 4);
            printf("%lf",a);
            printf("%s","\n");
        }
        x += krok;
   }while(x <= a);
}
int main(){
    solve1();
    printf("%s","\n");
    return 0;
}