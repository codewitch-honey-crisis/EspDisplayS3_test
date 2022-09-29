#include "ui.h"
void ui_patch() {
    lv_obj_set_style_bg_color(ui_GpuBar, lv_color_hex(0xF6AAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_invalidate(lv_scr_act());
}