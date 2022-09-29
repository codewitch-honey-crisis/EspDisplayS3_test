// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: EspDisplayS3_test

#define LV_FONT_MONTSERRAT_24 1
#include "ui.h"
#include "ui_helpers.h"
#include "lv_tiny_ttf.h"
#include "Ubuntu.hpp"
///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Main;
lv_obj_t * ui_CpuBar;
lv_obj_t * ui_CpuLabel;
lv_obj_t * ui_GpuLabel;
lv_obj_t * ui_GpuBar;
lv_font_t * ui_Ubuntu31;
///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Main_screen_init(void)
{
    ui_Main = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Main, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CpuBar = lv_bar_create(ui_Main);
    lv_bar_set_range(ui_CpuBar,0,100);
    lv_bar_set_value(ui_CpuBar, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_CpuBar, 340);
    lv_obj_set_height(ui_CpuBar, 10);
    lv_obj_set_x(ui_CpuBar, 19);
    lv_obj_set_y(ui_CpuBar, -111);
    lv_obj_set_align(ui_CpuBar, LV_ALIGN_CENTER);

    ui_CpuLabel = lv_label_create(ui_Main);
    lv_obj_set_width(ui_CpuLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CpuLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CpuLabel, -197);
    lv_obj_set_y(ui_CpuLabel, -112);
    lv_obj_set_align(ui_CpuLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CpuLabel, "CPU");
    ui_Ubuntu31 = lv_tiny_ttf_create_data(Ubuntu_data,sizeof(Ubuntu_data),31);
    lv_obj_set_style_text_font(ui_CpuLabel, ui_Ubuntu31 , LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GpuLabel = lv_label_create(ui_Main);
    lv_obj_set_width(ui_GpuLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GpuLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GpuLabel, -197);
    lv_obj_set_y(ui_GpuLabel, -67);
    lv_obj_set_align(ui_GpuLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GpuLabel, "GPU");
    lv_obj_set_style_text_font(ui_GpuLabel, ui_Ubuntu31, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GpuBar = lv_bar_create(ui_Main);
    lv_bar_set_range(ui_GpuBar,0,100);
    lv_bar_set_value(ui_GpuBar, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_GpuBar, 340);
    lv_obj_set_height(ui_GpuBar, 10);
    lv_obj_set_x(ui_GpuBar, 19);
    lv_obj_set_y(ui_GpuBar, -67);
    lv_obj_set_align(ui_GpuBar, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_GpuBar, lv_color_hex(0xF6AAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_GpuBar, lv_color_hex(0xF20D0D), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GpuBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Main_screen_init();
    lv_disp_load_scr(ui_Main);
}
