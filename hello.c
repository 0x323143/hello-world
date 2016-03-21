#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Woncheol Lee");
MODULE_DESCRIPTION("My first Linux Kernel Module.");
MODULE_VERSION("0.1");

static int __init hello_init(void)
{
        printk(KERN_DEBUG "Hello World!\n");
        return 0;
}

static void __exit hello_exit(void)
{
}

module_init(hello_init);
module_exit(hello_exit);
