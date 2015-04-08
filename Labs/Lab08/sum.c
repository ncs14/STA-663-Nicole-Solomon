# include <stdio.h>

double summer(double *x, int n){     // instead of *x: use x[n] or x[];
    double s = 0;
    for (int i=0; i<n; i++){
        s += x[i];
    }
    return s;
}

// returns integer for success/fail;
int main(){
    double x[] = {1,2,3,4,5,6,7,8,9,10};
    double s = summer(x, 10);
    printf("%f", s );
}