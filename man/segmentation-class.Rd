% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/segmentation_class.R
\name{segmentation-class}
\alias{segmentation-class}
\alias{print.segmentation}
\alias{plot.segmentation}
\alias{likelihood.segmentation}
\alias{plot_likelihood}
\alias{get_likelihood}
\alias{logLik.segmentation}
\alias{plot_BIC}
\alias{BIC.segmentation}
\alias{stateplot}
\alias{states}
\alias{segment}
\alias{augment.segmentation}
\alias{segmap}
\alias{stationarity}
\title{segmentation class description}
\usage{
\method{print}{segmentation}(x, max.level = 1, ...)

\method{plot}{segmentation}(x, nseg = NULL, ncluster = NULL,
  interactive = F, xcol = "indice", order, ...)

\method{likelihood}{segmentation}(x, ...)

plot_likelihood(x)

get_likelihood(x)

\method{logLik}{segmentation}(object, ...)

plot_BIC(x)

\method{BIC}{segmentation}(object, ...)

stateplot(x, nseg = NULL, ncluster = NULL, order = NULL)

states(x, nseg = NULL, ncluster = NULL)

segment(x, nseg = NULL, ncluster = NULL)

\method{augment}{segmentation}(x, nseg = NULL, ncluster = NULL,
  colname_state = "state", ...)

segmap(x, interactive = F, nseg = NULL, ncluster = NULL, html = F,
  scale = 100, width = 400, height = 400, order = NULL, pointsize = 1,
  linesize = 0.5, ...)

stationarity(x, nseg = NULL, ncluster = NULL, ...)
}
\arguments{
\item{x}{a \code{segmentation} object generated by
\code{\link{segmentation}}}

\item{max.level}{argument to be passed to utils::str()}

\item{...}{additional arguments}

\item{nseg}{number of segment chosen}

\item{ncluster}{number of classes chosen}

\item{interactive}{whether plot are interactive (dygraphs/leaflet) or not (ggplot2)}

\item{xcol}{column for x axis. can be POSIXct}

\item{order}{should cluster be ordered}

\item{object}{a segmentation-class object, created by segclust.}

\item{colname_state}{column name for the added state column}

\item{html}{whether htmltools::tagList should be applied on the returned object
object for integrating in html pages}

\item{scale}{for dividing coordinates to have compatibility with leaflet}

\item{width}{width}

\item{height}{height}

\item{pointsize}{size of points}

\item{linesize}{size of lines}

\item{max.level}{argument to be passed to utils::str()}
}
\description{
segmentation class description

\code{print.segmentation} prints object of \code{segmentation} class

\code{plot.segmentation} plot object of \code{segmentation} class
- wrapper for \code{\link{plot_segm}}

\code{likelihood.segmentation} deprecated function for plotting likelihood estimates of \code{segmentation} object. Now use \link{plot_likelihood}.

\code{plot_likelihood} plot likelihood estimates of a \code{segmentation} object
- works only for picard segmentation.

\code{get_likelihood} returns likelihood estimates of a \code{segmentation} object. Deprecated, now use \link{logLik.segmentation}.

\code{logLik.segmentation} returns log-likelihood estimates of a \code{segmentation} object

\code{plot_BIC} plot BIC estimates of a \code{segmentation} object
- works only for segclust algorithm.

\code{BIC} returns BIC estimates of a \code{segmentation} object when
segmentation/clustering has been run.

\code{stateplot} plot state distribution of a \code{segmentation} object

\code{states} return data.frame with states statistics a \code{segmentation} object

\code{segment} return data.frame with segment information of a \code{segmentation} object

\code{augment.segmentation} return data.frame with original data and state information of a \code{segmentation} object

\code{segmap} create maps with object of \code{segmentation} class
  (interpreting latitude/longitude)

\code{stationarity} extract mean and sd for each tier of segment of a
\code{segmentation} class object
}
