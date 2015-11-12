all: uds-helloworld uds-logname uds-true uds-false uds-whoami

%: %.c
	gcc -o $* $*.c
	
install: uds-helloworld uds-logname uds-true uds-false uds-whoami 
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@install uds-helloworld /usr/local/bin
	@install uds-true /usr/local/bin
	@install uds-false /usr/local/bin
	@install uds-logname /usr/local/bin
	@install uds-whoami /usr/local/bin

uninstall:
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@rm /usr/local/bin/uds-helloworld
	@rm /usr/local/bin/uds-true
	@rm /usr/local/bin/uds-false
	@rm /usr/local/bin/uds-whoami
	@rm /usr/local/bin/uds-logname

clean:
	@rm uds-false uds-helloworld uds-true uds-logname uds-whoami

distrib: *.c Makefile README
	tar -czf lab1-pre-alpha.tar.gz *.c Makefile README
