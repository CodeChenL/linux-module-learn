#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

int param = 0;
module_param(param,int,S_IWUSR);
EXPORT_SYMBOL(param);

static int __init mod_init(void)
{
   printk(KERN_INFO "parammodule: Init\n");
   printk(KERN_INFO "parammodule: param = %d\n", param);
   return 0;
}

static void __exit mod_exit(void)
{
   printk(KERN_INFO "parammodule: Exit\n");
}

int sum(int a, int b)
{
   return a + b;
}
EXPORT_SYMBOL(sum);

module_init(mod_init);
module_exit(mod_exit);

MODULE_LICENSE("GPL2");
MODULE_AUTHOR("ChenJaly");