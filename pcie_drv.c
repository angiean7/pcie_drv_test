#include <linux/init.h>
#include <linux/module.h>


static struct pci_device_id pci_ids[] = {
{ PCI_DEVICE(DEV_VID, DEV_DID) },
{ 0 }
};

static int __init dev_probe(struct pci_dev *dev, const struct pci_device_id *id)
{
    int rc = 0;
    return rc;
}

static void __exit dev_remove(struct pci_dev *dev) 
{
    int rc = 0;
    return rc;
}
static struct pci_driver dev_ops = {
    .name = DEV_DRIVER_NAME,
    .id_table = pci_ids,
    .probe = dev_probe,
    .remove = dev_remove,
};

static int anqi_init(void)
{
    printk(KERN_INFO"Hello World enter 20240314\n");
    int rc = 0;

    rc = pci_register_driver(&dev_ops);
    if (rc) {
        printk(KERN_ERR DEV_DRIVER_NAME ": PCI driver registration failed\n");
        goto exit;
    }

exit:
    return rc;
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

