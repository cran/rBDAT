[![pipeline status](https://gitlab.com/vochr/rBDAT/badges/master/pipeline.svg)](https://gitlab.com/vochr/rBDAT/commits/master)    
[![coverage report](https://gitlab.com/vochr/rBDAT/badges/master/coverage.svg)](https://gitlab.com/vochr/rBDAT/commits/master)
<!-- 
    [![Build Status](https://travis-ci.org/fvafrCU/rBDAT.svg?branch=master)](https://travis-ci.org/fvafrCU/rBDAT)
    [![Coverage Status](https://codecov.io/github/fvafrCU/rBDAT/coverage.svg?branch=master)](https://codecov.io/github/fvafrCU/rBDAT?branch=master)
-->
[![CRAN_Status_Badge](https://www.r-pkg.org/badges/version/rBDAT)](https://cran.r-project.org/package=rBDAT)
[![RStudio_downloads_monthly](https://cranlogs.r-pkg.org/badges/rBDAT)](https://cran.r-project.org/package=rBDAT)
[![RStudio_downloads_total](https://cranlogs.r-pkg.org/badges/grand-total/rBDAT)](https://cran.r-project.org/package=rBDAT)

<!-- README.md is generated from README.Rmd. Please edit that file -->



# rBDAT
## Installation
You can install rBDAT from gitlab via:


```r
if (! require("remotes")) install.packages("remotes")
remotes::install_gitlab("vochr/rBDAT", build_vignettes = TRUE)
```

## Introduction
After installation, see the help page:

```r
help("rBDAT-package", package = "rBDAT")
```

```
#> Implementation of BDAT Tree Taper Fortran Functions in R
#> 
#> Description:
#> 
#>      Implementing the BDAT tree taper Fortran routines to be available
#>      in R to calculate diameters, volume, assortments, double bark
#>      thickness and biomass for different tree species based on tree
#>      characteristics and sorting information.
```

or read the vignette 

```r
vignette("rbdatpro", package = "rBDAT")
```


