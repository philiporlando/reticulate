// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "reticulate_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// write_stdout
int write_stdout(std::string text);
RcppExport SEXP _reticulate_write_stdout(SEXP textSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    rcpp_result_gen = Rcpp::wrap(write_stdout(text));
    return rcpp_result_gen;
END_RCPP
}
// write_stderr
int write_stderr(std::string text);
RcppExport SEXP _reticulate_write_stderr(SEXP textSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    rcpp_result_gen = Rcpp::wrap(write_stderr(text));
    return rcpp_result_gen;
END_RCPP
}
// is_python3
bool is_python3();
RcppExport SEXP _reticulate_is_python3() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(is_python3());
    return rcpp_result_gen;
END_RCPP
}
// py_is_null_xptr
bool py_is_null_xptr(PyObjectRef x);
RcppExport SEXP _reticulate_py_is_null_xptr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_null_xptr(x));
    return rcpp_result_gen;
END_RCPP
}
// py_validate_xptr
void py_validate_xptr(PyObjectRef x);
RcppExport SEXP _reticulate_py_validate_xptr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    py_validate_xptr(x);
    return R_NilValue;
END_RCPP
}
// conditionMessage_from_py_exception
std::string conditionMessage_from_py_exception(PyObjectRef exc);
RcppExport SEXP _reticulate_conditionMessage_from_py_exception(SEXP excSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type exc(excSEXP);
    rcpp_result_gen = Rcpp::wrap(conditionMessage_from_py_exception(exc));
    return rcpp_result_gen;
END_RCPP
}
// py_none_impl
PyObjectRef py_none_impl();
RcppExport SEXP _reticulate_py_none_impl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(py_none_impl());
    return rcpp_result_gen;
END_RCPP
}
// py_is_callable
bool py_is_callable(PyObjectRef x);
RcppExport SEXP _reticulate_py_is_callable(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_callable(x));
    return rcpp_result_gen;
END_RCPP
}
// py_get_formals
SEXP py_get_formals(PyObjectRef callable);
RcppExport SEXP _reticulate_py_get_formals(SEXP callableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type callable(callableSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_formals(callable));
    return rcpp_result_gen;
END_RCPP
}
// r_to_py_impl
PyObjectRef r_to_py_impl(RObject object, bool convert);
RcppExport SEXP _reticulate_r_to_py_impl(SEXP objectSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(r_to_py_impl(object, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_activate_virtualenv
void py_activate_virtualenv(const std::string& script);
RcppExport SEXP _reticulate_py_activate_virtualenv(SEXP scriptSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type script(scriptSEXP);
    py_activate_virtualenv(script);
    return R_NilValue;
END_RCPP
}
// main_process_python_info
SEXP main_process_python_info();
RcppExport SEXP _reticulate_main_process_python_info() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(main_process_python_info());
    return rcpp_result_gen;
END_RCPP
}
// py_clear_error
void py_clear_error();
RcppExport SEXP _reticulate_py_clear_error() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    py_clear_error();
    return R_NilValue;
END_RCPP
}
// was_python_initialized_by_reticulate
bool was_python_initialized_by_reticulate();
RcppExport SEXP _reticulate_was_python_initialized_by_reticulate() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(was_python_initialized_by_reticulate());
    return rcpp_result_gen;
END_RCPP
}
// py_initialize
void py_initialize(const std::string& python, const std::string& libpython, const std::string& pythonhome, const std::string& virtualenv_activate, bool python3, bool interactive, const std::string& numpy_load_error);
RcppExport SEXP _reticulate_py_initialize(SEXP pythonSEXP, SEXP libpythonSEXP, SEXP pythonhomeSEXP, SEXP virtualenv_activateSEXP, SEXP python3SEXP, SEXP interactiveSEXP, SEXP numpy_load_errorSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type python(pythonSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type libpython(libpythonSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type pythonhome(pythonhomeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type virtualenv_activate(virtualenv_activateSEXP);
    Rcpp::traits::input_parameter< bool >::type python3(python3SEXP);
    Rcpp::traits::input_parameter< bool >::type interactive(interactiveSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type numpy_load_error(numpy_load_errorSEXP);
    py_initialize(python, libpython, pythonhome, virtualenv_activate, python3, interactive, numpy_load_error);
    return R_NilValue;
END_RCPP
}
// py_finalize
void py_finalize();
RcppExport SEXP _reticulate_py_finalize() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    py_finalize();
    return R_NilValue;
END_RCPP
}
// py_is_none
bool py_is_none(PyObjectRef x);
RcppExport SEXP _reticulate_py_is_none(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_none(x));
    return rcpp_result_gen;
END_RCPP
}
// py_compare_impl
bool py_compare_impl(PyObjectRef a, PyObjectRef b, const std::string& op);
RcppExport SEXP _reticulate_py_compare_impl(SEXP aSEXP, SEXP bSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type a(aSEXP);
    Rcpp::traits::input_parameter< PyObjectRef >::type b(bSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(py_compare_impl(a, b, op));
    return rcpp_result_gen;
END_RCPP
}
// py_str_impl
CharacterVector py_str_impl(PyObjectRef x);
RcppExport SEXP _reticulate_py_str_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_str_impl(x));
    return rcpp_result_gen;
END_RCPP
}
// py_repr
SEXP py_repr(PyObjectRef object);
RcppExport SEXP _reticulate_py_repr(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(py_repr(object));
    return rcpp_result_gen;
END_RCPP
}
// py_print
void py_print(PyObjectRef x);
RcppExport SEXP _reticulate_py_print(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    py_print(x);
    return R_NilValue;
END_RCPP
}
// py_is_function
bool py_is_function(PyObjectRef x);
RcppExport SEXP _reticulate_py_is_function(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_function(x));
    return rcpp_result_gen;
END_RCPP
}
// py_numpy_available_impl
bool py_numpy_available_impl();
RcppExport SEXP _reticulate_py_numpy_available_impl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(py_numpy_available_impl());
    return rcpp_result_gen;
END_RCPP
}
// py_list_attributes_impl
std::vector<std::string> py_list_attributes_impl(PyObjectRef x);
RcppExport SEXP _reticulate_py_list_attributes_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_list_attributes_impl(x));
    return rcpp_result_gen;
END_RCPP
}
// py_has_attr_impl
bool py_has_attr_impl(PyObjectRef x, const std::string& name);
RcppExport SEXP _reticulate_py_has_attr_impl(SEXP xSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(py_has_attr_impl(x, name));
    return rcpp_result_gen;
END_RCPP
}
// py_get_attr_impl
PyObjectRef py_get_attr_impl(PyObjectRef x, const std::string& key, bool silent);
RcppExport SEXP _reticulate_py_get_attr_impl(SEXP xSEXP, SEXP keySEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type key(keySEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_attr_impl(x, key, silent));
    return rcpp_result_gen;
END_RCPP
}
// py_get_item_impl
PyObjectRef py_get_item_impl(PyObjectRef x, RObject key, bool silent);
RcppExport SEXP _reticulate_py_get_item_impl(SEXP xSEXP, SEXP keySEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type key(keySEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_item_impl(x, key, silent));
    return rcpp_result_gen;
END_RCPP
}
// py_set_attr_impl
void py_set_attr_impl(PyObjectRef x, const std::string& name, RObject value);
RcppExport SEXP _reticulate_py_set_attr_impl(SEXP xSEXP, SEXP nameSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< RObject >::type value(valueSEXP);
    py_set_attr_impl(x, name, value);
    return R_NilValue;
END_RCPP
}
// py_del_attr_impl
void py_del_attr_impl(PyObjectRef x, const std::string& name);
RcppExport SEXP _reticulate_py_del_attr_impl(SEXP xSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    py_del_attr_impl(x, name);
    return R_NilValue;
END_RCPP
}
// py_set_item_impl
void py_set_item_impl(PyObjectRef x, RObject key, RObject val);
RcppExport SEXP _reticulate_py_set_item_impl(SEXP xSEXP, SEXP keySEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type key(keySEXP);
    Rcpp::traits::input_parameter< RObject >::type val(valSEXP);
    py_set_item_impl(x, key, val);
    return R_NilValue;
END_RCPP
}
// py_get_attr_types_impl
IntegerVector py_get_attr_types_impl(PyObjectRef x, const std::vector<std::string>& attrs, bool resolve_properties);
RcppExport SEXP _reticulate_py_get_attr_types_impl(SEXP xSEXP, SEXP attrsSEXP, SEXP resolve_propertiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type attrs(attrsSEXP);
    Rcpp::traits::input_parameter< bool >::type resolve_properties(resolve_propertiesSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_attr_types_impl(x, attrs, resolve_properties));
    return rcpp_result_gen;
END_RCPP
}
// py_ref_to_r_with_convert
SEXP py_ref_to_r_with_convert(PyObjectRef x, bool convert);
RcppExport SEXP _reticulate_py_ref_to_r_with_convert(SEXP xSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_ref_to_r_with_convert(x, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_ref_to_r
SEXP py_ref_to_r(PyObjectRef x);
RcppExport SEXP _reticulate_py_ref_to_r(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_ref_to_r(x));
    return rcpp_result_gen;
END_RCPP
}
// py_call_impl
SEXP py_call_impl(PyObjectRef x, List args, List keywords);
RcppExport SEXP _reticulate_py_call_impl(SEXP xSEXP, SEXP argsSEXP, SEXP keywordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< List >::type keywords(keywordsSEXP);
    rcpp_result_gen = Rcpp::wrap(py_call_impl(x, args, keywords));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_impl
PyObjectRef py_dict_impl(const List& keys, const List& items, bool convert);
RcppExport SEXP _reticulate_py_dict_impl(SEXP keysSEXP, SEXP itemsSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const List& >::type items(itemsSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_impl(keys, items, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_get_item
SEXP py_dict_get_item(PyObjectRef dict, RObject key);
RcppExport SEXP _reticulate_py_dict_get_item(SEXP dictSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< RObject >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_get_item(dict, key));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_set_item
void py_dict_set_item(PyObjectRef dict, RObject key, RObject val);
RcppExport SEXP _reticulate_py_dict_set_item(SEXP dictSEXP, SEXP keySEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< RObject >::type key(keySEXP);
    Rcpp::traits::input_parameter< RObject >::type val(valSEXP);
    py_dict_set_item(dict, key, val);
    return R_NilValue;
END_RCPP
}
// py_dict_length
int py_dict_length(PyObjectRef dict);
RcppExport SEXP _reticulate_py_dict_length(SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_length(dict));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_get_keys
PyObjectRef py_dict_get_keys(PyObjectRef dict);
RcppExport SEXP _reticulate_py_dict_get_keys(SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_get_keys(dict));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_get_keys_as_str
CharacterVector py_dict_get_keys_as_str(PyObjectRef dict);
RcppExport SEXP _reticulate_py_dict_get_keys_as_str(SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_get_keys_as_str(dict));
    return rcpp_result_gen;
END_RCPP
}
// py_tuple
PyObjectRef py_tuple(const List& items, bool convert);
RcppExport SEXP _reticulate_py_tuple(SEXP itemsSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type items(itemsSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_tuple(items, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_tuple_length
int py_tuple_length(PyObjectRef tuple);
RcppExport SEXP _reticulate_py_tuple_length(SEXP tupleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type tuple(tupleSEXP);
    rcpp_result_gen = Rcpp::wrap(py_tuple_length(tuple));
    return rcpp_result_gen;
END_RCPP
}
// py_module_import
PyObjectRef py_module_import(const std::string& module, bool convert);
RcppExport SEXP _reticulate_py_module_import(SEXP moduleSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_module_import(module, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_module_proxy_import
void py_module_proxy_import(PyObjectRef proxy);
RcppExport SEXP _reticulate_py_module_proxy_import(SEXP proxySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type proxy(proxySEXP);
    py_module_proxy_import(proxy);
    return R_NilValue;
END_RCPP
}
// py_list_submodules
CharacterVector py_list_submodules(const std::string& module);
RcppExport SEXP _reticulate_py_list_submodules(SEXP moduleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    rcpp_result_gen = Rcpp::wrap(py_list_submodules(module));
    return rcpp_result_gen;
END_RCPP
}
// py_iterate
List py_iterate(PyObjectRef x, Function f);
RcppExport SEXP _reticulate_py_iterate(SEXP xSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(py_iterate(x, f));
    return rcpp_result_gen;
END_RCPP
}
// py_iter_next
SEXP py_iter_next(PyObjectRef iterator, RObject completed);
RcppExport SEXP _reticulate_py_iter_next(SEXP iteratorSEXP, SEXP completedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type iterator(iteratorSEXP);
    Rcpp::traits::input_parameter< RObject >::type completed(completedSEXP);
    rcpp_result_gen = Rcpp::wrap(py_iter_next(iterator, completed));
    return rcpp_result_gen;
END_RCPP
}
// py_run_string_impl
SEXP py_run_string_impl(const std::string& code, bool local, bool convert);
RcppExport SEXP _reticulate_py_run_string_impl(SEXP codeSEXP, SEXP localSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< bool >::type local(localSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_run_string_impl(code, local, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_run_file_impl
SEXP py_run_file_impl(const std::string& file, bool local, bool convert);
RcppExport SEXP _reticulate_py_run_file_impl(SEXP fileSEXP, SEXP localSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file(fileSEXP);
    Rcpp::traits::input_parameter< bool >::type local(localSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_run_file_impl(file, local, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_eval_impl
SEXP py_eval_impl(const std::string& code, bool convert);
RcppExport SEXP _reticulate_py_eval_impl(SEXP codeSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_eval_impl(code, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_convert_pandas_series
SEXP py_convert_pandas_series(PyObjectRef series);
RcppExport SEXP _reticulate_py_convert_pandas_series(SEXP seriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type series(seriesSEXP);
    rcpp_result_gen = Rcpp::wrap(py_convert_pandas_series(series));
    return rcpp_result_gen;
END_RCPP
}
// py_convert_pandas_df
SEXP py_convert_pandas_df(PyObjectRef df);
RcppExport SEXP _reticulate_py_convert_pandas_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(py_convert_pandas_df(df));
    return rcpp_result_gen;
END_RCPP
}
// r_convert_dataframe
PyObjectRef r_convert_dataframe(RObject dataframe, bool convert);
RcppExport SEXP _reticulate_r_convert_dataframe(SEXP dataframeSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type dataframe(dataframeSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(r_convert_dataframe(dataframe, convert));
    return rcpp_result_gen;
END_RCPP
}
// r_convert_date
PyObjectRef r_convert_date(DateVector dates, bool convert);
RcppExport SEXP _reticulate_r_convert_date(SEXP datesSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DateVector >::type dates(datesSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(r_convert_date(dates, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_set_interrupt_impl
void py_set_interrupt_impl();
RcppExport SEXP _reticulate_py_set_interrupt_impl() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    py_set_interrupt_impl();
    return R_NilValue;
END_RCPP
}
// py_list_length
SEXP py_list_length(PyObjectRef x);
RcppExport SEXP _reticulate_py_list_length(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_list_length(x));
    return rcpp_result_gen;
END_RCPP
}
// py_len_impl
SEXP py_len_impl(PyObjectRef x, SEXP defaultValue);
RcppExport SEXP _reticulate_py_len_impl(SEXP xSEXP, SEXP defaultValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type defaultValue(defaultValueSEXP);
    rcpp_result_gen = Rcpp::wrap(py_len_impl(x, defaultValue));
    return rcpp_result_gen;
END_RCPP
}
// py_bool_impl
SEXP py_bool_impl(PyObjectRef x);
RcppExport SEXP _reticulate_py_bool_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_bool_impl(x));
    return rcpp_result_gen;
END_RCPP
}
// py_has_method
SEXP py_has_method(PyObjectRef object, const std::string& name);
RcppExport SEXP _reticulate_py_has_method(SEXP objectSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type object(objectSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(py_has_method(object, name));
    return rcpp_result_gen;
END_RCPP
}
// py_id
SEXP py_id(PyObjectRef object);
RcppExport SEXP _reticulate_py_id(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(py_id(object));
    return rcpp_result_gen;
END_RCPP
}
// py_capsule
PyObjectRef py_capsule(SEXP x);
RcppExport SEXP _reticulate_py_capsule(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_capsule(x));
    return rcpp_result_gen;
END_RCPP
}
// py_slice
PyObjectRef py_slice(SEXP start, SEXP stop, SEXP step);
RcppExport SEXP _reticulate_py_slice(SEXP startSEXP, SEXP stopSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type start(startSEXP);
    Rcpp::traits::input_parameter< SEXP >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< SEXP >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(py_slice(start, stop, step));
    return rcpp_result_gen;
END_RCPP
}
// readline
SEXP readline(const std::string& prompt);
RcppExport SEXP _reticulate_readline(SEXP promptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type prompt(promptSEXP);
    rcpp_result_gen = Rcpp::wrap(readline(prompt));
    return rcpp_result_gen;
END_RCPP
}
// py_register_interrupt_handler
void py_register_interrupt_handler();
RcppExport SEXP _reticulate_py_register_interrupt_handler() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    py_register_interrupt_handler();
    return R_NilValue;
END_RCPP
}
// py_interrupts_pending
bool py_interrupts_pending(bool reset);
RcppExport SEXP _reticulate_py_interrupts_pending(SEXP resetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type reset(resetSEXP);
    rcpp_result_gen = Rcpp::wrap(py_interrupts_pending(reset));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_reticulate_write_stdout", (DL_FUNC) &_reticulate_write_stdout, 1},
    {"_reticulate_write_stderr", (DL_FUNC) &_reticulate_write_stderr, 1},
    {"_reticulate_is_python3", (DL_FUNC) &_reticulate_is_python3, 0},
    {"_reticulate_py_is_null_xptr", (DL_FUNC) &_reticulate_py_is_null_xptr, 1},
    {"_reticulate_py_validate_xptr", (DL_FUNC) &_reticulate_py_validate_xptr, 1},
    {"_reticulate_conditionMessage_from_py_exception", (DL_FUNC) &_reticulate_conditionMessage_from_py_exception, 1},
    {"_reticulate_py_none_impl", (DL_FUNC) &_reticulate_py_none_impl, 0},
    {"_reticulate_py_is_callable", (DL_FUNC) &_reticulate_py_is_callable, 1},
    {"_reticulate_py_get_formals", (DL_FUNC) &_reticulate_py_get_formals, 1},
    {"_reticulate_r_to_py_impl", (DL_FUNC) &_reticulate_r_to_py_impl, 2},
    {"_reticulate_py_activate_virtualenv", (DL_FUNC) &_reticulate_py_activate_virtualenv, 1},
    {"_reticulate_main_process_python_info", (DL_FUNC) &_reticulate_main_process_python_info, 0},
    {"_reticulate_py_clear_error", (DL_FUNC) &_reticulate_py_clear_error, 0},
    {"_reticulate_was_python_initialized_by_reticulate", (DL_FUNC) &_reticulate_was_python_initialized_by_reticulate, 0},
    {"_reticulate_py_initialize", (DL_FUNC) &_reticulate_py_initialize, 7},
    {"_reticulate_py_finalize", (DL_FUNC) &_reticulate_py_finalize, 0},
    {"_reticulate_py_is_none", (DL_FUNC) &_reticulate_py_is_none, 1},
    {"_reticulate_py_compare_impl", (DL_FUNC) &_reticulate_py_compare_impl, 3},
    {"_reticulate_py_str_impl", (DL_FUNC) &_reticulate_py_str_impl, 1},
    {"_reticulate_py_repr", (DL_FUNC) &_reticulate_py_repr, 1},
    {"_reticulate_py_print", (DL_FUNC) &_reticulate_py_print, 1},
    {"_reticulate_py_is_function", (DL_FUNC) &_reticulate_py_is_function, 1},
    {"_reticulate_py_numpy_available_impl", (DL_FUNC) &_reticulate_py_numpy_available_impl, 0},
    {"_reticulate_py_list_attributes_impl", (DL_FUNC) &_reticulate_py_list_attributes_impl, 1},
    {"_reticulate_py_has_attr_impl", (DL_FUNC) &_reticulate_py_has_attr_impl, 2},
    {"_reticulate_py_get_attr_impl", (DL_FUNC) &_reticulate_py_get_attr_impl, 3},
    {"_reticulate_py_get_item_impl", (DL_FUNC) &_reticulate_py_get_item_impl, 3},
    {"_reticulate_py_set_attr_impl", (DL_FUNC) &_reticulate_py_set_attr_impl, 3},
    {"_reticulate_py_del_attr_impl", (DL_FUNC) &_reticulate_py_del_attr_impl, 2},
    {"_reticulate_py_set_item_impl", (DL_FUNC) &_reticulate_py_set_item_impl, 3},
    {"_reticulate_py_get_attr_types_impl", (DL_FUNC) &_reticulate_py_get_attr_types_impl, 3},
    {"_reticulate_py_ref_to_r_with_convert", (DL_FUNC) &_reticulate_py_ref_to_r_with_convert, 2},
    {"_reticulate_py_ref_to_r", (DL_FUNC) &_reticulate_py_ref_to_r, 1},
    {"_reticulate_py_call_impl", (DL_FUNC) &_reticulate_py_call_impl, 3},
    {"_reticulate_py_dict_impl", (DL_FUNC) &_reticulate_py_dict_impl, 3},
    {"_reticulate_py_dict_get_item", (DL_FUNC) &_reticulate_py_dict_get_item, 2},
    {"_reticulate_py_dict_set_item", (DL_FUNC) &_reticulate_py_dict_set_item, 3},
    {"_reticulate_py_dict_length", (DL_FUNC) &_reticulate_py_dict_length, 1},
    {"_reticulate_py_dict_get_keys", (DL_FUNC) &_reticulate_py_dict_get_keys, 1},
    {"_reticulate_py_dict_get_keys_as_str", (DL_FUNC) &_reticulate_py_dict_get_keys_as_str, 1},
    {"_reticulate_py_tuple", (DL_FUNC) &_reticulate_py_tuple, 2},
    {"_reticulate_py_tuple_length", (DL_FUNC) &_reticulate_py_tuple_length, 1},
    {"_reticulate_py_module_import", (DL_FUNC) &_reticulate_py_module_import, 2},
    {"_reticulate_py_module_proxy_import", (DL_FUNC) &_reticulate_py_module_proxy_import, 1},
    {"_reticulate_py_list_submodules", (DL_FUNC) &_reticulate_py_list_submodules, 1},
    {"_reticulate_py_iterate", (DL_FUNC) &_reticulate_py_iterate, 2},
    {"_reticulate_py_iter_next", (DL_FUNC) &_reticulate_py_iter_next, 2},
    {"_reticulate_py_run_string_impl", (DL_FUNC) &_reticulate_py_run_string_impl, 3},
    {"_reticulate_py_run_file_impl", (DL_FUNC) &_reticulate_py_run_file_impl, 3},
    {"_reticulate_py_eval_impl", (DL_FUNC) &_reticulate_py_eval_impl, 2},
    {"_reticulate_py_convert_pandas_series", (DL_FUNC) &_reticulate_py_convert_pandas_series, 1},
    {"_reticulate_py_convert_pandas_df", (DL_FUNC) &_reticulate_py_convert_pandas_df, 1},
    {"_reticulate_r_convert_dataframe", (DL_FUNC) &_reticulate_r_convert_dataframe, 2},
    {"_reticulate_r_convert_date", (DL_FUNC) &_reticulate_r_convert_date, 2},
    {"_reticulate_py_set_interrupt_impl", (DL_FUNC) &_reticulate_py_set_interrupt_impl, 0},
    {"_reticulate_py_list_length", (DL_FUNC) &_reticulate_py_list_length, 1},
    {"_reticulate_py_len_impl", (DL_FUNC) &_reticulate_py_len_impl, 2},
    {"_reticulate_py_bool_impl", (DL_FUNC) &_reticulate_py_bool_impl, 1},
    {"_reticulate_py_has_method", (DL_FUNC) &_reticulate_py_has_method, 2},
    {"_reticulate_py_id", (DL_FUNC) &_reticulate_py_id, 1},
    {"_reticulate_py_capsule", (DL_FUNC) &_reticulate_py_capsule, 1},
    {"_reticulate_py_slice", (DL_FUNC) &_reticulate_py_slice, 3},
    {"_reticulate_readline", (DL_FUNC) &_reticulate_readline, 1},
    {"_reticulate_py_register_interrupt_handler", (DL_FUNC) &_reticulate_py_register_interrupt_handler, 0},
    {"_reticulate_py_interrupts_pending", (DL_FUNC) &_reticulate_py_interrupts_pending, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_reticulate(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
