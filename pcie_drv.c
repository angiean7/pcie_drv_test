#include <linux/init.h>
#include <linux/module.h>

static int __init dev_probe(struct pci_dev *dev, const struct pci_device_id *id)
{}

static void __exit dev_remove(struct pci_dev *dev) 
{}

static struct pci_device_id pci_ids[] = {
{ PCI_DEVICE(DEV_VID, DEV_DID) },
{ 0 }
};

static struct pci_driver dfb_ops = {
    .name = DEV_DRIVER_NAME,
    .id_table = pci_ids,
    .probe = dev_probe,
    .remove = dev_remove,
};

static int anqi_init(void)
{
    printk(KERN_INFO"Hello World enter 20240314\n");
    return 0;
}

static void anqi_exit(void)
{
    printk(KERN_INFO"Hello World exit 20240314\n ");
}

module_init(anqi_init);
module_exit(anqi_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("an.qi");
MODULE_DESCRIPTION("test_module");
MODULE_VERSION("V1.0");

