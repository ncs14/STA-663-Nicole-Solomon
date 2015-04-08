# include "distributions.h"
# include <math.h>

double gaussian_pdf(double x, double mu, double sigma){
    double pdf = 0.0;
    pdf = exp(-pow(x - mu, 2) / (2*pow(sigma,2))) / (sigma*pow(2*PI, 0.5));
    return pdf;
}