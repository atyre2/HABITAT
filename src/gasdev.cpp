#include <math.h>
#include "mt19937.h"
#include "util2019.h"
#include "gasdev.h"



//---------------------------------------------------------------------------

/* Returns a normally distributed deviate with zero mean and unit variance,
	using ran1(idum) as the source of uniform deviates. Taken from
	numerical recipes book in c, p.289 */

float gasdev(void)
{
/*	float ran3(long *idum); */
	static int iset=0;
	static float gset;
	float fac, rsq, v1, v2, temp;

	/* We don't have an extra deviate handy, so pick 2 uniform numbers in
		the square extending from -1 to +1 in each direction, see if they
		are in the unit circle, and if they are not, try again.*/
	if (iset == 0){
		do{
			v1 = 2.0*rand0to1()-1.0;
			v2 = 2.0*rand0to1()-1.0;
			rsq=v1*v1+v2*v2;
		}while (rsq >= 1.0 ||rsq == 0.0);

      temp = -2.0*log(rsq)/rsq;
      if (temp >= 0.0) fac = sqrt(temp);
      else {
        fac = 0;
      }
		/* Now make the Box-Muller transformation to get 2 normal deviates.
		Return one and save the other for the next time. */
		gset = v1*fac;
		iset=1; 				/*set flag */
		return v2*fac;
	} else{
		/* We have an extra deviate handy, so unset the flag, and return it.*/
		iset = 0;
		return gset;
	}
}

