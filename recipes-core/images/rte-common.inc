DESCRIPTION = "A common base for rte product"
LICENSE = "CLOSED"
require recipes-core/images/core-image-minimal.bb
IMAGE_INSTALL_append = " \
    cukinia-tests \
"
GLIBC_GENERATE_LOCALES = "en_US.UTF-8 fr_FR.UTF-8"
IMAGE_LINGUAS ?= "en_US fr_FR"