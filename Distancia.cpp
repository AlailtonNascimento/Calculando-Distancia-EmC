#include<stdio.h>
#include<math.h>

 
int main() {
 
    double p1, p2, x1, x2, y1, y2, D, distancia;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    //fflush(stdin);
    p1 = x2-x1;
    p2 = y2-y1;
    printf("%lf\n", p1);
    printf("%lf\n", p2);
    
    distancia = sqrt(pow(p1, 2.0) + pow(p2, 2.0));
    
    printf("%.4lf\n", distancia);
 
    return 0;
}
