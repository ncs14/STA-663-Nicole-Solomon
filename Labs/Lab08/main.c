# include "distributions.h"
# include <stdio.h>

int main(){
    double x = 0.0;
    double mu = 0.0;
    double sigma = 1.0;
    double pdf = gaussian_pdf(x, mu, sigma);

    printf("%f", pdf);
}