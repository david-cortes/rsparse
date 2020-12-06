// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// check_is_seq
bool check_is_seq(Rcpp::IntegerVector indices);
RcppExport SEXP _rsparse_check_is_seq(SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(check_is_seq(indices));
    return rcpp_result_gen;
END_RCPP
}
// copy_csr_rows
Rcpp::List copy_csr_rows(Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::IntegerVector rows_take);
RcppExport SEXP _rsparse_copy_csr_rows(SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP rows_takeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rows_take(rows_takeSEXP);
    rcpp_result_gen = Rcpp::wrap(copy_csr_rows(indptr, indices, values, rows_take));
    return rcpp_result_gen;
END_RCPP
}
// copy_csr_rows_col_seq
Rcpp::List copy_csr_rows_col_seq(Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::IntegerVector rows_take, Rcpp::IntegerVector cols_take);
RcppExport SEXP _rsparse_copy_csr_rows_col_seq(SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP rows_takeSEXP, SEXP cols_takeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rows_take(rows_takeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cols_take(cols_takeSEXP);
    rcpp_result_gen = Rcpp::wrap(copy_csr_rows_col_seq(indptr, indices, values, rows_take, cols_take));
    return rcpp_result_gen;
END_RCPP
}
// copy_csr_arbitrary
Rcpp::List copy_csr_arbitrary(Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::IntegerVector rows_take, Rcpp::IntegerVector cols_take);
RcppExport SEXP _rsparse_copy_csr_arbitrary(SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP rows_takeSEXP, SEXP cols_takeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rows_take(rows_takeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cols_take(cols_takeSEXP);
    rcpp_result_gen = Rcpp::wrap(copy_csr_arbitrary(indptr, indices, values, rows_take, cols_take));
    return rcpp_result_gen;
END_RCPP
}
// get_ftrl_weights
NumericVector get_ftrl_weights(const List& R_model);
RcppExport SEXP _rsparse_get_ftrl_weights(SEXP R_modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type R_model(R_modelSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ftrl_weights(R_model));
    return rcpp_result_gen;
END_RCPP
}
// ftrl_partial_fit
NumericVector ftrl_partial_fit(const S4& m, const NumericVector& y, const List& R_model, const NumericVector& weights, int do_update, int n_threads);
RcppExport SEXP _rsparse_ftrl_partial_fit(SEXP mSEXP, SEXP ySEXP, SEXP R_modelSEXP, SEXP weightsSEXP, SEXP do_updateSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const S4& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type R_model(R_modelSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type do_update(do_updateSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(ftrl_partial_fit(m, y, R_model, weights, do_update, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// fm_create_param
SEXP fm_create_param(float learning_rate_w, float learning_rate_v, int rank, float lambda_w, float lambda_v, Rcpp::IntegerVector& w0_R, Rcpp::IntegerVector& w_R, Rcpp::IntegerMatrix& v_R, Rcpp::IntegerVector& grad_w2_R, Rcpp::IntegerMatrix& grad_v2_R, const Rcpp::String task, int intercept);
RcppExport SEXP _rsparse_fm_create_param(SEXP learning_rate_wSEXP, SEXP learning_rate_vSEXP, SEXP rankSEXP, SEXP lambda_wSEXP, SEXP lambda_vSEXP, SEXP w0_RSEXP, SEXP w_RSEXP, SEXP v_RSEXP, SEXP grad_w2_RSEXP, SEXP grad_v2_RSEXP, SEXP taskSEXP, SEXP interceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type learning_rate_w(learning_rate_wSEXP);
    Rcpp::traits::input_parameter< float >::type learning_rate_v(learning_rate_vSEXP);
    Rcpp::traits::input_parameter< int >::type rank(rankSEXP);
    Rcpp::traits::input_parameter< float >::type lambda_w(lambda_wSEXP);
    Rcpp::traits::input_parameter< float >::type lambda_v(lambda_vSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type w0_R(w0_RSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type w_R(w_RSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix& >::type v_R(v_RSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type grad_w2_R(grad_w2_RSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix& >::type grad_v2_R(grad_v2_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String >::type task(taskSEXP);
    Rcpp::traits::input_parameter< int >::type intercept(interceptSEXP);
    rcpp_result_gen = Rcpp::wrap(fm_create_param(learning_rate_w, learning_rate_v, rank, lambda_w, lambda_v, w0_R, w_R, v_R, grad_w2_R, grad_v2_R, task, intercept));
    return rcpp_result_gen;
END_RCPP
}
// fm_create_model
SEXP fm_create_model(SEXP params_ptr);
RcppExport SEXP _rsparse_fm_create_model(SEXP params_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type params_ptr(params_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(fm_create_model(params_ptr));
    return rcpp_result_gen;
END_RCPP
}
// fill_float_matrix_randn
void fill_float_matrix_randn(Rcpp::IntegerMatrix& x, double stdev);
RcppExport SEXP _rsparse_fill_float_matrix_randn(SEXP xSEXP, SEXP stdevSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type stdev(stdevSEXP);
    fill_float_matrix_randn(x, stdev);
    return R_NilValue;
END_RCPP
}
// fill_float_matrix
void fill_float_matrix(Rcpp::IntegerMatrix& x, double val);
RcppExport SEXP _rsparse_fill_float_matrix(SEXP xSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type val(valSEXP);
    fill_float_matrix(x, val);
    return R_NilValue;
END_RCPP
}
// fill_float_vector_randn
void fill_float_vector_randn(Rcpp::IntegerVector& x, double stdev);
RcppExport SEXP _rsparse_fill_float_vector_randn(SEXP xSEXP, SEXP stdevSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type stdev(stdevSEXP);
    fill_float_vector_randn(x, stdev);
    return R_NilValue;
END_RCPP
}
// fill_float_vector
void fill_float_vector(Rcpp::IntegerVector& x, double val);
RcppExport SEXP _rsparse_fill_float_vector(SEXP xSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type val(valSEXP);
    fill_float_vector(x, val);
    return R_NilValue;
END_RCPP
}
// fm_partial_fit
Rcpp::NumericVector fm_partial_fit(SEXP ptr, const Rcpp::S4& X, const Rcpp::NumericVector& y, const Rcpp::NumericVector& w, int n_threads, int do_update);
RcppExport SEXP _rsparse_fm_partial_fit(SEXP ptrSEXP, SEXP XSEXP, SEXP ySEXP, SEXP wSEXP, SEXP n_threadsSEXP, SEXP do_updateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< int >::type do_update(do_updateSEXP);
    rcpp_result_gen = Rcpp::wrap(fm_partial_fit(ptr, X, y, w, n_threads, do_update));
    return rcpp_result_gen;
END_RCPP
}
// is_invalid_ptr
int is_invalid_ptr(SEXP sexp_ptr);
RcppExport SEXP _rsparse_is_invalid_ptr(SEXP sexp_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp_ptr(sexp_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(is_invalid_ptr(sexp_ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_glove_create
SEXP cpp_glove_create(const List& params);
RcppExport SEXP _rsparse_cpp_glove_create(SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_glove_create(params));
    return rcpp_result_gen;
END_RCPP
}
// cpp_glove_partial_fit
double cpp_glove_partial_fit(SEXP ptr, const IntegerVector& x_irow, const IntegerVector& x_icol, const NumericVector& x_val, const IntegerVector& iter_order, int n_threads);
RcppExport SEXP _rsparse_cpp_glove_partial_fit(SEXP ptrSEXP, SEXP x_irowSEXP, SEXP x_icolSEXP, SEXP x_valSEXP, SEXP iter_orderSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type x_irow(x_irowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type x_icol(x_icolSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x_val(x_valSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type iter_order(iter_orderSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_glove_partial_fit(ptr, x_irow, x_icol, x_val, iter_order, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// csr_dense_tcrossprod
Rcpp::NumericMatrix csr_dense_tcrossprod(const Rcpp::S4& x_csr_r, const arma::Mat<double>& y_transposed, int num_threads);
RcppExport SEXP _rsparse_csr_dense_tcrossprod(SEXP x_csr_rSEXP, SEXP y_transposedSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type x_csr_r(x_csr_rSEXP);
    Rcpp::traits::input_parameter< const arma::Mat<double>& >::type y_transposed(y_transposedSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(csr_dense_tcrossprod(x_csr_r, y_transposed, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// dense_csc_prod
Rcpp::NumericMatrix dense_csc_prod(const Rcpp::NumericMatrix& x_r, const Rcpp::S4& y_csc_r, int num_threads);
RcppExport SEXP _rsparse_dense_csc_prod(SEXP x_rSEXP, SEXP y_csc_rSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x_r(x_rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type y_csc_r(y_csc_rSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(dense_csc_prod(x_r, y_csc_r, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// als_implicit_double
double als_implicit_double(const Rcpp::S4& m_csc_r, arma::mat& X, arma::mat& Y, const arma::mat& XtX, double lambda, unsigned n_threads, unsigned solver, unsigned cg_steps, bool is_x_bias_last_row);
RcppExport SEXP _rsparse_als_implicit_double(SEXP m_csc_rSEXP, SEXP XSEXP, SEXP YSEXP, SEXP XtXSEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP, SEXP solverSEXP, SEXP cg_stepsSEXP, SEXP is_x_bias_last_rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csc_r(m_csc_rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< unsigned >::type cg_steps(cg_stepsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_x_bias_last_row(is_x_bias_last_rowSEXP);
    rcpp_result_gen = Rcpp::wrap(als_implicit_double(m_csc_r, X, Y, XtX, lambda, n_threads, solver, cg_steps, is_x_bias_last_row));
    return rcpp_result_gen;
END_RCPP
}
// als_implicit_float
double als_implicit_float(const Rcpp::S4& m_csc_r, Rcpp::S4& X_, Rcpp::S4& Y_, Rcpp::S4& XtX_, double lambda, unsigned n_threads, unsigned solver, unsigned cg_steps, bool is_x_bias_last_row);
RcppExport SEXP _rsparse_als_implicit_float(SEXP m_csc_rSEXP, SEXP X_SEXP, SEXP Y_SEXP, SEXP XtX_SEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP, SEXP solverSEXP, SEXP cg_stepsSEXP, SEXP is_x_bias_last_rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csc_r(m_csc_rSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type XtX_(XtX_SEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< unsigned >::type cg_steps(cg_stepsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_x_bias_last_row(is_x_bias_last_rowSEXP);
    rcpp_result_gen = Rcpp::wrap(als_implicit_float(m_csc_r, X_, Y_, XtX_, lambda, n_threads, solver, cg_steps, is_x_bias_last_row));
    return rcpp_result_gen;
END_RCPP
}
// als_explicit_double
double als_explicit_double(const Rcpp::S4& m_csc_r, arma::mat& X, arma::mat& Y, arma::mat& X_implicit, const arma::mat& XtX_implicit, const arma::Col<double>& cnt_X, double lambda, unsigned n_threads, unsigned solver, unsigned cg_steps, const bool dynamic_lambda, const bool with_implicit_features, const double weight_implicit, const bool with_biases, bool is_x_bias_last_row);
RcppExport SEXP _rsparse_als_explicit_double(SEXP m_csc_rSEXP, SEXP XSEXP, SEXP YSEXP, SEXP X_implicitSEXP, SEXP XtX_implicitSEXP, SEXP cnt_XSEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP, SEXP solverSEXP, SEXP cg_stepsSEXP, SEXP dynamic_lambdaSEXP, SEXP with_implicit_featuresSEXP, SEXP weight_implicitSEXP, SEXP with_biasesSEXP, SEXP is_x_bias_last_rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csc_r(m_csc_rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X_implicit(X_implicitSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type XtX_implicit(XtX_implicitSEXP);
    Rcpp::traits::input_parameter< const arma::Col<double>& >::type cnt_X(cnt_XSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< unsigned >::type cg_steps(cg_stepsSEXP);
    Rcpp::traits::input_parameter< const bool >::type dynamic_lambda(dynamic_lambdaSEXP);
    Rcpp::traits::input_parameter< const bool >::type with_implicit_features(with_implicit_featuresSEXP);
    Rcpp::traits::input_parameter< const double >::type weight_implicit(weight_implicitSEXP);
    Rcpp::traits::input_parameter< const bool >::type with_biases(with_biasesSEXP);
    Rcpp::traits::input_parameter< bool >::type is_x_bias_last_row(is_x_bias_last_rowSEXP);
    rcpp_result_gen = Rcpp::wrap(als_explicit_double(m_csc_r, X, Y, X_implicit, XtX_implicit, cnt_X, lambda, n_threads, solver, cg_steps, dynamic_lambda, with_implicit_features, weight_implicit, with_biases, is_x_bias_last_row));
    return rcpp_result_gen;
END_RCPP
}
// als_explicit_float
double als_explicit_float(const Rcpp::S4& m_csc_r, Rcpp::S4& X_, Rcpp::S4& Y_, const Rcpp::S4& X_implicit_, const Rcpp::S4& XtX_implicit_, const Rcpp::S4& cnt_X_, double lambda, unsigned n_threads, unsigned solver, unsigned cg_steps, const bool dynamic_lambda, const bool with_implicit_features, const float weight_implicit, const bool with_biases, bool is_x_bias_last_row);
RcppExport SEXP _rsparse_als_explicit_float(SEXP m_csc_rSEXP, SEXP X_SEXP, SEXP Y_SEXP, SEXP X_implicit_SEXP, SEXP XtX_implicit_SEXP, SEXP cnt_X_SEXP, SEXP lambdaSEXP, SEXP n_threadsSEXP, SEXP solverSEXP, SEXP cg_stepsSEXP, SEXP dynamic_lambdaSEXP, SEXP with_implicit_featuresSEXP, SEXP weight_implicitSEXP, SEXP with_biasesSEXP, SEXP is_x_bias_last_rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csc_r(m_csc_rSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type X_implicit_(X_implicit_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type XtX_implicit_(XtX_implicit_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type cnt_X_(cnt_X_SEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< unsigned >::type cg_steps(cg_stepsSEXP);
    Rcpp::traits::input_parameter< const bool >::type dynamic_lambda(dynamic_lambdaSEXP);
    Rcpp::traits::input_parameter< const bool >::type with_implicit_features(with_implicit_featuresSEXP);
    Rcpp::traits::input_parameter< const float >::type weight_implicit(weight_implicitSEXP);
    Rcpp::traits::input_parameter< const bool >::type with_biases(with_biasesSEXP);
    Rcpp::traits::input_parameter< bool >::type is_x_bias_last_row(is_x_bias_last_rowSEXP);
    rcpp_result_gen = Rcpp::wrap(als_explicit_float(m_csc_r, X_, Y_, X_implicit_, XtX_implicit_, cnt_X_, lambda, n_threads, solver, cg_steps, dynamic_lambda, with_implicit_features, weight_implicit, with_biases, is_x_bias_last_row));
    return rcpp_result_gen;
END_RCPP
}
// initialize_biases_double
double initialize_biases_double(const Rcpp::S4& m_csc_r, const Rcpp::S4& m_csr_r, arma::Col<double>& user_bias, arma::Col<double>& item_bias, double lambda, bool dynamic_lambda, bool non_negative, bool calculate_global_bias);
RcppExport SEXP _rsparse_initialize_biases_double(SEXP m_csc_rSEXP, SEXP m_csr_rSEXP, SEXP user_biasSEXP, SEXP item_biasSEXP, SEXP lambdaSEXP, SEXP dynamic_lambdaSEXP, SEXP non_negativeSEXP, SEXP calculate_global_biasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csc_r(m_csc_rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csr_r(m_csr_rSEXP);
    Rcpp::traits::input_parameter< arma::Col<double>& >::type user_bias(user_biasSEXP);
    Rcpp::traits::input_parameter< arma::Col<double>& >::type item_bias(item_biasSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type dynamic_lambda(dynamic_lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type non_negative(non_negativeSEXP);
    Rcpp::traits::input_parameter< bool >::type calculate_global_bias(calculate_global_biasSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_biases_double(m_csc_r, m_csr_r, user_bias, item_bias, lambda, dynamic_lambda, non_negative, calculate_global_bias));
    return rcpp_result_gen;
END_RCPP
}
// initialize_biases_float
double initialize_biases_float(const Rcpp::S4& m_csc_r, const Rcpp::S4& m_csr_r, Rcpp::S4& user_bias, Rcpp::S4& item_bias, double lambda, bool dynamic_lambda, bool non_negative, bool calculate_global_bias);
RcppExport SEXP _rsparse_initialize_biases_float(SEXP m_csc_rSEXP, SEXP m_csr_rSEXP, SEXP user_biasSEXP, SEXP item_biasSEXP, SEXP lambdaSEXP, SEXP dynamic_lambdaSEXP, SEXP non_negativeSEXP, SEXP calculate_global_biasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csc_r(m_csc_rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type m_csr_r(m_csr_rSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type user_bias(user_biasSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type item_bias(item_biasSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type dynamic_lambda(dynamic_lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type non_negative(non_negativeSEXP);
    Rcpp::traits::input_parameter< bool >::type calculate_global_bias(calculate_global_biasSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_biases_float(m_csc_r, m_csr_r, user_bias, item_bias, lambda, dynamic_lambda, non_negative, calculate_global_bias));
    return rcpp_result_gen;
END_RCPP
}
// deep_copy
SEXP deep_copy(SEXP x);
RcppExport SEXP _rsparse_deep_copy(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(deep_copy(x));
    return rcpp_result_gen;
END_RCPP
}
// rankmf_solver_double
void rankmf_solver_double(const Rcpp::S4& x_r, arma::Mat<double>& W, arma::Mat<double>& H, arma::Col<double>& W2_grad, arma::Col<double>& H2_grad, const Rcpp::S4& user_features_r, const Rcpp::S4& item_features_r, const arma::uword rank, const arma::uword n_updates, double learning_rate, double gamma, double lambda_user, double lambda_item_positive, double lambda_item_negative, const arma::uword n_threads, bool update_items, const arma::uword loss, const arma::uword kernel, arma::uword max_negative_samples, double margin, const arma::uword optimizer, const arma::uword report_progress);
RcppExport SEXP _rsparse_rankmf_solver_double(SEXP x_rSEXP, SEXP WSEXP, SEXP HSEXP, SEXP W2_gradSEXP, SEXP H2_gradSEXP, SEXP user_features_rSEXP, SEXP item_features_rSEXP, SEXP rankSEXP, SEXP n_updatesSEXP, SEXP learning_rateSEXP, SEXP gammaSEXP, SEXP lambda_userSEXP, SEXP lambda_item_positiveSEXP, SEXP lambda_item_negativeSEXP, SEXP n_threadsSEXP, SEXP update_itemsSEXP, SEXP lossSEXP, SEXP kernelSEXP, SEXP max_negative_samplesSEXP, SEXP marginSEXP, SEXP optimizerSEXP, SEXP report_progressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type x_r(x_rSEXP);
    Rcpp::traits::input_parameter< arma::Mat<double>& >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::Mat<double>& >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::Col<double>& >::type W2_grad(W2_gradSEXP);
    Rcpp::traits::input_parameter< arma::Col<double>& >::type H2_grad(H2_gradSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type user_features_r(user_features_rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type item_features_r(item_features_rSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type rank(rankSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type n_updates(n_updatesSEXP);
    Rcpp::traits::input_parameter< double >::type learning_rate(learning_rateSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_user(lambda_userSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_item_positive(lambda_item_positiveSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_item_negative(lambda_item_negativeSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type update_items(update_itemsSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type loss(lossSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type max_negative_samples(max_negative_samplesSEXP);
    Rcpp::traits::input_parameter< double >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type optimizer(optimizerSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type report_progress(report_progressSEXP);
    rankmf_solver_double(x_r, W, H, W2_grad, H2_grad, user_features_r, item_features_r, rank, n_updates, learning_rate, gamma, lambda_user, lambda_item_positive, lambda_item_negative, n_threads, update_items, loss, kernel, max_negative_samples, margin, optimizer, report_progress);
    return R_NilValue;
END_RCPP
}
// rankmf_solver_float
void rankmf_solver_float(const Rcpp::S4& x_r, Rcpp::S4& W, Rcpp::S4& H, Rcpp::S4& W2_grad, Rcpp::S4& H2_grad, const Rcpp::S4& user_features_r, const Rcpp::S4& item_features_r, const arma::uword rank, const arma::uword n_updates, float learning_rate, float gamma, float lambda_user, float lambda_item_positive, float lambda_item_negative, const arma::uword n_threads, bool update_items, const arma::uword loss, const arma::uword kernel, arma::uword max_negative_samples, float margin, const arma::uword optimizer, const arma::uword report_progress);
RcppExport SEXP _rsparse_rankmf_solver_float(SEXP x_rSEXP, SEXP WSEXP, SEXP HSEXP, SEXP W2_gradSEXP, SEXP H2_gradSEXP, SEXP user_features_rSEXP, SEXP item_features_rSEXP, SEXP rankSEXP, SEXP n_updatesSEXP, SEXP learning_rateSEXP, SEXP gammaSEXP, SEXP lambda_userSEXP, SEXP lambda_item_positiveSEXP, SEXP lambda_item_negativeSEXP, SEXP n_threadsSEXP, SEXP update_itemsSEXP, SEXP lossSEXP, SEXP kernelSEXP, SEXP max_negative_samplesSEXP, SEXP marginSEXP, SEXP optimizerSEXP, SEXP report_progressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type x_r(x_rSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type W(WSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type H(HSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type W2_grad(W2_gradSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type H2_grad(H2_gradSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type user_features_r(user_features_rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type item_features_r(item_features_rSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type rank(rankSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type n_updates(n_updatesSEXP);
    Rcpp::traits::input_parameter< float >::type learning_rate(learning_rateSEXP);
    Rcpp::traits::input_parameter< float >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< float >::type lambda_user(lambda_userSEXP);
    Rcpp::traits::input_parameter< float >::type lambda_item_positive(lambda_item_positiveSEXP);
    Rcpp::traits::input_parameter< float >::type lambda_item_negative(lambda_item_negativeSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type update_items(update_itemsSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type loss(lossSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type max_negative_samples(max_negative_samplesSEXP);
    Rcpp::traits::input_parameter< float >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type optimizer(optimizerSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type report_progress(report_progressSEXP);
    rankmf_solver_float(x_r, W, H, W2_grad, H2_grad, user_features_r, item_features_r, rank, n_updates, learning_rate, gamma, lambda_user, lambda_item_positive, lambda_item_negative, n_threads, update_items, loss, kernel, max_negative_samples, margin, optimizer, report_progress);
    return R_NilValue;
END_RCPP
}
// top_product
Rcpp::IntegerMatrix top_product(const arma::mat& x, const arma::mat& y, unsigned k, unsigned n_threads, const Rcpp::S4& not_recommend_r, const Rcpp::IntegerVector& exclude, const double glob_mean);
RcppExport SEXP _rsparse_top_product(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP n_threadsSEXP, SEXP not_recommend_rSEXP, SEXP excludeSEXP, SEXP glob_meanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< unsigned >::type k(kSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type not_recommend_r(not_recommend_rSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type exclude(excludeSEXP);
    Rcpp::traits::input_parameter< const double >::type glob_mean(glob_meanSEXP);
    rcpp_result_gen = Rcpp::wrap(top_product(x, y, k, n_threads, not_recommend_r, exclude, glob_mean));
    return rcpp_result_gen;
END_RCPP
}
// arma_kmeans
int arma_kmeans(const arma::dmat& x, const int k, const int seed_mode, const int n_iter, bool verbose, Rcpp::NumericMatrix& result);
RcppExport SEXP _rsparse_arma_kmeans(SEXP xSEXP, SEXP kSEXP, SEXP seed_modeSEXP, SEXP n_iterSEXP, SEXP verboseSEXP, SEXP resultSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::dmat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int >::type seed_mode(seed_modeSEXP);
    Rcpp::traits::input_parameter< const int >::type n_iter(n_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type result(resultSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_kmeans(x, k, seed_mode, n_iter, verbose, result));
    return rcpp_result_gen;
END_RCPP
}
// c_nnls_double
arma::Mat<double> c_nnls_double(const arma::mat& x, const arma::mat& y, uint max_iter, double rel_tol);
RcppExport SEXP _rsparse_c_nnls_double(SEXP xSEXP, SEXP ySEXP, SEXP max_iterSEXP, SEXP rel_tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< uint >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    rcpp_result_gen = Rcpp::wrap(c_nnls_double(x, y, max_iter, rel_tol));
    return rcpp_result_gen;
END_RCPP
}
// omp_thread_count
int omp_thread_count();
RcppExport SEXP _rsparse_omp_thread_count() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(omp_thread_count());
    return rcpp_result_gen;
END_RCPP
}
// cpp_make_sparse_approximation
Rcpp::NumericVector cpp_make_sparse_approximation(const Rcpp::S4& mat_template, const arma::mat& X, const arma::mat& Y, int sparse_matrix_type, unsigned n_threads);
RcppExport SEXP _rsparse_cpp_make_sparse_approximation(SEXP mat_templateSEXP, SEXP XSEXP, SEXP YSEXP, SEXP sparse_matrix_typeSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type mat_template(mat_templateSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type sparse_matrix_type(sparse_matrix_typeSEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_make_sparse_approximation(mat_template, X, Y, sparse_matrix_type, n_threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rsparse_check_is_seq", (DL_FUNC) &_rsparse_check_is_seq, 1},
    {"_rsparse_copy_csr_rows", (DL_FUNC) &_rsparse_copy_csr_rows, 4},
    {"_rsparse_copy_csr_rows_col_seq", (DL_FUNC) &_rsparse_copy_csr_rows_col_seq, 5},
    {"_rsparse_copy_csr_arbitrary", (DL_FUNC) &_rsparse_copy_csr_arbitrary, 5},
    {"_rsparse_get_ftrl_weights", (DL_FUNC) &_rsparse_get_ftrl_weights, 1},
    {"_rsparse_ftrl_partial_fit", (DL_FUNC) &_rsparse_ftrl_partial_fit, 6},
    {"_rsparse_fm_create_param", (DL_FUNC) &_rsparse_fm_create_param, 12},
    {"_rsparse_fm_create_model", (DL_FUNC) &_rsparse_fm_create_model, 1},
    {"_rsparse_fill_float_matrix_randn", (DL_FUNC) &_rsparse_fill_float_matrix_randn, 2},
    {"_rsparse_fill_float_matrix", (DL_FUNC) &_rsparse_fill_float_matrix, 2},
    {"_rsparse_fill_float_vector_randn", (DL_FUNC) &_rsparse_fill_float_vector_randn, 2},
    {"_rsparse_fill_float_vector", (DL_FUNC) &_rsparse_fill_float_vector, 2},
    {"_rsparse_fm_partial_fit", (DL_FUNC) &_rsparse_fm_partial_fit, 6},
    {"_rsparse_is_invalid_ptr", (DL_FUNC) &_rsparse_is_invalid_ptr, 1},
    {"_rsparse_cpp_glove_create", (DL_FUNC) &_rsparse_cpp_glove_create, 1},
    {"_rsparse_cpp_glove_partial_fit", (DL_FUNC) &_rsparse_cpp_glove_partial_fit, 6},
    {"_rsparse_csr_dense_tcrossprod", (DL_FUNC) &_rsparse_csr_dense_tcrossprod, 3},
    {"_rsparse_dense_csc_prod", (DL_FUNC) &_rsparse_dense_csc_prod, 3},
    {"_rsparse_als_implicit_double", (DL_FUNC) &_rsparse_als_implicit_double, 9},
    {"_rsparse_als_implicit_float", (DL_FUNC) &_rsparse_als_implicit_float, 9},
    {"_rsparse_als_explicit_double", (DL_FUNC) &_rsparse_als_explicit_double, 15},
    {"_rsparse_als_explicit_float", (DL_FUNC) &_rsparse_als_explicit_float, 15},
    {"_rsparse_initialize_biases_double", (DL_FUNC) &_rsparse_initialize_biases_double, 8},
    {"_rsparse_initialize_biases_float", (DL_FUNC) &_rsparse_initialize_biases_float, 8},
    {"_rsparse_deep_copy", (DL_FUNC) &_rsparse_deep_copy, 1},
    {"_rsparse_rankmf_solver_double", (DL_FUNC) &_rsparse_rankmf_solver_double, 22},
    {"_rsparse_rankmf_solver_float", (DL_FUNC) &_rsparse_rankmf_solver_float, 22},
    {"_rsparse_top_product", (DL_FUNC) &_rsparse_top_product, 7},
    {"_rsparse_arma_kmeans", (DL_FUNC) &_rsparse_arma_kmeans, 6},
    {"_rsparse_c_nnls_double", (DL_FUNC) &_rsparse_c_nnls_double, 4},
    {"_rsparse_omp_thread_count", (DL_FUNC) &_rsparse_omp_thread_count, 0},
    {"_rsparse_cpp_make_sparse_approximation", (DL_FUNC) &_rsparse_cpp_make_sparse_approximation, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_rsparse(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
