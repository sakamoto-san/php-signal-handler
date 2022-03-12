/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: e66ebc061ee9e3a1ebdd2164d090b767067c9ac1 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_attach_signal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, signo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_detach_signal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, signo, IS_LONG, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(attach_signal);
ZEND_FUNCTION(detach_signal);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(attach_signal, arginfo_attach_signal)
	ZEND_FE(detach_signal, arginfo_detach_signal)
	ZEND_FE_END
};
