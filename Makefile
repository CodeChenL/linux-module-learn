KERNEL_HENDERS=/usr/src/linux-headers-5.10.110-20-rockchip/
ARCH=arm64
CROSS_COMPILE=aarch64-linux-gnu-
export  ARCH  CROSS_COMPILE

obj-m := parammodule.o testparammodule.o
all:
	$(MAKE) -C $(KERNEL_HENDERS) M=$(CURDIR) modules

.PHONE:clean

clean:
	$(MAKE) -C $(KERNEL_HENDERS) M=$(CURDIR) clean	

