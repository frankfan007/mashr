// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// calc_lik_rcpp
Rcpp::List calc_lik_rcpp(Rcpp::NumericMatrix b_mat, Rcpp::NumericMatrix s_mat, Rcpp::NumericMatrix v_mat, Rcpp::NumericVector U_3d, bool logd, bool common_cov);
RcppExport SEXP mashr_calc_lik_rcpp(SEXP b_matSEXP, SEXP s_matSEXP, SEXP v_matSEXP, SEXP U_3dSEXP, SEXP logdSEXP, SEXP common_covSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type b_mat(b_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type s_mat(s_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type v_mat(v_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type U_3d(U_3dSEXP);
    Rcpp::traits::input_parameter< bool >::type logd(logdSEXP);
    Rcpp::traits::input_parameter< bool >::type common_cov(common_covSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_lik_rcpp(b_mat, s_mat, v_mat, U_3d, logd, common_cov));
    return rcpp_result_gen;
END_RCPP
}
// calc_post_rcpp
Rcpp::List calc_post_rcpp(Rcpp::NumericMatrix b_mat, Rcpp::NumericMatrix s_mat, Rcpp::NumericMatrix v_mat, Rcpp::NumericVector U_3d, Rcpp::NumericMatrix posterior_weights, bool common_cov);
RcppExport SEXP mashr_calc_post_rcpp(SEXP b_matSEXP, SEXP s_matSEXP, SEXP v_matSEXP, SEXP U_3dSEXP, SEXP posterior_weightsSEXP, SEXP common_covSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type b_mat(b_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type s_mat(s_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type v_mat(v_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type U_3d(U_3dSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type posterior_weights(posterior_weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type common_cov(common_covSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_post_rcpp(b_mat, s_mat, v_mat, U_3d, posterior_weights, common_cov));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"mashr_calc_lik_rcpp", (DL_FUNC) &mashr_calc_lik_rcpp, 6},
    {"mashr_calc_post_rcpp", (DL_FUNC) &mashr_calc_post_rcpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_mashr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
