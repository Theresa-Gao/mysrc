// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// shrinkage
arma::mat shrinkage(const arma::mat& a, double kappa);
RcppExport SEXP _CNIF2_shrinkage(SEXP aSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(shrinkage(a, kappa));
    return rcpp_result_gen;
END_RCPP
}
// covsel
arma::mat covsel(const arma::mat& d, const int max_iter, double alpha, double lambda, double rho);
RcppExport SEXP _CNIF2_covsel(SEXP dSEXP, SEXP max_iterSEXP, SEXP alphaSEXP, SEXP lambdaSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(covsel(d, max_iter, alpha, lambda, rho));
    return rcpp_result_gen;
END_RCPP
}
// lasso
arma::vec lasso(const arma::mat& A, const arma::vec& b, const int max_iter, double alpha, double lambda, double rho);
RcppExport SEXP _CNIF2_lasso(SEXP ASEXP, SEXP bSEXP, SEXP max_iterSEXP, SEXP alphaSEXP, SEXP lambdaSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(lasso(A, b, max_iter, alpha, lambda, rho));
    return rcpp_result_gen;
END_RCPP
}
// ca_mean
arma::mat ca_mean(const arma::mat& x);
RcppExport SEXP _CNIF2_ca_mean(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ca_mean(x));
    return rcpp_result_gen;
END_RCPP
}
// ca_var
arma::mat ca_var(const arma::mat& x);
RcppExport SEXP _CNIF2_ca_var(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ca_var(x));
    return rcpp_result_gen;
END_RCPP
}
// center_scale
arma::mat center_scale(const arma::mat& x);
RcppExport SEXP _CNIF2_center_scale(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(center_scale(x));
    return rcpp_result_gen;
END_RCPP
}
// initial_sem_nofix
arma::mat initial_sem_nofix(const arma::mat& data, const arma::uvec& variable, double rho, double lambda, double prec, int max_iter);
RcppExport SEXP _CNIF2_initial_sem_nofix(SEXP dataSEXP, SEXP variableSEXP, SEXP rhoSEXP, SEXP lambdaSEXP, SEXP precSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type variable(variableSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type prec(precSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(initial_sem_nofix(data, variable, rho, lambda, prec, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// initial_sem
arma::mat initial_sem(const arma::mat& data, const arma::uvec& fixed, const arma::uvec& variable, double rho, double lambda, double prec, int max_iter);
RcppExport SEXP _CNIF2_initial_sem(SEXP dataSEXP, SEXP fixedSEXP, SEXP variableSEXP, SEXP rhoSEXP, SEXP lambdaSEXP, SEXP precSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type fixed(fixedSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type variable(variableSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type prec(precSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(initial_sem(data, fixed, variable, rho, lambda, prec, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// score_function_regression_with_fix
double score_function_regression_with_fix(int node, const arma::uvec& parents, const arma::uvec& fixed, const arma::mat& data);
RcppExport SEXP _CNIF2_score_function_regression_with_fix(SEXP nodeSEXP, SEXP parentsSEXP, SEXP fixedSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type parents(parentsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type fixed(fixedSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(score_function_regression_with_fix(node, parents, fixed, data));
    return rcpp_result_gen;
END_RCPP
}
// score_function_regression
double score_function_regression(int node, const arma::uvec& parents, const arma::mat& data);
RcppExport SEXP _CNIF2_score_function_regression(SEXP nodeSEXP, SEXP parentsSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type parents(parentsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(score_function_regression(node, parents, data));
    return rcpp_result_gen;
END_RCPP
}
// get_cycles
std::map<int, std::vector<int> > get_cycles(const arma::mat& adjMat);
RcppExport SEXP _CNIF2_get_cycles(SEXP adjMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type adjMat(adjMatSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cycles(adjMat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CNIF2_shrinkage", (DL_FUNC) &_CNIF2_shrinkage, 2},
    {"_CNIF2_covsel", (DL_FUNC) &_CNIF2_covsel, 5},
    {"_CNIF2_lasso", (DL_FUNC) &_CNIF2_lasso, 6},
    {"_CNIF2_ca_mean", (DL_FUNC) &_CNIF2_ca_mean, 1},
    {"_CNIF2_ca_var", (DL_FUNC) &_CNIF2_ca_var, 1},
    {"_CNIF2_center_scale", (DL_FUNC) &_CNIF2_center_scale, 1},
    {"_CNIF2_initial_sem_nofix", (DL_FUNC) &_CNIF2_initial_sem_nofix, 6},
    {"_CNIF2_initial_sem", (DL_FUNC) &_CNIF2_initial_sem, 7},
    {"_CNIF2_score_function_regression_with_fix", (DL_FUNC) &_CNIF2_score_function_regression_with_fix, 4},
    {"_CNIF2_score_function_regression", (DL_FUNC) &_CNIF2_score_function_regression, 3},
    {"_CNIF2_get_cycles", (DL_FUNC) &_CNIF2_get_cycles, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_CNIF2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}