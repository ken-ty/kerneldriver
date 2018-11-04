#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Ken Tokura <healthy1109@gmail.com");
MODULE_DESCRIPTION("Hello world kernel module");

static int hello_init(void)
{
	printk(KERN_ALERT "driver loaded\n");
	printk(KERN_ALERT "Hello World\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "driver unloaded\n");
}

module_init(hello_init);
module_exit(hello_exit);
