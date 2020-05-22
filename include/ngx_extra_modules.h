#ifndef __NGX_EXTRA_MODULES_H__
#define __NGX_EXTRA_MODULES_H__
#include <uk/essentials.h>

#define NGX_MODULE_REGISTER(module)                                                 \
  static ngx_module_t                                                               \
	*__ptr_##module __used __section(".ngx_modules_list") = &module;                  \
  static const char                                                                 \
	*__name_##module __used __section(".ngx_module_names_list") = STRINGIFY(module);  \

#endif