// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/smartr.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Rcpp_logSumExp
double Rcpp_logSumExp(const arma::vec& log_x);
static SEXP _smartr_Rcpp_logSumExp_try(SEXP log_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type log_x(log_xSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_logSumExp(log_x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _smartr_Rcpp_logSumExp(SEXP log_xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_smartr_Rcpp_logSumExp_try(log_xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _smartr_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("double(*Rcpp_logSumExp)(const arma::vec&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _smartr_RcppExport_registerCCallable() { 
    R_RegisterCCallable("smartr", "_smartr_Rcpp_logSumExp", (DL_FUNC)_smartr_Rcpp_logSumExp_try);
    R_RegisterCCallable("smartr", "_smartr_RcppExport_validate", (DL_FUNC)_smartr_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_smartr_Rcpp_logSumExp", (DL_FUNC) &_smartr_Rcpp_logSumExp, 1},
    {"_smartr_RcppExport_registerCCallable", (DL_FUNC) &_smartr_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_smartr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
