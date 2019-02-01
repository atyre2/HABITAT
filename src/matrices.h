//---------------------------------------------------------------------------

#ifndef matricesH
#define matricesH
//---------------------------------------------------------------------------

/* nr macros */
#define SIGN(a,b) ((b) >= 0.0 ? fabs(a) : -fabs(a))

/* nr functions */
extern "C" float **matrix(long nrl, long nrh, long ncl, long nch);
extern "C" void free_matrix(float **m, long nrl, long nrh, long ncl, long nch);

static float maxarg1,maxarg2;
#define FMAX(a,b) (maxarg1=(a),maxarg2=(b),(maxarg1) > (maxarg2) ?\
        (maxarg1) : (maxarg2))


#endif
