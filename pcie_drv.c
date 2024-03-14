#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int hello_init(void)
{
    printk(KERN_INFO"Hello World enter\n");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_INFO"Hello World exit 20240314\n ");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("hi");
MODULE_DESCRIPTION("hello");
MODULE_ALIAS("world");

