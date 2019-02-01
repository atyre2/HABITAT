//---------------------------------------------------------------------------

#ifndef gasdevH
#define gasdevH
//---------------------------------------------------------------------------

extern "C" float gasdev(void);


/* randomize and random are not defined in ANSI C */
#define randomize() sgenrand((unsigned)time(NULL))
#define rand0to1() genrand()
#define random(a) (igenrand() % a)

#endif
