#include <Rcpp.h>
using namespace Rcpp;

//' Function made with Rcpp
//'
//' @param x a numeric vector
//' @return a number
// [[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}


