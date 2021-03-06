% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/function_states_plot.R
\name{plot_states}
\alias{plot_states}
\title{Plot states statistics}
\usage{
plot_states(outputs, diag.var, position_width = 0.3, order = F)
}
\arguments{
\item{outputs}{outputs of the segmentation  or segclust algorithm for one number of segment}

\item{diag.var}{names of the variables on which statistics are calculated}

\item{position_width}{width between different model if several models are compared}

\item{order}{should cluster be ordered}
}
\value{
a graph
}
\description{
\code{plot_states} plot states statistics
}
\examples{
\dontrun{plot_states(data_segm)}
}
