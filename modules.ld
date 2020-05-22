SECTIONS
{
	.ngx_modules_list : {
		PROVIDE(ngx_modules = .);
		KEEP (*(.ngx_modules_list))
		LONG(0x0)
	}
	.ngx_module_names_list : {
		PROVIDE(ngx_module_names = .);
		KEEP (*(.ngx_module_names_list))
		LONG(0x0)
	}
}
INSERT AFTER .text;
