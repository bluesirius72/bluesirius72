obj-m = Hello.o

#KDIR := /usr/src/linux-headers-3.5.0-36-generic
KDIR := /usr/src/linux-headers-3.5.0-36-generic
PWD := $(shell pwd)

default :
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
	rm -rf *.ko
	rm -rf *.mod.*
	rm -rf .*.cmd
	rm -rf *.o
