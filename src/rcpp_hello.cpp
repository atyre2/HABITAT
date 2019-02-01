#include <Rcpp.h>
using namespace Rcpp;

#include "mt19937.h"
#include "gasdev.h"
#include "matrices.h"


// This is a simple function using Rcpp that creates an R list
// containing a character vector and a numeric vector.
//
// Learn more about how to use Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//
// and browse examples of code using Rcpp at:
//
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
List rcpp_hello() {
  CharacterVector x = CharacterVector::create("foo", "bar");
  NumericVector y   = NumericVector::create(0.0, 1.0);
  List z            = List::create(x, y);
  return z;
}

// [[Rcpp::export]]
float one(){
  return gasdev();
}


// [[Rcpp::export]]
// float abigone(){
//   float **bigone;
//   bigone = matrix(0,10,0,10);
//
//   return bigone;
// }

// [[Rcpp::export]]
double sumC(NumericVector x) {
  int n = x.size();
  double total = 0;
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total;
}


// sequence of steps to start a run and finish it
// need lists for model and landscape parameters
// LandScape *L = NULL;
// L = InitLandScape(&Pm,&LPm);
// init_run(&Pm,&LPm);
// init_rep(&Pm,&LPm);
//
// while((TotalSize > Pm.QThreshold) && (Pm.Year < Pm.MaxYears))
// {
//   step_rep(&Pm,&LPm);
// }
//
// close_rep(&Pm,&LPm);
// close_run(&Pm,&LPm);
