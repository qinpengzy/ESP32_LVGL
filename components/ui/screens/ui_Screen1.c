// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, -2 );
lv_obj_set_y( ui_Label2, 71 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"Hello Paimon!");

ui_Button2 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Button2, 100);
lv_obj_set_height( ui_Button2, 50);
lv_obj_set_x( ui_Button2, 0 );
lv_obj_set_y( ui_Button2, -22 );
lv_obj_set_align( ui_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Arc1 = lv_arc_create(ui_Screen1);
lv_obj_set_width( ui_Arc1, 150);
lv_obj_set_height( ui_Arc1, 150);
lv_obj_set_x( ui_Arc1, 0 );
lv_obj_set_y( ui_Arc1, -18 );
lv_obj_set_align( ui_Arc1, LV_ALIGN_CENTER );

}
