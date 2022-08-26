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
#ifndef __CS35L41_H
#define __CS35L41_H
struct classh_cfg {
  bool classh_bst_override;
  bool classh_algo_enable;
  int classh_bst_max_limit;
  int classh_mem_depth;
  int classh_release_rate;
  int classh_headroom;
  int classh_wk_fet_delay;
  int classh_wk_fet_thld;
};
struct irq_cfg {
  bool is_present;
  bool irq_pol_inv;
  bool irq_out_en;
  int irq_src_sel;
};
struct cs35l41_platform_data {
  bool sclk_frc;
  bool lrclk_frc;
  bool right_channel;
  bool amp_gain_zc;
  bool ng_enable;
  int bst_ind;
  int bst_vctrl;
  int bst_ipk;
  int bst_cap;
  int temp_warn_thld;
  int ng_pcm_thld;
  int ng_delay;
  int dout_hiz;
  struct irq_cfg irq_config1;
  struct irq_cfg irq_config2;
  struct classh_cfg classh_config;
  int mnSpkType;
  struct device_node * spk_id_gpio_p;
};
struct cs35l41_private {
  struct wm_adsp dsp;
  struct snd_soc_codec * codec;
  struct cs35l41_platform_data pdata;
  struct device * dev;
  struct regmap * regmap;
  struct regulator_bulk_data supplies[2];
  int num_supplies;
  int irq;
  int clksrc;
  int extclk_freq;
  int extclk_cfg;
  int sclk;
  bool reload_tuning;
  bool dspa_mode;
  bool i2s_mode;
  bool swire_mode;
  bool halo_booted;
  bool bus_spi;
  bool fast_switch_en;
  struct gpio_desc * reset_gpio;
  unsigned int fast_switch_file_idx;
  struct soc_enum fast_switch_enum;
  const char * * fast_switch_names;
  struct mutex rate_lock;
};
#endif
