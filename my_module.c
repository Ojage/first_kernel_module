#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h> // Macros for module initialization

// This is the META Info, important because there are some modules that only load modules with this information
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Salathiel");
MODULE_DESCRIPTION("A simple example Linux module with some swag");

// This function is called when the module is loaded
static int __init my_module_init(void)
{
    printk(KERN_INFO "🌍Hello there... Module loaded! No stress, I'm just here to make Linux do my bidding.\n");
    printk(KERN_INFO "💻 And its my First module, let's see if this kernel is ready for some action!\n");
    return 0; // Return 0 to indicate successful loading
}

// This function is called when the module is removed
static void __exit my_module_exit(void)
{
    printk(KERN_INFO "✌️ All good things must come to an end. Exiting my first module.\n");
    printk(KERN_INFO "Okay, Afte!!--Goodbye world, I’ll be back before you know it. Module unloaded!\n");
}

// Register the init and exit functions
module_init(my_module_init);
module_exit(my_module_exit);

// End of my_module.c
