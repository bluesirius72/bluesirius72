#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>

int __init init_hello(void)
{
	printk(KERN_ALERT "[Module Message] Hello, Modue.\n");
	return 0;
}

void __exit exit_hello(void)
{
	printk(KERN_ALERT "[Module Message] Do you really want to break up with me?\n");
}
modu드le_init(init_hello);
module_exit(exit_hello);
MODULE_LICENSE("GPL");
