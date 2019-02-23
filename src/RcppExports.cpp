// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// loss_loop
arma::mat loss_loop(const arma::mat& X, const arma::vec& y, const arma::vec& par, const arma::uvec& id_subject, const arma::uvec& uid, const arma::uvec& is_na, const int& nobs, const int& p);
RcppExport SEXP _DIDdesign_loss_loop(SEXP XSEXP, SEXP ySEXP, SEXP parSEXP, SEXP id_subjectSEXP, SEXP uidSEXP, SEXP is_naSEXP, SEXP nobsSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type id_subject(id_subjectSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type uid(uidSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type is_na(is_naSEXP);
    Rcpp::traits::input_parameter< const int& >::type nobs(nobsSEXP);
    Rcpp::traits::input_parameter< const int& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(loss_loop(X, y, par, id_subject, uid, is_na, nobs, p));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DIDdesign_loss_loop", (DL_FUNC) &_DIDdesign_loss_loop, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_DIDdesign(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}