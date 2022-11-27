#pragma once

// ���� ���� �������� � ��������� Windows 1251
// This file is saved in Windows 1251 encoding



#if LANGUAGE == ru

const char STRING_ON[] = "��� ";
const char STRING_OFF[] = "����";

const char PROGMEM LINE1_FORMAT[] = "T%03d/%03d L%02d/%02d";
const char PROGMEM LINE2_FORMAT[] = "Sp%03d St0.%04d";
const char PROGMEM LINE4_FORMAT[] = "%03d";
const char PROGMEM LINE5_FORMAT[] = "%02d";
const char PROGMEM LINE6_FORMAT[] = "%03d";

const char PROGMEM STRING_1[] = "AUTOWINDING DONE";
const char PROGMEM STRING_2[] = "PRESS CONTINUE  ";

const char PROGMEM MENU_01[] = "������ 1";
const char PROGMEM MENU_02[] = "������ 2";
const char PROGMEM MENU_03[] = "������ 3";
const char PROGMEM MENU_04[] = "�������";
const char PROGMEM MENU_05[] = "���������";
const char PROGMEM MENU_06[] = "������� 1";
const char PROGMEM MENU_07[] = "������� 2";
const char PROGMEM MENU_08[] = "������� 3";
const char PROGMEM MENU_09[] = "�����";  
const char PROGMEM MENU_10[] = "������:";
const char PROGMEM MENU_11[] = "���:";
const char PROGMEM MENU_12[] = "RPM:";
const char PROGMEM MENU_13[] = "�����:";
const char PROGMEM MENU_14[] = "�������.";
const char PROGMEM MENU_15[] = "�����";
const char PROGMEM MENU_17[] = "�������:";
const char PROGMEM MENU_18[] = "���:";
const char PROGMEM MENU_19[] = "������:";
const char PROGMEM MENU_22[] = "��������";
const char PROGMEM MENU_23[] = "�����.";

#else

const char STRING_ON[] = "ON ";
const char STRING_OFF[] = "OFF";

const char PROGMEM LINE1_FORMAT[] = "T%03d/%03d L%02d/%02d";
const char PROGMEM LINE2_FORMAT[] = "Sp%03d St0.%04d";
const char PROGMEM LINE4_FORMAT[] = "%03d";
const char PROGMEM LINE5_FORMAT[] = "%02d";
const char PROGMEM LINE6_FORMAT[] = "%03d";

const char PROGMEM STRING_1[] = "AUTOWINDING DONE";
const char PROGMEM STRING_2[] = "PRESS CONTINUE  ";

const char PROGMEM MENU_01[] = "Setup 1";
const char PROGMEM MENU_02[] = "Setup 2";
const char PROGMEM MENU_03[] = "Setup 3";
const char PROGMEM MENU_04[] = "Pos control";
const char PROGMEM MENU_05[] = "Settings";
const char PROGMEM MENU_06[] = "Winding 1";
const char PROGMEM MENU_07[] = "Winding 2";
const char PROGMEM MENU_08[] = "Winding 3";
const char PROGMEM MENU_09[] = "Back";  
const char PROGMEM MENU_10[] = "Turns:";
const char PROGMEM MENU_11[] = "Step:";
const char PROGMEM MENU_12[] = "Speed:";
const char PROGMEM MENU_13[] = "Layers:";
const char PROGMEM MENU_14[] = "Direction";
const char PROGMEM MENU_15[] = "Start";
const char PROGMEM MENU_17[] = "SH pos:";
const char PROGMEM MENU_18[] = "StpMul:";
const char PROGMEM MENU_19[] = "LA pos:";
const char PROGMEM MENU_22[] = "LayerStop";
const char PROGMEM MENU_23[] = "Accel";

#endif
