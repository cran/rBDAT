% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/getHeight.R
\name{getHeight}
\alias{getHeight}
\alias{getHeight.data.frame}
\alias{getHeight.list}
\alias{getHeight.datBDAT}
\title{Get height of given diameter inside tree taper}
\usage{
getHeight(tree, ...)

\method{getHeight}{data.frame}(tree, Dx = NULL, bark = TRUE, mapping = NULL, ...)

\method{getHeight}{list}(tree, Dx = NULL, bark = TRUE, mapping = NULL, ...)

\method{getHeight}{datBDAT}(tree, Dx = NULL, bark = TRUE, mapping = NULL, ...)
}
\arguments{
\item{tree}{either a data.frame or a list containing the variables needed to
decribe a tree, i.e. spp, D1, H, and optionally H1, D2, H2. See
\code{\link{buildTree}} for details and parameter \code{mapping} for
 mapping of variable names}

\item{...}{passing arguments to methods.}

\item{Dx}{diameter of tree for which height is required; defaults to NULL}

\item{bark}{logical, if TRUE given diameter \code{Dx} is considered over
bark, if FALSE diameter is considered to be under bark. Coerced to logical by
\code{\link{as.logical}(bark[1])}.}

\item{mapping}{mapping of variable names in case a data.frame is given into
parameter \code{tree} between colnames(\code{tree}) and required parameter
names.}
}
\value{
a matrix with one row for each tree and one column for each \code{Dx}
given, holding the height of provided diameter \code{Dx} inside stem taper.
The matrix is simplified by \code{[,,drop=TRUE]}, especially if
\code{Dx=NULL}.
}
\description{
this function calculates the height of a given diameter inside
or outside bark for a given tree
}
\details{
see \code{\link{buildTree}} for how to specify a tree object
}
\section{Methods (by class)}{
\itemize{
\item \code{getHeight(data.frame)}: transforming \code{data.frame} before calling
\code{getHeight} using \code{buildTree}

\item \code{getHeight(list)}: transforming \code{list} before calling
\code{getHeight} using \code{buildTree}

\item \code{getHeight(datBDAT)}: class method for class \code{datBDAT}

}}
\examples{
tree <- data.frame(spp = c(1, 1), D1 = c(30, 25), H = c(25, 20), Dx = c(7, 7))
getHeight(tree, bark = TRUE)
getHeight(tree, bark = FALSE)

tree <- data.frame(BDATCode = c(1, 1), dbh = c(30, 25), h = c(25, 20), Dx = c(7, 7))
getHeight(tree, bark = TRUE, mapping = c("BDATCode" = "spp", "dbh" = "D1", "h" = "H"))

tree <- data.frame(BDATCode = c(1, 1), dbh = c(30, 25), h = c(25, 20))
Dx <- c(7, 5)
getHeight(tree, Dx = Dx, bark = TRUE, mapping = c("BDATCode" = "spp", "dbh" = "D1", "h" = "H"))

tree <- data.frame(spp = c(1, 1), D1 = c(30, 25), H = c(25, 20), Dx = c(7, 7))
getHeight(tree, Dx = c(1:5), bark = TRUE)
}
