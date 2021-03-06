
#' Internal function for subsampling
#'
#' if nrow(x) > subsample_over, subsample with the minimum needed to get a
#' data.frame smaller than subsample_over
#' @param x data.frame to be subsampled
#' @param subsample_over maximum number of row accepted
#'
subsample <- function(x,subsample_over){
  x_nrow <- nrow(x)
  x_ind <-  1:x_nrow
  x$x_ind <- x_ind

  if( x_nrow > subsample_over){
    subsample_by <- ceiling(x_nrow/subsample_over)
    message(paste("Number of data > ",subsample_over,", subsampling by ",subsample_by,".",sep=""))
    keep <- (x_ind %% subsample_by) == 1
    subsample_ind <- ifelse(keep,(x_ind %/% subsample_by)+1,NA)
    x$subsample_ind <- subsample_ind
  } else {
    subsample_by <- 1
    x$subsample_ind <- x_ind
  }
  list(x = x, by = subsample_by)
}

#' Internal function for subsampling
#'
#' merge subsampled data.frame df with fulldata to add segmentation information
#' on the full data.frame
#' @param df subsampled data.frame with additional information on segmentation
#' @param fulldata full data.frame
#' @param colname column name
subsample_rename <- function(df, fulldata, colname){
  translate_ind  <- with(fulldata,data.frame(x_ind,subsample_ind))
  translate_ind <- with(translate_ind, translate_ind[!is.na(subsample_ind),])
  var_join <- c("subsample_ind" = paste(colname) )
  df <- dplyr::right_join(translate_ind,df,var_join)
  df[,colname] <- df$x_ind
  df$x_ind <- NULL
  df
}
