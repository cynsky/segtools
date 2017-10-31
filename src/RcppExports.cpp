// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// DynProg_algo_cpp
List DynProg_algo_cpp(arma::mat matD, int Kmax);
RcppExport SEXP _segtools_DynProg_algo_cpp(SEXP matDSEXP, SEXP KmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type matD(matDSEXP);
    Rcpp::traits::input_parameter< int >::type Kmax(KmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(DynProg_algo_cpp(matD, Kmax));
    return rcpp_result_gen;
END_RCPP
}
// logdens_simultanee_cpp
NumericVector logdens_simultanee_cpp(arma::mat xk, arma::mat mu, arma::mat sigma, arma::vec prop);
RcppExport SEXP _segtools_logdens_simultanee_cpp(SEXP xkSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP propSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xk(xkSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prop(propSEXP);
    rcpp_result_gen = Rcpp::wrap(logdens_simultanee_cpp(xk, mu, sigma, prop));
    return rcpp_result_gen;
END_RCPP
}
// apply_rowSums
arma::mat apply_rowSums(arma::mat rupt, arma::mat x);
RcppExport SEXP _segtools_apply_rowSums(SEXP ruptSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type rupt(ruptSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(apply_rowSums(rupt, x));
    return rcpp_result_gen;
END_RCPP
}
// colsums_sapply
arma::mat colsums_sapply(int i, arma::mat rupt, arma::mat x, arma::mat mu, arma::mat tau);
RcppExport SEXP _segtools_colsums_sapply(SEXP iSEXP, SEXP ruptSEXP, SEXP xSEXP, SEXP muSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rupt(ruptSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(colsums_sapply(i, rupt, x, mu, tau));
    return rcpp_result_gen;
END_RCPP
}
// arma_repmat
arma::mat arma_repmat(arma::mat A, int n, int m);
RcppExport SEXP _segtools_arma_repmat(SEXP ASEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_repmat(A, n, m));
    return rcpp_result_gen;
END_RCPP
}
// Gmixt_algo_cpp
arma::mat Gmixt_algo_cpp(arma::vec zi, arma::vec lgi, int P, arma::vec mvec, arma::vec wk, arma::vec svec, arma::vec prop);
RcppExport SEXP _segtools_Gmixt_algo_cpp(SEXP ziSEXP, SEXP lgiSEXP, SEXP PSEXP, SEXP mvecSEXP, SEXP wkSEXP, SEXP svecSEXP, SEXP propSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type zi(ziSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lgi(lgiSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mvec(mvecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type wk(wkSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type svec(svecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prop(propSEXP);
    rcpp_result_gen = Rcpp::wrap(Gmixt_algo_cpp(zi, lgi, P, mvec, wk, svec, prop));
    return rcpp_result_gen;
END_RCPP
}
// Gmixt_simultanee_fullcpp
arma::mat Gmixt_simultanee_fullcpp(arma::mat Don, int lmin, arma::rowvec prop, arma::mat mu, arma::mat s);
RcppExport SEXP _segtools_Gmixt_simultanee_fullcpp(SEXP DonSEXP, SEXP lminSEXP, SEXP propSEXP, SEXP muSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Don(DonSEXP);
    Rcpp::traits::input_parameter< int >::type lmin(lminSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type prop(propSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(Gmixt_simultanee_fullcpp(Don, lmin, prop, mu, s));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_segtools_DynProg_algo_cpp", (DL_FUNC) &_segtools_DynProg_algo_cpp, 2},
    {"_segtools_logdens_simultanee_cpp", (DL_FUNC) &_segtools_logdens_simultanee_cpp, 4},
    {"_segtools_apply_rowSums", (DL_FUNC) &_segtools_apply_rowSums, 2},
    {"_segtools_colsums_sapply", (DL_FUNC) &_segtools_colsums_sapply, 5},
    {"_segtools_arma_repmat", (DL_FUNC) &_segtools_arma_repmat, 3},
    {"_segtools_Gmixt_algo_cpp", (DL_FUNC) &_segtools_Gmixt_algo_cpp, 7},
    {"_segtools_Gmixt_simultanee_fullcpp", (DL_FUNC) &_segtools_Gmixt_simultanee_fullcpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_segtools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
