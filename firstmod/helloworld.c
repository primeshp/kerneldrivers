#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

staic int __init hellowworld_init(void){ /* Here __init indicate to put this code in the Advance to the kernel section. Once kernel load the module it will release this section */
    pr_info("Hellow World module initated\n");
    return 0;

}


static void __exit helloworld_exit(void){  /* If module is compiled statically to the kernel __exit will be igmnoted*/
    
    pr_info("End of the Module run\n")
}


module_init(helloworld_init); /* Informl the kernel the entry point of the module */
module_exit(helloworld_exit); /* Inform the kernel exit point of the module*/
MODULE_AUTHOR("Primesh Pinto <primeshp@gmail.com>");
MODULE_LICENSE("GPL");
