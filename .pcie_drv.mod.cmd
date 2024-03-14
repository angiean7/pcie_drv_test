cmd_/home/inuineko/anqi/pcie_drv_test/pcie_drv.mod := printf '%s\n'   pcie_drv.o | awk '!x[$$0]++ { print("/home/inuineko/anqi/pcie_drv_test/"$$0) }' > /home/inuineko/anqi/pcie_drv_test/pcie_drv.mod
