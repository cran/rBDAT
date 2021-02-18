#include <R_ext/RS.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
  Check these declarations against the C/Fortran source code.
*/

  /* .Fortran calls */
extern void F77_NAME(bdat20)(int *BDATBArtNr, double *D1, double *H1, double *D2, double *H2, double *H, double *Hx, int *Hkz, int *Skz, double *Az, double *Hsh, double *Zsh, double *Zab, int *Sokz, int *Skl, double *Vol, double *LDSort, double *Bhd, int *Ifeh, double *FixLngDef, int *NMaxFixLng, double *FixLng, int *NFixLng);
extern void F77_NAME(vbdat20)(int *n, int *vBDATBArtNr, double *vD1, double *vH1, double *vD2, double *vH2, double *vH, double *vHx, int *vHkz, int *vSkz, double *vAz, double *vHsh, double *vZsh, double *vZab, int *vSokz, int *vSkl, double *vVol, double *vLDSort, double *vBhd, int *vIfeh, double *vFixLngDef, int *vNMaxFixLng, double *vFixLng, int *vNFixLng);
extern void F77_NAME(bdatd2h2trans)(int *wBDATBArtNr, double *wD1, double *wH1, double *wD2, double *wH2, double *wHges);
extern void F77_NAME(bdatdmrhx)(int *wBDATBArtNr, double *wD1, double *wH1, double *wD2, double *wH2, double *wHges, double *wHx, int *wIErr, double *wDmRHx);
extern void F77_NAME(vbdatdmrhx)(int *n, int *vBDATBArtNr, double *vD1, double *vH1, double *vD2, double *vH2, double *vHges, double *vHx, int *vIErr, double *vDmRHx);
extern void F77_NAME(bdatdorhx)(int *wBDATBArtNr, double *wD1, double *wH1, double *wD2, double *wH2, double *wHges, double *wHx, int *wIErr, double *wDoRHx);
extern void F77_NAME(vbdatdorhx)(int *vBDATBArtNr, double *vD1, double *vH1, double *vD2, double *vH2, double *vHges, double *vHx, int *vIErr, double *vDoRHx);
extern void F77_NAME(bdatvoldhmr)(int *BDATBArtNr, double *D1, double *H1, double *D2, double *H2, double *Hges, double *DHGrz, double *HDHGrz, double *SekLng, int *IErr, double *VolDHmR);
extern void F77_NAME(bdatvoldhor)(int *BDATBArtNr, double *D1, double *H1, double *D2, double *H2, double *Hges, double *DHGrz, double *HDHGrz, double *SekLng, int *IErr, double *VolDHoR);
extern void F77_NAME(bdatvolabmr)(int *wBDATBArtNr, double *wD1, double *wH1, double *wD2, double *wH2, double *wHges, double *wA, double *wB, double *wSekLng, int *wIErr, double *wVolABmr);
extern void F77_NAME(vbdatvolabmr)(int *n, int *vBDATBArtNr, double *vD1, double *vH1, double *vD2, double *vH2, double *vHges, double *vA, double *vB, double *vSekLng, int *vIErr, double *vVolABmr);
extern void F77_NAME(bdatvolabor)(int *wBDATBArtNr, double *wD1, double *wH1, double *wD2, double *wH2, double *wHges, double *wA, double *wB, double *wSekLng, int *wIErr, double *wVolABor);
extern void F77_NAME(vbdatvolabor)(int *n, int *vBDATBArtNr, double *vD1, double *vH1, double *vD2, double *vH2, double *vHges, double *vA, double *vB, double *vSekLng, int *vIErr, double *vVolABor);
extern void F77_NAME(bdathxdx)(int *BDATBArtNr, double *D1, double *H1, double *D2, double *H2, double *H, double *Dx, double *Hx, int *IErr);
extern void F77_NAME(vbdathxdx)(int *n, int *BDATBArtNr, double *D1, double *H1, double *D2, double *H2, double *H, double *Dx, double *Hx, int *IErr);
extern void F77_NAME(bdathxdxor)(int *BDATBArtNr, double *D1, double *H1, double *D2, double *H2, double *H, double *Dx, double *Hx, int *IErr);
extern void F77_NAME(vbdathxdxor)(int *n, int *BDATBArtNr, double *D1, double *H1, double *D2, double *H2, double *H, double *Dx, double *Hx, int *IErr);
extern void F77_NAME(bdatrinde2hx)(int *wBDATBArtNr, double *wD1, double *wH1, double *wD2, double *wH2, double *wHges, double *wHx, int *wIErr, double *wRinde2Hx);
extern void F77_NAME(vbdatrinde2hx)(int *n, int *vBDATBArtNr, double *vD1, double *vH1, double *vD2, double *vH2, double *vHges, double *vHx, int *vIErr, double *vRinde2Hx);
extern void F77_NAME(biomasse)(int *BdatBart, double *D13, double *D2, double *H2, double *H, double *Biom);
extern void F77_NAME(vbiomasse)(int *n, int *vBdatBart, double *vD13, double *vD2, double *vH2, double *vH, double *vBiom);
extern void F77_NAME(bdatformtarif)(int *Tarif, int *BDATBArtNr, double *D, double *H, double *MwQ03BWI);
extern void F77_NAME(vbdatformtarif)(int *n, int *vTarif, int *vBDATBArtNr, double *vD, double *vH, double *vMwQ03BWI);

static const R_FortranMethodDef FortranEntries[] = {
  {"bdat20",          (DL_FUNC) &F77_NAME(bdat20),        23},
  {"vbdat20",         (DL_FUNC) &F77_NAME(vbdat20),       24},
  {"bdatd2h2trans",   (DL_FUNC) &F77_NAME(bdatd2h2trans),  6},
  {"bdatdmrhx",       (DL_FUNC) &F77_NAME(bdatdmrhx),      9},
  {"vbdatdmrhx",      (DL_FUNC) &F77_NAME(vbdatdmrhx),    10},
  {"bdatdorhx",       (DL_FUNC) &F77_NAME(bdatdorhx),      9},
  {"vbdatdorhx",      (DL_FUNC) &F77_NAME(vbdatdorhx),    10},
  {"bdatvoldhmr",     (DL_FUNC) &F77_NAME(bdatvoldhmr),   11},
  {"bdatvoldhor",     (DL_FUNC) &F77_NAME(bdatvoldhor),   11},
  {"bdatvolabmr",     (DL_FUNC) &F77_NAME(bdatvolabmr),   11},
  {"vbdatvolabmr",    (DL_FUNC) &F77_NAME(vbdatvolabmr),  12},
  {"bdatvolabor",     (DL_FUNC) &F77_NAME(bdatvolabor),   11},
  {"vbdatvolabor",    (DL_FUNC) &F77_NAME(vbdatvolabor),  12},
  {"bdathxdx",        (DL_FUNC) &F77_NAME(bdathxdx),       9},
  {"vbdathxdx",       (DL_FUNC) &F77_NAME(vbdathxdx),     10},
  {"bdathxdxor",      (DL_FUNC) &F77_NAME(bdathxdxor),     9},
  {"vbdathxdxor",     (DL_FUNC) &F77_NAME(vbdathxdxor),   10},
  {"bdatrinde2hx",    (DL_FUNC) &F77_NAME(bdatrinde2hx),   9},
  {"vbdatrinde2hx",   (DL_FUNC) &F77_NAME(vbdatrinde2hx), 10},
  {"biomasse",        (DL_FUNC) &F77_NAME(biomasse),       6},
  {"vbiomasse",       (DL_FUNC) &F77_NAME(vbiomasse),      7},
  {"bdatformtarif",   (DL_FUNC) &F77_NAME(bdatformtarif),  5},
  {"vbdatformtarif",  (DL_FUNC) &F77_NAME(vbdatformtarif), 6},
  {NULL, NULL, 0}
};

void R_init_rBDAT(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, NULL, FortranEntries, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
