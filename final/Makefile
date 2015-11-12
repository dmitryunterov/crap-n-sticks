DESTDIR=/usr/local/bin

all: uds-helloworld uds-logname uds-true uds-false uds-whoami

%: %.c
	gcc -o $* $*.c
	
install: uds-helloworld uds-logname uds-true uds-false uds-whoami 
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@install uds-helloworld $(DESTDIR)
	@install uds-true $(DESTDIR)
	@install uds-false $(DESTDIR)
	@install uds-logname $(DESTDIR)
	@install uds-whoami $(DESTDIR)

uninstall:
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@rm $(DESTDIR)/uds-helloworld
	@rm $(DESTDIR)/uds-true
	@rm $(DESTDIR)/uds-false
	@rm $(DESTDIR)/uds-whoami
	@rm $(DESTDIR)/uds-logname

clean:
	@rm uds-false uds-helloworld uds-true uds-logname uds-whoami

distrib: *.c Makefile README
	tar -czf lab1-pre-alpha.tar.gz *.c Makefile README
