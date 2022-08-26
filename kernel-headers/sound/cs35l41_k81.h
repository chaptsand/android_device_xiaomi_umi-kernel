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
  bool dsp_ng_enable;
  bool tuning_has_prefix;
  bool invert_pcm;
  bool hibernate_enable;
  bool fwname_use_revid;
  int bst_ind;
  int bst_vctrl;
  int bst_ipk;
  int bst_cap;
  int temp_warn_thld;
  int dsp_ng_pcm_thld;
  int dsp_ng_delay;
  unsigned int hw_ng_sel;
  unsigned int hw_ng_delay;
  unsigned int hw_ng_thld;
  int dout_hiz;
  struct irq_cfg irq_config1;
  struct irq_cfg irq_config2;
  struct classh_cfg classh_config;
};
struct cs35l41_rst_cache {
  bool extclk_cfg;
  int asp_width;
  int asp_wl;
  int asp_fmt;
  int lrclk_fmt;
  int sclk_fmt;
  int slave_mode;
  int fs_cfg;
};
struct cs35l41_vol_ctl {
  struct workqueue_struct * ramp_wq;
  struct work_struct ramp_work;
  struct mutex vol_mutex;
  atomic_t manual_ramp;
  atomic_t ramp_abort;
  atomic_t vol_ramp;
  atomic_t playback;
  int ramp_init_att;
  int ramp_knee_att;
  unsigned int ramp_knee_time;
  unsigned int ramp_end_time;
  int dig_vol;
  unsigned int auto_ramp_timeout;
  unsigned int output_dev;
  unsigned int prev_active_dev;
  ktime_t dev_timestamp;
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
  int lrclk_fmt;
  int sclk_fmt;
  int amp_hibernate;
  bool reload_tuning;
  bool dspa_mode;
  bool i2s_mode;
  bool swire_mode;
  bool halo_booted;
  bool skip_codec_probe;
  bool bus_spi;
  bool fast_switch_en;
  bool force_int;
  bool hibernate_force_wake;
  struct gpio_desc * reset_gpio;
  unsigned int fast_switch_file_idx;
  struct soc_enum fast_switch_enum;
  const char * * fast_switch_names;
  struct delayed_work hb_work;
  struct workqueue_struct * wq;
  struct mutex hb_lock;
  struct cs35l41_rst_cache reset_cache;
  struct mutex rate_lock;
  struct mutex force_int_lock;
  struct cs35l41_vol_ctl vol_ctl;
  unsigned int ctl_cache[CS35L41_CTRL_CACHE_SIZE];
  u32 trim_cache[CS35L41_TRIM_CACHE_SIZE];
};
#endif
