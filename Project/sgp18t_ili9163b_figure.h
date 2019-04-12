#ifndef __SGP18T_ILI9163B_FIGURE_H__
#define __SGP18T_ILI9163B_FIGURE_H__


#include "ILI9163.h"

#define		RED		0x001f
#define		GREEN		0x07e0
#define		BLUE		0xf800
#define		PURPLE		0xf81f
#define		YELLOW		0xffe0
#define		CYAN		0x07ff 		//����ɫ
#define		ORANGE		0xfc08
#define		BLACK		0x0000
#define		WHITE		0xffff

void ILI9163B_display_full(uint16 color);					//ȫ����ʾĳ����ɫ
void ILI9163B_draw_part(uint8 xs,uint8 ys,uint8 xe,uint8 ye,uint16 color_dat);  //��������������ʼ����ֹ���꣬����ʼ����ֹ���꣬��ɫ
void ILI9163B_draw_line(uint8 xs,uint8 ys,uint8 xe,uint8 ye,uint16 color_dat);    //���ߣ�����ʼ����ֹ���꣬����ʼ����ֹ���꣬��ɫ
void ILI9163B_draw_rectangle(uint8 xs,uint8 ys,uint8 xe,uint8 ye,uint16 color_dat);//�����α߿�����ʼ����ֹ���꣬����ʼ����ֹ���꣬��ɫ
void ILI9163B_draw_circle(uint8 x,uint8 y,uint8 r,uint16 color_dat);      //��Բ�α߿�Բ�ĺ����ꡢ�����꣬�뾶����ɫ
void ILI9163B_draw_dot(uint8 x,uint8 y,uint16 color_dat);	        //���㣬�����꣬�����꣬��ɫ

#endif /*SGP18T_ILI9163B_figure.h*/