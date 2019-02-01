#include <Rcpp.h>
using namespace Rcpp;


#include "habitat.h"



// sequence of steps to start a run and finish it
// need lists for model and landscape parameters
// [[Rcpp::export]]
int testrun(){
  Parameters Pm;
  LParameters LPm;
  int L;
  LPm.fracvar = 0;
  LPm.Hdim = 0;
  LPm.meanval[0] = 50;
  Pm.Xsize = 32;
  Pm.Ysize = 32;
  Pm.Sides = ORTHO;
  Pm.NumLayers = 1;
  Pm.NewLand = 1;

  L = init_rep(&Pm,&LPm);
  return L;
}
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
