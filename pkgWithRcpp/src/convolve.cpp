// cf example in Rcpp in inst/examples/ConvolveBenchmarks
#include <Rcpp.h>

// [[Rcpp::export]]
Rcpp::NumericVector convolve11cpp(Rcpp::NumericVector & xa,
                                  Rcpp::NumericVector & xb) {
    int n_xa = xa.size();
    int n_xb = xb.size();
    Rcpp::NumericVector xab(n_xa + n_xb - 1);

    for (int i = 0; i < n_xa; i++)
        for (int j = 0; j < n_xb; j++)
            xab[i + j] += xa[i] * xb[j];
    return xab ;
}
