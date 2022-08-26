/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_MSM_CIRRUS_SPK_PR_H
#define _UAPI_MSM_CIRRUS_SPK_PR_H
#include <linux/types.h>
#include <linux/ioctl.h>
#define CIRRUS_SP 0x10027053
#define CIRRUS_SP_ENABLE 0x10002001
#define CRUS_MODULE_ID_TX 0x00000002
#define CRUS_MODULE_ID_RX 0x00000001
#define CRUS_PARAM_RX_SET_USECASE 0x00A1AF02
#define CRUS_PARAM_TX_SET_USECASE 0x00A1BF0A
#define CRUS_PARAM_RX_SET_CALIB 0x00A1AF03
#define CRUS_PARAM_TX_SET_CALIB 0x00A1BF03
#define CRUS_PARAM_RX_SET_EXT_CONFIG 0x00A1AF05
#define CRUS_PARAM_TX_SET_EXT_CONFIG 0x00A1BF08
#define CRUS_PARAM_RX_GET_TEMP 0x00A1AF07
#define CRUS_PARAM_TX_GET_TEMP_CAL 0x00A1BF06
#define CRUS_PARAM_RX_SET_DELTA_CONFIG 0x00A1AF0D
#define CRUS_PARAM_RX_RUN_DELTA_CONFIG 0x00A1AF0E
#define CRUS_PARAM_RX_CHANNEL_SWAP 0x00A1AF12
#define CRUS_PARAM_RX_GET_CHANNEL_SWAP 0x00A1AF13
#define CRUS_PARAM_RX_SET_ATTENUATION 0x00A1AF0A
#define CRUS_AFE_PARAM_ID_ENABLE 0x00010203
#define SPK_PROT_IOCTL_MAGIC 'a'
#define CRUS_SP_IOCTL_GET _IOWR(SPK_PROT_IOCTL_MAGIC, 219, void *)
#define CRUS_SP_IOCTL_SET _IOWR(SPK_PROT_IOCTL_MAGIC, 220, void *)
#define CRUS_SP_IOCTL_GET_CALIB _IOWR(SPK_PROT_IOCTL_MAGIC, 221, void *)
#define CRUS_SP_IOCTL_SET_CALIB _IOWR(SPK_PROT_IOCTL_MAGIC, 222, void *)
#define CRUS_SP_IOCTL_READ_CALIB_FROM_SLOT _IOWR(SPK_PROT_IOCTL_MAGIC, 223, void *)
#define CRUS_SP_IOCTL_WRITE_CALIB_TO_SLOT _IOWR(SPK_PROT_IOCTL_MAGIC, 224, void *)
#define CRUS_SP_IOCTL_GET32 _IOWR(SPK_PROT_IOCTL_MAGIC, 219, compat_uptr_t)
#define CRUS_SP_IOCTL_SET32 _IOWR(SPK_PROT_IOCTL_MAGIC, 220, compat_uptr_t)
#define CRUS_SP_IOCTL_GET_CALIB32 _IOWR(SPK_PROT_IOCTL_MAGIC, 221, compat_uptr_t)
#define CRUS_SP_IOCTL_SET_CALIB32 _IOWR(SPK_PROT_IOCTL_MAGIC, 222, compat_uptr_t)
#define CRUS_SP_IOCTL_READ_CALIB_FROM_SLOT32 _IOWR(SPK_PROT_IOCTL_MAGIC, 223, compat_uptr_t)
#define CRUS_SP_IOCTL_WRITE_CALIB_TO_SLOT32 _IOWR(SPK_PROT_IOCTL_MAGIC, 224, compat_uptr_t)
struct crus_sp_ioctl_header {
  uint32_t size;
  uint32_t module_id;
  uint32_t param_id;
  uint32_t data_length;
  void * data;
};
#endif
