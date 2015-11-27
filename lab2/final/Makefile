DESTDIR=/usr/local/bin
LIBDIR=/usr/local/lib

uds-envx: envx.c libmylib.so
	gcc -o uds-envx envx.c -lmylib -L./

uds-pwdx: pwdx.c libmylib.so
	gcc -o uds-pwdx pwdx.c -lmylib -L./

libmylib.so: libmylib.c
	gcc -shared -fPIC -o libmylib.so libmylib.c	

install: uds-pwdx uds-envx
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@install uds-pwdx $(DESTDIR)
	@install uds-envx $(DESTDIR)
	@cp libmylib.so $(LIBDIR)
	@ldconfig

uninstall:
	@[ `id -u` -eq 0 ] || { echo "use sudo make uninstall, Luke"; exit 1; }
	@rm -rf $(DESTDIR)/uds-pwdx
	@rm -rf $(DESTDIR)/uds-envx
	@rm -rf $(LIBDIR)/libmylib.so

clean:
	@rm -rf uds-pwdx uds-envx libmylib.so

distrib: *.c *.h Makefile README
	tar -czf lab2-pwdx.tar.gz *.c *.h  Makefile README
