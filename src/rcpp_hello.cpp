#include <Rcpp.h>
using namespace Rcpp;


#include "habitat.h"



// sequence of steps to start a run and finish it
// need lists for model and landscape parameters
// [[Rcpp::export]]
int testrun(){
  Parameters Pm;
  LParameters LPm;
  int L1, L2;
  LPm.fracvar = 0;
  LPm.Hdim = 0;
  LPm.meanval[0] = 50;
  Pm.Qpivot = 75;
  Pm.Rep = 0;
  Pm.Run = 0;
  Pm.Xsize = 32;
  Pm.Ysize = 32;
  Pm.Sides = ORTHO;
  Pm.NumLayers = 1;
  Pm.NewLand = 1;

  L1 = init_rep(&Pm,&LPm);
  L2 = close_rep(&Pm,&LPm);
  return L1;
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
