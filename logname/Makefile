CC=gcc
DESTDIR=/usr/local/bin
VER=0.1.4
TARGET=uds-logname

$(TARGET): *.c
	$(CC) -o $(TARGET) *.c

install: rootliya $(TARGET)
	@install $(TARGET) $(DESTDIR)

uninstall: rootliya
	@rm $(DESTDIR)/$(TARGET)

rootliya:
	@[ `id -u` -eq 0 ] || { echo "You need to be SUPER USER )"; exit 1; }

distrib:
	tar -czf $(TARGET)-$(VER).tar.gz *.c Makefile* configure.ac

clean:
	rm -rf autom4te.cache config.status config.log configure $(TARGET)
