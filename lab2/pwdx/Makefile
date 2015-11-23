DESTDIR=/usr/local/bin

uds-pwdx: pwdx.c libmylib.so
	gcc -o uds-pwdx pwdx.c -lmylib -L./

libmylib.so: libmylib.c
	gcc -shared -fPIC -o libmylib.so libmylib.c	


install: uds-pwdx 
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@install uds-pwdx $(DESTDIR)
	@cp libmylib.so /usr/local/lib

uninstall:
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@rm $(DESTDIR)/uds-pwdx
	@rm /usr/local/lib/libmylib.so

clean:
	@rm uds-pwdx libmylib.so

distrib: *.c *.h Makefile README
	tar -czf lab2-pwdx.tar.gz *.c *.h  Makefile README
