#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Ken Tokura <healthy1109@gmail.com");
MODULE_DESCRIPTION("Hello world kernel module");

extern void sub(void);

static int hello_init(void)
{
	printk(KERN_ALERT "%s:driver loaded\n", __func__);

	sub();

	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "driver unloaded\n", __func__);
}

module_init(hello_init);
module_exit(hello_exit);
