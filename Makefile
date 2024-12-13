mkdtmp_overload.so: overload_mkdtmp.c
	$(CC) -shared -Wl,-z,defs -Wl,--as-needed -o $@ $^ -ldl

test: simple_mkdir_test.c
	$(CC) -o $@ $^