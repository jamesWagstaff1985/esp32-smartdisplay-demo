// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_scrMain
void ui_scrMain_screen_init(void);
extern lv_obj_t *ui_scrMain;
extern lv_obj_t *ui_pnlMain;
extern lv_obj_t *ui_lblMilliseconds;
extern lv_obj_t *ui_lblMillisecondsValue;
void ui_event_btnCount( lv_event_t * e);
extern lv_obj_t *ui_btnCount;
extern lv_obj_t *ui_lblButton;
extern lv_obj_t *ui_lblCount;
extern lv_obj_t *ui_lblCountValue;
extern lv_obj_t *ui____initial_actions0;




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
