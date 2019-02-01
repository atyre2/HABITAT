#include <Rcpp.h>
using namespace Rcpp;


#include "habitat.h"

/***R
testrun(Parm, LParm)
*/


// sequence of steps to start a run and finish it
// need lists for model and landscape parameters
// [[Rcpp::export]]
int testrun(List rPm, List rLPm){
  Parameters Pm;
  LParameters LPm;
  int i, L1 = 0, L2;
  IntegerVector tmp (MAXLAYERS);

  Pm.MaxReps = rPm["MaxReps"];
  LPm.fracvar = rLPm["fracvar"];
  LPm.Hdim = rLPm["Hdim"];
  tmp = rLPm["meanval"];
  //  Rprintf("%i %i %i %i\n", tmp[0], tmp[1], tmp[2], tmp[3]);
  for (i=0; i<MAXLAYERS; i++) LPm.meanval[i] = tmp[i];
  //  Rprintf("%i %i %i %i\n", LPm.meanval[0], LPm.meanval[1], LPm.meanval[2], LPm.meanval[3]);
  Pm.Qpivot = rPm["Qpivot"];
  Pm.Rep = rPm["Rep"];
  Pm.Run = rPm["Run"];
  Pm.Xsize = rPm["Xsize"];
  Pm.Ysize = rPm["Ysize"];
  Pm.Sides = rPm["Sides"];
  Pm.NumLayers = rPm["NumLayers"];
  Pm.NewLand = rPm["NewLand"];
  //
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
