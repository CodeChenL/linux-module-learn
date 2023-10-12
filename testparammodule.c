#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

extern int param;

extern int sum(int a, int b);

static int __init mod_init(void)
{
    printk(KERN_INFO "testparammodule: Init\n");
    printk(KERN_INFO "testparammodule: para+1 = %d\n",sum(param,1));
    return 0;
}

static void __exit mod_exit(void)
{
    printk(KERN_INFO "testparammodule: Exit\n");
}

module_init(mod_init);
module_exit(mod_exit);

MODULE_LICENSE("GPL2");
MODULE_AUTHOR("ChenJaly");