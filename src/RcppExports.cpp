// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// RandomMatrixCpp
NumericMatrix RandomMatrixCpp(IntegerVector dim, int max_value);
RcppExport SEXP GibbsRF_RandomMatrixCpp(SEXP dimSEXP, SEXP max_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type max_value(max_valueSEXP);
    rcpp_result_gen = Rcpp::wrap(RandomMatrixCpp(dim, max_value));
    return rcpp_result_gen;
END_RCPP
}
// ConditionalProbs
NumericVector ConditionalProbs(NumericMatrix X, IntegerVector position, int max_value, NumericMatrix cMat, NumericMatrix vMat, NumericVector V);
RcppExport SEXP GibbsRF_ConditionalProbs(SEXP XSEXP, SEXP positionSEXP, SEXP max_valueSEXP, SEXP cMatSEXP, SEXP vMatSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< int >::type max_value(max_valueSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cMat(cMatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vMat(vMatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(ConditionalProbs(X, position, max_value, cMat, vMat, V));
    return rcpp_result_gen;
END_RCPP
}
// rGRF
NumericMatrix rGRF(NumericMatrix cMat, NumericMatrix vMat, NumericVector V, int max_value, int macrosteps, NumericMatrix initial);
RcppExport SEXP GibbsRF_rGRF(SEXP cMatSEXP, SEXP vMatSEXP, SEXP VSEXP, SEXP max_valueSEXP, SEXP macrostepsSEXP, SEXP initialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type cMat(cMatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vMat(vMatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< int >::type max_value(max_valueSEXP);
    Rcpp::traits::input_parameter< int >::type macrosteps(macrostepsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type initial(initialSEXP);
    rcpp_result_gen = Rcpp::wrap(rGRF(cMat, vMat, V, max_value, macrosteps, initial));
    return rcpp_result_gen;
END_RCPP
}
// log_plik
double log_plik(NumericMatrix X, NumericMatrix cMat, NumericMatrix vMat, NumericVector V, int max_value);
RcppExport SEXP GibbsRF_log_plik(SEXP XSEXP, SEXP cMatSEXP, SEXP vMatSEXP, SEXP VSEXP, SEXP max_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cMat(cMatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vMat(vMatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< int >::type max_value(max_valueSEXP);
    rcpp_result_gen = Rcpp::wrap(log_plik(X, cMat, vMat, V, max_value));
    return rcpp_result_gen;
END_RCPP
}
// DifHistogramcpp
NumericMatrix DifHistogramcpp(NumericMatrix X, NumericMatrix cMat, int G);
RcppExport SEXP GibbsRF_DifHistogramcpp(SEXP XSEXP, SEXP cMatSEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cMat(cMatSEXP);
    Rcpp::traits::input_parameter< int >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(DifHistogramcpp(X, cMat, G));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"GibbsRF_RandomMatrixCpp", (DL_FUNC) &GibbsRF_RandomMatrixCpp, 2},
    {"GibbsRF_ConditionalProbs", (DL_FUNC) &GibbsRF_ConditionalProbs, 6},
    {"GibbsRF_rGRF", (DL_FUNC) &GibbsRF_rGRF, 6},
    {"GibbsRF_log_plik", (DL_FUNC) &GibbsRF_log_plik, 5},
    {"GibbsRF_DifHistogramcpp", (DL_FUNC) &GibbsRF_DifHistogramcpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_GibbsRF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
