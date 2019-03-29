ORTHO <- 4L
HEX <- 6L
FULLSQR <- 8L
MAXSIDES  <- FULLSQR

# /* Maximum number of age categories that can be represented */
MAXAGECLASS <-  5L

# /* Habitat Quality maximum and average */
# /***************************************************************
#   NB!! if you change these values you must ensure that they are also
# changed in MAKELAND.IN and HABITAT.IN!!
#   ****************************************************************/
MAXHAB <- 100L
AVGHAB <- 50L
MAXLAYERS <- 5L

LParm <- list(
  meanval = c(50L, 0L, 0L, 0L, 0L),
  fracvar = 0.,
  Hdim = 0.,
  varval = rep(0., MAXLAYERS),
  varbump = rep(0.,MAXLAYERS),
  lowcut = rep(0L, MAXLAYERS),
  highcut = rep(0L, MAXLAYERS),
  numdents = rep(0L, MAXLAYERS)
)

Parm <- list(
  UseRandomSeed  = 0L,
  RandomSeed = 9204802L,
  competition = 0L,
  invasion = 0L,
  dispersaltype = 0L,
  acceptfunction = 0L,
  MinSearch = 0L,
  AcceptSensitivity = 0.,
  BaseAccept = 0.,
  invaderdt = 0.,
  invaderaf = 0.,
  MaxYears = 1L,
  ExtinctTest = 0L,
  MaxReps = 1L,
  Run = 1L,
  Rep = 0L,
  Year= 0L,
  NewLand = 1L,
  Xsize = 16L,
  Ysize = 16L,
  Sides = ORTHO,
  QThreshold = 25L,
  NumLayers = 1L,
  Qpivot = 75L,
  SurvLayer = 0L,
  SurvSlope = 0.8,
  BirthLayer = 0L,
  BirthSlope = 0.4,
  SampleSep = 1L,
  SampleInt = 1L,
  nSamples = 1L,     #/* for stratified sampling */
  Stratify = 0L,
  DeathWatch = 0L,
  SampleLocation = 0L,
  ReportVariance = 0L,
  ReportEveryYear = 1L,
  CensusHabitat = 1L,
  SampleHabitat = 0L,
  SampleCohort = 0L,
  SampleRep = 0L,
  LocateAll = 0L,
  HabitatErr = 0.01,
  OccupancyErr = 0.01,
  CHabitatFile = "",
  HabitatFile = "",
  LogisticFile = "",
  StratifyFile = "",
  TransitFile = "",
  DispMort = 0.02,
  randomalpha = 0L,
  alpha = 0.2, #/*TurnDist[MAXSIDES+1],*/
  minalpha = 0.,
  maxalpha = 0.5,
  MaxAgeClass = MAXAGECLASS,
  DeathRate = rep(0.2,MAXAGECLASS),
  BirthRate = rep(0.4,MAXAGECLASS),
  AgeStruc =  c(100, rep(1,MAXAGECLASS-1))
)
