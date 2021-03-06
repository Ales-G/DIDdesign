% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/did-data_prep.R
\name{did_panel_data}
\alias{did_panel_data}
\title{Prepare data for the DID design with panel data}
\usage{
did_panel_data(
  var_outcome,
  var_treat,
  var_covars,
  var_cluster,
  id_unit,
  id_time,
  data
)
}
\arguments{
\item{var_outcome}{A variable name of the outcome.}

\item{var_treat}{A variable name of the time-varying treatment.}

\item{var_covars}{A vector of variables names used as covariates.
This should be left as \code{NULL} is no covariates are specified in formula.}

\item{id_time}{A variable name of the time index.}

\item{data}{A data frame.}
}
\value{
A data frame.
}
\description{
Prepare data for the DID design with panel data
}
\keyword{internal}
