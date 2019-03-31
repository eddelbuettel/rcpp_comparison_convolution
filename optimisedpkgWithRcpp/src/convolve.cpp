// cf example in Rcpp in inst/examples/ConvolveBenchmarks
#include <Rcpp.h>

// [[Rcpp::export]]
Rcpp::NumericVector convolve5cpp(Rcpp::NumericVector & xa,
                                  Rcpp::NumericVector & xb) {
    int n_xa = xa.size();
    int n_xb = xb.size();
    Rcpp::NumericVector xab(n_xa + n_xb - 1);

    Rcpp::Range r(0, n_xb-1);
    for (int i=0; i<n_xa; i++, r++) {
    	xab[r] += xa[i] * xb;
    }
    return xab;
}
