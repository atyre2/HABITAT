#include <Rcpp.h>
using namespace Rcpp;

#include "mt19937.h"
#include "gasdev.h"
#include "matrices.h"



// [[Rcpp::export]]
float one(){
  return gasdev();
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
