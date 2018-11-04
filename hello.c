#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Ken Tokura <healthy1109@gmail.com");
MODULE_DESCRIPTION("Hello world kernel module");

static int hello_init(void)
{
	printk(KERN_ALERT "driver loaded\n");
	printk(KERN_ALERT "Hello World\n");
	printk(KERN_DEBUG "no 0 KERN_DEBUG デバッグ・メッセージ\n");
	printk(KERN_INFO "no 1 KERN_INFO 情報\n");
	printk(KERN_NOTICE "no 2 KERN_NOTICE 異常ではないが、重要な情報\n");
	printk(KERN_WARNING "no 3  KERN_WARNING 警告状態\n");
	printk(KERN_ERR "no 4 KERN_ERR エラー状態\n");
	printk(KERN_CRIT "no 5 KERN_CRIT かなり憂慮すべき状態\n");
	printk(KERN_ALERT "no 6 KERN_ALERT 即時にアクションをとる必要がある\n");
	printk(KERN_EMERG "no 7 KERN_EMERG システムは利用できない\n");

	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "driver unloaded\n");
}

module_init(hello_init);
module_exit(hello_exit);
