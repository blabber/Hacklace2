/*
 * Font.h
 *
 */ 

/**********************************************************************************

Description:		Proportional character font and animation data

Author:				Frank Andre
Copyright 2013:		Frank Andre
License:			This software is distributed under a hardware-bound GPL license as
					follows:
					(1) This software must only be executed on the original Hacklace2 
					printed circuit board with the fab4U logo on it. 
					(2) As long as (1) is not violated this software is licensed under 
					the GNU GPLv3 (see license.md or http://www.gnu.org/licenses/).
Disclaimer:			This software is provided by the copyright holder "as is" and any 
					express or implied warranties, including, but not limited to, the 
					implied warranties of merchantability and fitness for a particular 
					purpose are disclaimed. In no event shall the copyright owner or 
					contributors be liable for any direct, indirect, incidental, 
					special, exemplary, or consequential damages (including, but not 
					limited to, procurement of substitute goods or services; loss of 
					use, data, or profits; or business interruption) however caused 
					and on any theory of liability, whether in contract, strict 
					liability, or tort (including negligence or otherwise) arising 
					in any way out of the use of this software, even if advised of 
					the possibility of such damage.
					
**********************************************************************************/

#ifndef FONT_H_
#define FONT_H_

#include <avr/pgmspace.h>

#define FLASHDATA	const unsigned char PROGMEM

#define CHAR_BASE	0


// character pixel data
// (first byte = character width)

FLASHDATA chr_000[] = {0x08, 0x3E, 0x08, 0xFE, 0x80, 0x80, 0x19, 0x15, 0x12};	// Hacklace logo
FLASHDATA chr_001[] = {0x08, 0x00, 0x20, 0x44, 0x40, 0x44, 0x20, 0x00, 0x00};	// happy smiley
FLASHDATA chr_002[] = {0x08, 0x00, 0x40, 0x24, 0x20, 0x24, 0x40, 0x00, 0x00};	// sad smiley
FLASHDATA chr_003[] = {0x05, 0x18, 0xEC, 0x5C, 0xEC, 0x18};	// skull
FLASHDATA chr_004[] = {0x05, 0x18, 0x24, 0x48, 0x24, 0x18};	// heart
FLASHDATA chr_005[] = {0x05, 0xD8, 0x34, 0xDE, 0x34, 0xD8};	// invader1
FLASHDATA chr_006[] = {0x05, 0xFA, 0xB4, 0x3C, 0xB4, 0xFA};	// invader2
FLASHDATA chr_007[] = {0x05, 0x9C, 0xF6, 0x1E, 0xF6, 0x9C};	// invader3
FLASHDATA chr_008[] = {0x05, 0xF8, 0x74, 0xFC, 0x74, 0xF8};	// ghost
FLASHDATA chr_009[] = {0x05, 0x3C, 0x68, 0xF8, 0x68, 0x3C};	// fox
FLASHDATA chr_010[] = {0x07, 0x7C, 0x40, 0x40, 0x00, 0x7C, 0x14, 0x04};	// <LF>
FLASHDATA chr_011[] = {0x05, 0x60, 0x60, 0x3E, 0xCA, 0xFC};	// 2 musical notes
FLASHDATA chr_012[] = {0x04, 0xC0, 0xFE, 0x04, 0x18};	// musical note
FLASHDATA chr_013[] = {0x07, 0x38, 0x44, 0x44, 0x00, 0x7C, 0x14, 0x68};	// <CR>
FLASHDATA chr_014[] = {0x05, 0x06, 0x8A, 0xF2, 0x8A, 0x06};	// glass
FLASHDATA chr_015[] = {0x04, 0xFC, 0xF4, 0xF4, 0xFE};	// mobile
FLASHDATA chr_016[] = {0x04, 0xE0, 0xCC, 0xAA, 0x19};	// flash
FLASHDATA chr_017[] = {0x05, 0x0E, 0x71, 0xF9, 0x71, 0x0E};	// lightbulb
FLASHDATA chr_018[] = {0x05, 0x10, 0x38, 0x54, 0x10, 0x10};	// <-
FLASHDATA chr_019[] = {0x05, 0x10, 0x10, 0x54, 0x38, 0x10};	// ->
FLASHDATA chr_020[] = {0x05, 0x60, 0x90, 0x9A, 0x66, 0x0E};	// male
FLASHDATA chr_021[] = {0x05, 0x0C, 0x52, 0xF2, 0x52, 0x0C};	// female
FLASHDATA chr_022[] = {0x07, 0x0C, 0xEE, 0xB2, 0x9A, 0xB2, 0xEE, 0x0C};	// telephone
FLASHDATA chr_023[] = {0x05, 0x88, 0x48, 0x3A, 0x48, 0x88};	// stick figure
FLASHDATA chr_024[] = {0x07, 0x10, 0x28, 0x54, 0xAA, 0x54, 0x28, 0x10};	// diamond
FLASHDATA chr_025[] = {0x05, 0x38, 0x44, 0x5C, 0x54, 0x38};	// clock
FLASHDATA chr_026[] = {0x05, 0x20, 0x3C, 0x7E, 0x3C, 0x20};	// bell
FLASHDATA chr_027[] = {0x05, 0xC6, 0xAA, 0x92, 0x82, 0x82};	// sigma
FLASHDATA chr_028[] = {0x05, 0xB8, 0xC4, 0x04, 0xC4, 0xB8};	// omega
FLASHDATA chr_029[] = {0x06, 0x10, 0x38, 0x7C, 0xFE, 0xC6, 0x82};	// left
FLASHDATA chr_030[] = {0x06, 0x82, 0xC6, 0xFE, 0x7C, 0x38, 0x10};	// right
FLASHDATA chr_031[] = {0x07, 0x70, 0x88, 0x70, 0x00, 0xFE, 0x10, 0xEC};	// ok
FLASHDATA chr_032[] = {0x03, 0x00, 0x00, 0x00};	// <space>
FLASHDATA chr_033[] = {0x01, 0xBE};	// !
FLASHDATA chr_034[] = {0x03, 0x06, 0x00, 0x06};	// "
FLASHDATA chr_035[] = {0x05, 0x28, 0xFE, 0x28, 0xFE, 0x28};	// #
FLASHDATA chr_036[] = {0x05, 0x48, 0x54, 0xFE, 0x54, 0x24};	// $
FLASHDATA chr_037[] = {0x05, 0x46, 0x26, 0x10, 0xC8, 0xC4};	// %
FLASHDATA chr_038[] = {0x05, 0x6C, 0x92, 0xAC, 0x40, 0xA0};	// &
FLASHDATA chr_039[] = {0x02, 0x0A, 0x06};	// '
FLASHDATA chr_040[] = {0x03, 0x38, 0x44, 0x82};	// (
FLASHDATA chr_041[] = {0x03, 0x82, 0x44, 0x38};	// )
FLASHDATA chr_042[] = {0x05, 0x44, 0x28, 0xD6, 0x28, 0x44};	// *
FLASHDATA chr_043[] = {0x05, 0x10, 0x10, 0x7C, 0x10, 0x10};	// +
FLASHDATA chr_044[] = {0x02, 0x80, 0x40};	// ,
FLASHDATA chr_045[] = {0x04, 0x10, 0x10, 0x10, 0x10};	// -
FLASHDATA chr_046[] = {0x01, 0x80};	// .
FLASHDATA chr_047[] = {0x05, 0xC0, 0x20, 0x10, 0x08, 0x06};	// /
FLASHDATA chr_048[] = {0x04, 0x7C, 0x82, 0x82, 0x7C};	// 0
FLASHDATA chr_049[] = {0x03, 0x84, 0xFE, 0x80};	// 1
FLASHDATA chr_050[] = {0x04, 0xC4, 0xA2, 0x92, 0x8C};	// 2
FLASHDATA chr_051[] = {0x04, 0x44, 0x82, 0x92, 0x6C};	// 3
FLASHDATA chr_052[] = {0x04, 0x30, 0x28, 0x24, 0xFE};	// 4
FLASHDATA chr_053[] = {0x04, 0x4E, 0x8A, 0x8A, 0x72};	// 5
FLASHDATA chr_054[] = {0x04, 0x78, 0x94, 0x92, 0x62};	// 6
FLASHDATA chr_055[] = {0x04, 0x02, 0xE2, 0x1A, 0x06};	// 7
FLASHDATA chr_056[] = {0x04, 0x6C, 0x92, 0x92, 0x6C};	// 8
FLASHDATA chr_057[] = {0x04, 0x0C, 0x92, 0x52, 0x3C};	// 9
FLASHDATA chr_058[] = {0x01, 0x50};	// :
FLASHDATA chr_059[] = {0x02, 0x80, 0x50};	// ;
FLASHDATA chr_060[] = {0x04, 0x10, 0x28, 0x44, 0x82};	// <
FLASHDATA chr_061[] = {0x04, 0x28, 0x28, 0x28, 0x28};	// =
FLASHDATA chr_062[] = {0x04, 0x82, 0x44, 0x28, 0x10};	// >
FLASHDATA chr_063[] = {0x04, 0x04, 0xA2, 0x12, 0x0C};	// ?
FLASHDATA chr_064[] = {0x05, 0x64, 0x92, 0xF2, 0x82, 0x7C};	// @
FLASHDATA chr_065[] = {0x04, 0xFC, 0x12, 0x12, 0xFC};	// A
FLASHDATA chr_066[] = {0x04, 0xFE, 0x92, 0x92, 0x6C};	// B
FLASHDATA chr_067[] = {0x04, 0x7C, 0x82, 0x82, 0x44};	// C
FLASHDATA chr_068[] = {0x04, 0xFE, 0x82, 0x82, 0x7C};	// D
FLASHDATA chr_069[] = {0x04, 0xFE, 0x92, 0x92, 0x82};	// E
FLASHDATA chr_070[] = {0x04, 0xFE, 0x12, 0x12, 0x02};	// F
FLASHDATA chr_071[] = {0x04, 0x7C, 0x82, 0x92, 0x74};	// G
FLASHDATA chr_072[] = {0x04, 0xFE, 0x10, 0x10, 0xFE};	// H
FLASHDATA chr_073[] = {0x03, 0x82, 0xFE, 0x82};	// I
FLASHDATA chr_074[] = {0x04, 0x40, 0x80, 0x80, 0x7E};	// J
FLASHDATA chr_075[] = {0x04, 0xFE, 0x10, 0x28, 0xC6};	// K
FLASHDATA chr_076[] = {0x04, 0xFE, 0x80, 0x80, 0x80};	// L
FLASHDATA chr_077[] = {0x05, 0xFE, 0x04, 0x18, 0x04, 0xFE};	// M
FLASHDATA chr_078[] = {0x04, 0xFE, 0x0C, 0x30, 0xFE};	// N
FLASHDATA chr_079[] = {0x04, 0x7C, 0x82, 0x82, 0x7C};	// O
FLASHDATA chr_080[] = {0x04, 0xFE, 0x12, 0x12, 0x0C};	// P
FLASHDATA chr_081[] = {0x04, 0x7C, 0x82, 0x42, 0xBC};	// Q
FLASHDATA chr_082[] = {0x04, 0xFE, 0x12, 0x32, 0xCC};	// R
FLASHDATA chr_083[] = {0x04, 0x4C, 0x92, 0x92, 0x64};	// S
FLASHDATA chr_084[] = {0x05, 0x02, 0x02, 0xFE, 0x02, 0x02};	// T
FLASHDATA chr_085[] = {0x04, 0x7E, 0x80, 0x80, 0x7E};	// U
FLASHDATA chr_086[] = {0x05, 0x0E, 0x30, 0xC0, 0x30, 0x0E};	// V
FLASHDATA chr_087[] = {0x05, 0x7E, 0x80, 0x70, 0x80, 0x7E};	// W
FLASHDATA chr_088[] = {0x05, 0xC6, 0x28, 0x10, 0x28, 0xC6};	// X
FLASHDATA chr_089[] = {0x05, 0x06, 0x08, 0xF0, 0x08, 0x06};	// Y
FLASHDATA chr_090[] = {0x04, 0xC2, 0xB2, 0x8A, 0x86};	// Z
FLASHDATA chr_091[] = {0x03, 0xFE, 0x82, 0x82};	// [
FLASHDATA chr_092[] = {0x05, 0x06, 0x08, 0x10, 0x20, 0xC0};	// backslash
FLASHDATA chr_093[] = {0x03, 0x82, 0x82, 0xFE};	// ]
FLASHDATA chr_094[] = {0x03, 0x04, 0x02, 0x04};	// ^
FLASHDATA chr_095[] = {0x04, 0x80, 0x80, 0x80, 0x80};	// _
FLASHDATA chr_096[] = {0x02, 0x06, 0x08};	// `
FLASHDATA chr_097[] = {0x04, 0x40, 0xA8, 0xA8, 0xF0};	// a
FLASHDATA chr_098[] = {0x04, 0xFE, 0x88, 0x88, 0x70};	// b
FLASHDATA chr_099[] = {0x04, 0x70, 0x88, 0x88, 0x50};	// c
FLASHDATA chr_100[] = {0x04, 0x70, 0x88, 0x88, 0xFE};	// d
FLASHDATA chr_101[] = {0x04, 0x70, 0xA8, 0xA8, 0x90};	// e
FLASHDATA chr_102[] = {0x04, 0x08, 0xFC, 0x0A, 0x02};	// f
FLASHDATA chr_103[] = {0x04, 0x10, 0xA8, 0xA8, 0x78};	// g
FLASHDATA chr_104[] = {0x04, 0xFE, 0x10, 0x10, 0xE0};	// h
FLASHDATA chr_105[] = {0x01, 0xFA};	// i
FLASHDATA chr_106[] = {0x03, 0x40, 0x80, 0x7A};	// j
FLASHDATA chr_107[] = {0x04, 0xFE, 0x10, 0x28, 0xC4};	// k
FLASHDATA chr_108[] = {0x03, 0x82, 0xFE, 0x80};	// l
FLASHDATA chr_109[] = {0x05, 0xF8, 0x08, 0xF0, 0x08, 0xF0};	// m
FLASHDATA chr_110[] = {0x04, 0xF8, 0x08, 0x08, 0xF0};	// n
FLASHDATA chr_111[] = {0x04, 0x70, 0x88, 0x88, 0x70};	// o
FLASHDATA chr_112[] = {0x04, 0xF8, 0x48, 0x48, 0x30};	// p
FLASHDATA chr_113[] = {0x04, 0x30, 0x48, 0x48, 0xF8};	// q
FLASHDATA chr_114[] = {0x03, 0xF0, 0x08, 0x08};	// r
FLASHDATA chr_115[] = {0x04, 0x90, 0xA8, 0xA8, 0x48};	// s
FLASHDATA chr_116[] = {0x04, 0x08, 0x7E, 0x88, 0x88};	// t
FLASHDATA chr_117[] = {0x04, 0x78, 0x80, 0x80, 0xF8};	// u
FLASHDATA chr_118[] = {0x05, 0x18, 0x60, 0x80, 0x60, 0x18};	// v
FLASHDATA chr_119[] = {0x05, 0x78, 0x80, 0x60, 0x80, 0x78};	// w
FLASHDATA chr_120[] = {0x05, 0x88, 0x50, 0x20, 0x50, 0x88};	// x
FLASHDATA chr_121[] = {0x04, 0x18, 0xA0, 0xA0, 0x78};	// y
FLASHDATA chr_122[] = {0x04, 0xC8, 0xA8, 0x98, 0x88};	// z
FLASHDATA chr_123[] = {0x03, 0x10, 0x6C, 0x82};	// {
FLASHDATA chr_124[] = {0x01, 0xFF};	// |
FLASHDATA chr_125[] = {0x03, 0x82, 0x6C, 0x10};	// }
FLASHDATA chr_126[] = {0x05, 0x10, 0x08, 0x10, 0x20, 0x10};	// ~
FLASHDATA chr_127[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// <del>
FLASHDATA chr_128[] = {0x18, 0x00, 0x0C, 0x12, 0x24, 0x12, 0x0C, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x0C, 0x12, 0x24, 0x12, 0x0C, 0x00, 0x00};	// animation 0
FLASHDATA chr_129[] = {0xA0, 0xB0, 0x64, 0xF0, 0xB8, 0xD0, 0xF0, 0xE2, 0xC0,
							 0xDA, 0xB0, 0xF8, 0x70, 0xE8, 0xF8, 0xF4, 0xE0,
							 0x62, 0xA8, 0xF0, 0xA0, 0xC4, 0xC4, 0xF0, 0xC2,
							 0xA0, 0x65, 0xF8, 0xC0, 0xC2, 0xE0, 0xD0, 0x80,
							 0x28, 0x30, 0xF4, 0xC0, 0x61, 0xF0, 0xE8, 0xC0,
							 0xC2, 0x50, 0xE4, 0xF0, 0xE0, 0xA4, 0xD1, 0x68,
							 0xE0, 0xB4, 0xC0, 0xF8, 0xD0, 0xE0, 0xC2, 0x90,
							 0x45, 0xD8, 0xA0, 0xCC, 0xE0, 0xF1, 0x60, 0xC2,
							 0x08, 0x30, 0xD0, 0xE2, 0xC0, 0xE4, 0xA0, 0x80,
							 0xC4, 0xB0, 0xE8, 0xF1, 0xE0, 0xC2, 0xD0, 0x40,
							 0xE2, 0xD0, 0xE4, 0xE0, 0x60, 0xC2, 0xE8, 0xC0,
							 0x88, 0x54, 0xC1, 0xF0, 0xA0, 0xE0, 0xF4, 0x82,
							 0xCC, 0x00, 0xE8, 0x62, 0x80, 0xD0, 0x88, 0x60,
							 0xE1, 0x80, 0x20, 0xD1, 0xE0, 0x68, 0xC2, 0x90,
							 0x88, 0xC0, 0x50, 0x94, 0xC0, 0xB0, 0xC1, 0xE8,
							 0x44, 0xE8, 0xC0, 0xE0, 0x70, 0xCC, 0x30, 0x82,
							 0xA2, 0x44, 0xC0, 0xE0, 0xF0, 0x84, 0x31, 0xC0,
							 0xC9, 0xC0, 0xB0, 0xC8, 0xE0, 0x52, 0xE0, 0x80,
							 0xE2, 0x50, 0xE0, 0x74, 0xF0, 0xA8, 0xE0, 0x50,
							 0xA0, 0xC8, 0xE0, 0xA2, 0xF0, 0xD4, 0xE0, 0x42};	// animation 1
FLASHDATA chr_130[] = {0x36, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x08, 0x08, 0x18,
							 0x30, 0x60, 0x40, 0x40, 0x40, 0x60, 0x30, 0x18,
							 0x08, 0x0C, 0x04, 0x06, 0x02, 0x02, 0x06, 0x1C,
							 0x30, 0x60, 0xC0, 0x80, 0x80, 0xC0, 0x40, 0x60,
							 0x30, 0x10, 0x18, 0x08, 0x08, 0x1C, 0x3E, 0x3E,
							 0x3E, 0x3E, 0x14, 0x14, 0x00, 0x00, 0x36, 0x22,
							 0x2A, 0x22, 0x2A, 0x22, 0x36, 0x00};	// animation 2
FLASHDATA chr_131[] = {0x88, 0x28, 0x54, 0x92, 0x92, 0x7C, 0x10, 0x00, 0x00,
							 0x00, 0x38, 0x54, 0x92, 0x7C, 0x10, 0x10, 0x00,
							 0x00, 0x00, 0x7C, 0x92, 0x7C, 0x10, 0x10, 0x10,
							 0x00, 0xFE, 0x44, 0x38, 0x10, 0x10, 0x10, 0x10,
							 0xFE, 0x44, 0x38, 0x00, 0x10, 0x10, 0x10, 0x10,
							 0x38, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10,
							 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00,
							 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
							 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00,
							 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00,
							 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x24, 0x48,
							 0x00, 0x00, 0x00, 0x18, 0x24, 0x48, 0x24, 0x18,
							 0x00, 0x00, 0x18, 0x24, 0x48, 0x24, 0x18, 0x00};	// animation 3
FLASHDATA chr_132[] = {0x88, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x03,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x09, 0x06,
							 0x00, 0x00, 0x00, 0x00, 0x0C, 0x12, 0x12, 0x0C,
							 0x00, 0x00, 0x00, 0x18, 0x24, 0x24, 0x18, 0x00,
							 0x00, 0x00, 0x30, 0x48, 0x48, 0x30, 0x00, 0x00,
							 0x00, 0x60, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00,
							 0x00, 0x40, 0xA0, 0xA0, 0x40, 0x00, 0x00, 0x00,
							 0x00, 0x60, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00,
							 0x00, 0x30, 0x48, 0x48, 0x30, 0x00, 0x00, 0x00,
							 0x18, 0x24, 0x24, 0x18, 0x00, 0x00, 0x00, 0x00,
							 0x0C, 0x12, 0x12, 0x0C, 0x00, 0x00, 0x00, 0x00,
							 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 4
FLASHDATA chr_133[] = {0x19, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
							 0x10, 0x20, 0x20, 0x1F, 0xE0, 0x20, 0x20, 0x10,
							 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
							 0x20};	// animation 5
FLASHDATA chr_134[] = {0x60, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80,
							 0x80, 0x80, 0x80, 0x83, 0x80, 0x80, 0x80, 0x80,
							 0x80, 0x80, 0x80, 0x85, 0x80, 0x80, 0x80, 0x80,
							 0x80, 0x80, 0x80, 0x89, 0x80, 0x80, 0x80, 0x80,
							 0x80, 0x80, 0x80, 0x91, 0x80, 0x80, 0x80, 0x80,
							 0x80, 0x80, 0x80, 0x41, 0x80, 0x80, 0x80, 0x80,
							 0x80, 0x80, 0x80, 0xA1, 0x80, 0x80, 0x80, 0x80,
							 0x80, 0x80, 0x90, 0x81, 0x90, 0x80, 0x80, 0x80,
							 0x80, 0x88, 0x80, 0x81, 0x80, 0x88, 0x80, 0x80,
							 0x90, 0x80, 0x80, 0x81, 0x80, 0x80, 0x90, 0x80,
							 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0xA0,
							 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80};	// animation 6
FLASHDATA chr_135[] = {0x3C, 0x7E, 0xCE, 0xC8, 0x48, 0xCC, 0xCC, 0x48, 0xDE,
							 0xD2, 0xD2, 0x7E, 0x02, 0x00, 0x78, 0xC8, 0xCC,
							 0x4E, 0xCE, 0xCC, 0x78, 0x00, 0x00, 0x42, 0x7E,
							 0xD2, 0xD2, 0x5E, 0x52, 0x52, 0x5E, 0xD2, 0xD2,
							 0x7E, 0x42, 0x00, 0x00, 0x40, 0x7C, 0xC4, 0xC4,
							 0x46, 0x46, 0x46, 0xC4, 0xC4, 0x7C, 0x40, 0x00,
							 0x00, 0x78, 0xC8, 0xF8, 0x48, 0x78, 0x48, 0x78,
							 0x48, 0xF8, 0xC8, 0x78};	// animation 7
FLASHDATA chr_136[] = {0xF8, 0x00, 0x00, 0x80, 0x80, 0x11, 0x01, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x89, 0x81, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x05, 0x01, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x05, 0x01, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00,
							 0x01, 0x09, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00,
							 0x00, 0x01, 0x11, 0x00, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x01, 0x21, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x01, 0xC1, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x81, 0xA1, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x80, 0x81, 0x11, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x01, 0x09, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x00, 0x01, 0x05, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x00, 0x00, 0x03, 0x01, 0x00,
							 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x05, 0x01,
							 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x01, 0x09,
							 0x00, 0x00, 0x80, 0x80, 0x00, 0x01, 0x11, 0x00,
							 0x00, 0x00, 0x80, 0x80, 0x01, 0x21, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x81, 0xC1, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x21, 0x81, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x11, 0x81, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x09, 0x81, 0x80, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x85, 0x81, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x83, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x83, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x81, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x80, 0x81, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x81, 0x11, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x80, 0x81, 0x01, 0x40, 0x00, 0x00,
							 0x00, 0x00, 0x01, 0x81, 0x80, 0x00, 0x80, 0x00,
							 0x00, 0x01, 0x01, 0x00, 0x80, 0x80, 0x00, 0x00};	// animation 8
FLASHDATA chr_137[] = {0x38, 0x00, 0x00, 0x26, 0x20, 0x26, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x26, 0x20, 0x26, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x26, 0x20, 0x26, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x26, 0x20, 0x24, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x26, 0x20, 0x26, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x26, 0x20, 0x26, 0x00, 0x00, 0x00,
							 0x00, 0x10, 0x26, 0x20, 0x26, 0x10, 0x00, 0x00};	// animation 9
FLASHDATA chr_138[] = {0xF0, 0xFF, 0x81, 0x85, 0xBD, 0x85, 0x81, 0xBD, 0x99,
							 0x81, 0x85, 0xBD, 0x85, 0x81, 0xBD, 0x99, 0xBD,
							 0x85, 0xBD, 0x85, 0x81, 0xBD, 0x99, 0xBD, 0x81,
							 0xBD, 0x85, 0x81, 0xBD, 0x99, 0xBD, 0x81, 0x85,
							 0x85, 0x81, 0xBD, 0x99, 0xBD, 0x81, 0x85, 0xBD,
							 0x81, 0xBD, 0x99, 0xBD, 0x81, 0x85, 0xBD, 0x85,
							 0xBD, 0x81, 0x85, 0xBD, 0x85, 0x81, 0xFF, 0x08,
							 0x81, 0x85, 0xBD, 0x85, 0x81, 0xFF, 0x08, 0x08,
							 0x85, 0xBD, 0x85, 0x81, 0xFF, 0x08, 0x08, 0x04,
							 0xBD, 0x85, 0x81, 0xFF, 0x08, 0x08, 0x04, 0x04,
							 0x85, 0x81, 0xFF, 0x08, 0x08, 0x04, 0x04, 0x02,
							 0x81, 0xFF, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02,
							 0xFF, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02,
							 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x04,
							 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08,
							 0x04, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08, 0x10,
							 0x04, 0x02, 0x02, 0x02, 0x04, 0x28, 0x10, 0x24,
							 0x04, 0x04, 0x02, 0x02, 0x02, 0x14, 0x02, 0x08,
							 0x08, 0x04, 0x04, 0x02, 0x02, 0x04, 0x01, 0x00,
							 0x08, 0x08, 0x04, 0x05, 0x02, 0x04, 0x01, 0x00,
							 0xFF, 0x08, 0x08, 0x04, 0x05, 0x08, 0x04, 0x00,
							 0x81, 0xFF, 0x08, 0x0A, 0x04, 0x02, 0x08, 0x00,
							 0x81, 0xFF, 0x08, 0x04, 0x10, 0x00, 0x00, 0x00,
							 0x81, 0xFF, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00,
							 0x81, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x81, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x99, 0x3C, 0x68, 0x3A, 0x40, 0x8A, 0x20, 0x21,
							 0x54, 0xED, 0xDE, 0x7A, 0x3F, 0x4E, 0x18, 0xD3,
							 0x5C, 0xFF, 0xFC, 0xFF, 0xDB, 0xBE, 0x5D, 0x3A,
							 0xFD, 0xFF, 0xF7, 0x7F, 0xFD, 0xFD, 0xEF, 0xFF};	// animation 10
FLASHDATA chr_139[] = {0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00,
							 0x00, 0x40, 0x60, 0x50, 0x48, 0x44, 0x00, 0x00,
							 0x00, 0x44, 0x64, 0x54, 0x4C, 0x44, 0x00, 0x00,
							 0x00, 0x44, 0x6C, 0x54, 0x6C, 0x44, 0x00, 0x00,
							 0x00, 0x44, 0x6C, 0x54, 0x6C, 0x7C, 0x00, 0x00,
							 0x00, 0x44, 0x6C, 0x55, 0x6E, 0x7C, 0x00, 0x00,
							 0x00, 0x44, 0x6E, 0x55, 0x6E, 0x7C, 0x00, 0x00,
							 0x00, 0x7C, 0x6E, 0x55, 0x6E, 0x7C, 0x00, 0x00};	// animation 11
FLASHDATA chr_140[] = {0x90, 0x7C, 0x42, 0x72, 0x7C, 0x42, 0x72, 0x7C, 0x00,
							 0x7C, 0x42, 0x72, 0x7C, 0x42, 0x72, 0x7C, 0x00,
							 0x7C, 0x72, 0x42, 0x7C, 0x72, 0x42, 0x7C, 0x00,
							 0x7C, 0x76, 0x46, 0x7C, 0x76, 0x46, 0x7C, 0x00,
							 0x7C, 0x72, 0x42, 0x7C, 0x72, 0x42, 0x7C, 0x00,
							 0x7C, 0x42, 0x72, 0x7C, 0x42, 0x72, 0x7C, 0x00,
							 0x7C, 0x46, 0x76, 0x7C, 0x46, 0x76, 0x7C, 0x00,
							 0x7C, 0x4E, 0x6E, 0x7C, 0x4E, 0x6E, 0x7C, 0x00,
							 0x7C, 0x5E, 0x7E, 0x7C, 0x5E, 0x7E, 0x7C, 0x00,
							 0x7C, 0x4E, 0x6E, 0x7C, 0x4E, 0x6E, 0x7C, 0x00,
							 0x7C, 0x5E, 0x7E, 0x7C, 0x5E, 0x7E, 0x7C, 0x00,
							 0x7C, 0x7E, 0x7E, 0x7C, 0x7E, 0x7E, 0x7C, 0x00,
							 0x7C, 0x7E, 0x7E, 0x7C, 0x7E, 0x7E, 0x7C, 0x00,
							 0x7C, 0x5E, 0x7E, 0x7C, 0x5E, 0x7E, 0x7C, 0x00,
							 0x7C, 0x7E, 0x7E, 0x7C, 0x7E, 0x7E, 0x7C, 0x00,
							 0x7C, 0x7E, 0x7E, 0x7C, 0x7E, 0x7E, 0x7C, 0x00,
							 0x7C, 0x7E, 0x7E, 0x7C, 0x7E, 0x7E, 0x7C, 0x00,
							 0xC8, 0xA8, 0x98, 0x00, 0x19, 0x15, 0x13, 0x00};	// animation 12
FLASHDATA chr_141[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 13
FLASHDATA chr_142[] = {0x80, 0x00, 0x8C, 0x48, 0x3A, 0x48, 0x98, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x98, 0x48, 0x3A, 0x48, 0x8C, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x8C, 0x48, 0x3A, 0x48, 0x98, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x98, 0x48, 0x3A, 0x48, 0x8C, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x02, 0xC4, 0x3A, 0xC4, 0x02, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x88, 0x48, 0x3A, 0x48, 0x88, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x10, 0xC8, 0x3A, 0x48, 0x88, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x88, 0x48, 0x3A, 0xC8, 0x10, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 14
FLASHDATA chr_143[] = {0xB0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01,
							 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02,
							 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x04,
							 0x02, 0x00, 0x08, 0x01, 0x04, 0x00, 0x01, 0x08,
							 0x04, 0x00, 0x10, 0x02, 0x08, 0x00, 0x02, 0x10,
							 0x08, 0x01, 0x20, 0x04, 0x11, 0x00, 0x04, 0x20,
							 0x10, 0x00, 0x41, 0x08, 0x22, 0x00, 0x08, 0x40,
							 0x21, 0x00, 0x82, 0x10, 0x44, 0x01, 0x10, 0x80,
							 0x42, 0x00, 0x85, 0x20, 0x88, 0x02, 0x20, 0x80,
							 0x84, 0x00, 0x8A, 0x40, 0x90, 0x04, 0x41, 0x80,
							 0x88, 0x01, 0x94, 0x80, 0xA0, 0x08, 0x82, 0x80,
							 0x90, 0x02, 0xA8, 0x81, 0xC0, 0x11, 0x84, 0x80,
							 0xA0, 0x04, 0xD0, 0x82, 0xC0, 0x22, 0x88, 0x80,
							 0xC0, 0x08, 0xE0, 0x84, 0xC0, 0x45, 0x90, 0x80,
							 0xC0, 0x90, 0xE0, 0x88, 0xC0, 0x8A, 0xA0, 0x80,
							 0xC0, 0xA0, 0xE0, 0x90, 0xC0, 0x94, 0xA0, 0x80,
							 0xC0, 0xC0, 0xE0, 0xA0, 0xC0, 0xA8, 0xC0, 0x80,
							 0xC0, 0xC0, 0xE0, 0xC0, 0xC0, 0xD0, 0xC0, 0x80,
							 0xC0, 0xC0, 0xE0, 0xC0, 0xC0, 0xE0, 0xC0, 0x80,
							 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80,
							 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80,
							 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80};	// animation 15
FLASHDATA chr_144[] = {0x38, 0x08, 0x08, 0x08, 0x89, 0x89, 0x08, 0x08, 0x08,
							 0x08, 0x08, 0x89, 0xCA, 0xCA, 0x89, 0x08, 0x08,
							 0x08, 0x08, 0xCB, 0xEC, 0xEC, 0xCB, 0x08, 0x08,
							 0x08, 0x08, 0x3E, 0xF9, 0xF9, 0x3E, 0x08, 0x08,
							 0x08, 0x08, 0x1C, 0x7A, 0x7A, 0x1C, 0x08, 0x08,
							 0x08, 0x08, 0x08, 0x1C, 0x1C, 0x08, 0x08, 0x08,
							 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08};	// animation 16
FLASHDATA chr_145[] = {0x80, 0x00, 0x20, 0x00, 0x1E, 0x00, 0x40, 0x00, 0x01,
							 0x00, 0x20, 0x00, 0x18, 0x06, 0x00, 0x00, 0x00,
							 0x00, 0x20, 0x00, 0x10, 0x0C, 0x04, 0x00, 0x01,
							 0x00, 0x20, 0x00, 0x10, 0x14, 0x08, 0x08, 0x00,
							 0x00, 0x00, 0x00, 0x10, 0x14, 0x10, 0x10, 0x01,
							 0x00, 0x00, 0x00, 0x10, 0x14, 0x30, 0x20, 0x00,
							 0x00, 0x00, 0x00, 0x10, 0x24, 0x50, 0x00, 0x01,
							 0x00, 0x00, 0x00, 0x30, 0xC4, 0x50, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0xF0, 0x04, 0x50, 0x00, 0x01,
							 0x00, 0x00, 0xC0, 0x30, 0x04, 0x50, 0x00, 0x00,
							 0x00, 0x40, 0x20, 0x10, 0x04, 0x50, 0x00, 0x01,
							 0x20, 0x20, 0x10, 0x10, 0x04, 0x50, 0x00, 0x00,
							 0x10, 0x30, 0x10, 0x10, 0x00, 0x50, 0x00, 0x01,
							 0x08, 0x28, 0x10, 0x10, 0x00, 0x50, 0x00, 0x00,
							 0x00, 0x24, 0x08, 0x10, 0x00, 0x50, 0x00, 0x01,
							 0x00, 0x20, 0x06, 0x18, 0x00, 0x40, 0x00, 0x00};	// animation 17
FLASHDATA chr_146[] = {0x10, 0x80, 0xC0, 0xA0, 0xF8, 0x1F, 0x05, 0x03, 0x01,
							 0x0F, 0x0A, 0x0C, 0x18, 0x18, 0x30, 0x50, 0xF0};	// animation 18
FLASHDATA chr_147[] = {0xC8, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xC0, 0xE0,
							 0x00, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xE0, 0xF0,
							 0x40, 0x20, 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38,
							 0x20, 0x20, 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38,
							 0x10, 0xA0, 0x60, 0xE0, 0x60, 0xF8, 0x70, 0xB8,
							 0x20, 0x20, 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38,
							 0x10, 0xA0, 0x60, 0xE0, 0x60, 0xF8, 0x70, 0xB8,
							 0x20, 0x20, 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38,
							 0x10, 0xA0, 0x60, 0xE0, 0x60, 0xF8, 0x70, 0xB8,
							 0x20, 0x20, 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38,
							 0x10, 0xA0, 0x60, 0xE0, 0x60, 0xF8, 0x70, 0xB8,
							 0x20, 0x20, 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38,
							 0x10, 0xA0, 0x60, 0xE0, 0x60, 0xF8, 0x70, 0xB8,
							 0x20, 0x20, 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38,
							 0xA0, 0x60, 0xE0, 0x60, 0xF8, 0x70, 0xB8, 0x00,
							 0xE0, 0x60, 0xE0, 0x78, 0xF0, 0x38, 0x00, 0x00,
							 0x60, 0xE0, 0x67, 0xFF, 0x77, 0xBF, 0x07, 0x07,
							 0x20, 0xE0, 0x7E, 0xFE, 0x7F, 0xFF, 0x3E, 0x3E,
							 0x10, 0xA0, 0xF8, 0xFA, 0xFE, 0xFE, 0xFA, 0xF8,
							 0x20, 0xA0, 0xF8, 0xFA, 0xFE, 0xFE, 0xFA, 0xF8,
							 0x40, 0xA0, 0xF8, 0xFA, 0xFE, 0xFE, 0xFA, 0xF8,
							 0x00, 0x80, 0xF8, 0xFA, 0xFE, 0xFE, 0xFA, 0xF8,
							 0x00, 0x80, 0xBE, 0xBE, 0xBF, 0xBF, 0xBE, 0xBE,
							 0x00, 0x80, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87,
							 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80};	// animation 19
FLASHDATA chr_148[] = {0x40, 0xE0, 0xE0, 0xE0, 0x08, 0x10, 0x07, 0x07, 0x07,
							 0xC0, 0xC0, 0x0C, 0x0C, 0x30, 0x30, 0x03, 0x03,
							 0x80, 0x0E, 0x0E, 0x0E, 0x70, 0x70, 0x70, 0x01,
							 0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0,
							 0x07, 0x07, 0x07, 0x10, 0x08, 0xE0, 0xE0, 0xE0,
							 0x03, 0x03, 0x30, 0x30, 0x0C, 0x0C, 0xC0, 0xC0,
							 0x01, 0x70, 0x70, 0x70, 0x0E, 0x0E, 0x0E, 0x80,
							 0xF0, 0xF0, 0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F};	// animation 20
FLASHDATA chr_149[] = {0xF8, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00,
							 0x00, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x83, 0x83, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x8C, 0x8C, 0x00, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x98, 0x18, 0x00, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x80, 0x30, 0x30, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0x00, 0x00,
							 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00,
							 0x00, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0x00, 0x00,
							 0x00, 0x00, 0x01, 0x07, 0x84, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x02, 0x0E, 0x88, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x18, 0x08, 0x8C, 0x80, 0x00, 0x00,
							 0x00, 0x00, 0x30, 0x10, 0x98, 0x80, 0x00, 0x00,
							 0x00, 0x60, 0x20, 0x30, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xC0, 0x40, 0x60, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xC0, 0x47, 0x64, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xCE, 0x48, 0x60, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xFC, 0x60, 0x60, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xFC, 0x61, 0x63, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xFC, 0x62, 0x66, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xFC, 0x64, 0x6C, 0x80, 0x80, 0x00, 0x00,
							 0x00, 0xFC, 0x60, 0x6C, 0x88, 0x80, 0x00, 0x00,
							 0x00, 0xFC, 0x60, 0x60, 0x98, 0x90, 0x00, 0x00,
							 0x00, 0xFC, 0x60, 0x60, 0xA0, 0xB0, 0x00, 0x00,
							 0x00, 0xFC, 0x60, 0x60, 0xC0, 0xE0, 0x00, 0x00,
							 0x00, 0xBC, 0x20, 0x20, 0x80, 0xA0, 0x00, 0x00};	// animation 21
FLASHDATA chr_150[] = {0x88, 0x00, 0xFC, 0x60, 0x60, 0xC0, 0xE0, 0x00, 0x00,
							 0x00, 0xF8, 0x40, 0x40, 0x80, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x41, 0x47, 0x84, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x42, 0x4E, 0x88, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x58, 0x48, 0x8C, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x70, 0x50, 0x98, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x73, 0x53, 0x98, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x76, 0x56, 0x98, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x7D, 0x5F, 0x98, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x7C, 0x5D, 0x9B, 0xC0, 0x00, 0x00,
							 0x00, 0xF8, 0x7C, 0x5C, 0x9A, 0xC6, 0x00, 0x00,
							 0x00, 0xF8, 0x7C, 0x5C, 0x9C, 0xCC, 0x00, 0x00,
							 0x00, 0xF0, 0x74, 0x54, 0x94, 0xC4, 0x00, 0x00,
							 0x00, 0xF8, 0x7C, 0x5C, 0x9C, 0xCC, 0x00, 0x00,
							 0x00, 0xF0, 0x7B, 0x5B, 0x98, 0xC8, 0x00, 0x00,
							 0x00, 0xF6, 0x7E, 0x58, 0x98, 0xC8, 0x00, 0x00,
							 0x00, 0xF6, 0x7F, 0x59, 0x99, 0xC8, 0x00, 0x00};	// animation 22
FLASHDATA chr_151[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 23
FLASHDATA chr_152[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 24
FLASHDATA chr_153[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 25
FLASHDATA chr_154[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 26
FLASHDATA chr_155[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 27
FLASHDATA chr_156[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 28
FLASHDATA chr_157[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 29
FLASHDATA chr_158[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 30
FLASHDATA chr_159[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};	// animation 31
FLASHDATA chr_160[] = {0x01, 0x00};	// .
FLASHDATA chr_161[] = {0x01, 0xFA};	// .
FLASHDATA chr_162[] = {0x05, 0x38, 0x44, 0xFE, 0x44, 0x20};	// .
FLASHDATA chr_163[] = {0x05, 0x90, 0x7C, 0x92, 0x82, 0x40};	// .
FLASHDATA chr_164[] = {0x05, 0x38, 0x54, 0x92, 0x92, 0x44};	// .
FLASHDATA chr_165[] = {0x05, 0x2A, 0x2C, 0xF8, 0x2C, 0x2A};	// .
FLASHDATA chr_166[] = {0x05, 0x48, 0x95, 0x96, 0x95, 0x64};	// .
FLASHDATA chr_167[] = {0x05, 0x40, 0x94, 0xAA, 0x52, 0x04};	// .
FLASHDATA chr_168[] = {0x04, 0x90, 0xA9, 0xAA, 0x49};	// .
FLASHDATA chr_169[] = {0x05, 0xFE, 0x82, 0xBA, 0x92, 0xFE};	// .
FLASHDATA chr_170[] = {0x04, 0x48, 0x55, 0x55, 0x5E};	// .
FLASHDATA chr_171[] = {0x06, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44};	// .
FLASHDATA chr_172[] = {0x04, 0x10, 0x10, 0x10, 0x30};	// .
FLASHDATA chr_173[] = {0x03, 0x10, 0x10, 0x10};	// .
FLASHDATA chr_174[] = {0x05, 0xFE, 0x82, 0xCA, 0xA2, 0xFE};	// .
FLASHDATA chr_175[] = {0x04, 0x02, 0x02, 0x02, 0x02};	// .
FLASHDATA chr_176[] = {0x04, 0x06, 0x09, 0x09, 0x06};	// .
FLASHDATA chr_177[] = {0x03, 0x48, 0x5C, 0x48};	// .
FLASHDATA chr_178[] = {0x03, 0x19, 0x15, 0x12};	// .
FLASHDATA chr_179[] = {0x03, 0x11, 0x15, 0x0A};	// .
FLASHDATA chr_180[] = {0x04, 0xC4, 0xA5, 0x96, 0x8D};	// .
FLASHDATA chr_181[] = {0x04, 0xF8, 0x40, 0x40, 0x38};	// .
FLASHDATA chr_182[] = {0x05, 0x0C, 0x12, 0x12, 0xFE, 0xFE};	// .
FLASHDATA chr_183[] = {0x02, 0x18, 0x18};	// .
FLASHDATA chr_184[] = {0x04, 0xC8, 0xA9, 0x9A, 0x89};	// .
FLASHDATA chr_185[] = {0x03, 0x12, 0x1F, 0x10};	// .
FLASHDATA chr_186[] = {0x04, 0x4C, 0x52, 0x52, 0x4C};	// .
FLASHDATA chr_187[] = {0x06, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10};	// .
FLASHDATA chr_188[] = {0x06, 0x78, 0x84, 0x84, 0x7E, 0x92, 0x82};	// .
FLASHDATA chr_189[] = {0x07, 0x70, 0x88, 0x88, 0x70, 0xA8, 0xA8, 0x10};	// .
FLASHDATA chr_190[] = {0x05, 0x0C, 0x11, 0xE0, 0x11, 0x0C};	// .
FLASHDATA chr_191[] = {0x04, 0x60, 0x90, 0x8A, 0x40};	// .
FLASHDATA chr_192[] = {0x04, 0xF0, 0x29, 0x2A, 0xF0};	// .
FLASHDATA chr_193[] = {0x04, 0xF0, 0x2A, 0x29, 0xF0};	// .
FLASHDATA chr_194[] = {0x04, 0xF0, 0x2A, 0x29, 0xF2};	// .
FLASHDATA chr_195[] = {0x05, 0xF2, 0x29, 0x29, 0x2A, 0xF1};	// .
FLASHDATA chr_196[] = {0x04, 0xF9, 0x24, 0x24, 0xF9};	// .
FLASHDATA chr_197[] = {0x05, 0xF0, 0x2A, 0x2D, 0x2A, 0xF0};	// .
FLASHDATA chr_198[] = {0x06, 0xF8, 0x14, 0x12, 0xFE, 0x92, 0x82};	// .
FLASHDATA chr_199[] = {0x05, 0x1E, 0x21, 0xA1, 0xE1, 0x12};	// .
FLASHDATA chr_200[] = {0x04, 0xF8, 0xA9, 0xAA, 0x88};	// .
FLASHDATA chr_201[] = {0x04, 0xF8, 0xAA, 0xA9, 0x88};	// .
FLASHDATA chr_202[] = {0x04, 0xF8, 0xAA, 0xA9, 0x8A};	// .
FLASHDATA chr_203[] = {0x04, 0xF8, 0xAA, 0xA8, 0x8A};	// .
FLASHDATA chr_204[] = {0x03, 0x89, 0xFA, 0x88};	// .
FLASHDATA chr_205[] = {0x03, 0x88, 0xFA, 0x89};	// .
FLASHDATA chr_206[] = {0x03, 0x8A, 0xF9, 0x8A};	// .
FLASHDATA chr_207[] = {0x03, 0x8A, 0xF8, 0x8A};	// .
FLASHDATA chr_208[] = {0x05, 0x10, 0xFE, 0x92, 0x82, 0x7C};	// .
FLASHDATA chr_209[] = {0x05, 0xFA, 0x11, 0x21, 0x42, 0xF9};	// .
FLASHDATA chr_210[] = {0x04, 0x70, 0x89, 0x8A, 0x70};	// .
FLASHDATA chr_211[] = {0x04, 0x70, 0x8A, 0x89, 0x70};	// .
FLASHDATA chr_212[] = {0x04, 0x70, 0x8A, 0x89, 0x72};	// .
FLASHDATA chr_213[] = {0x05, 0x72, 0x89, 0x89, 0x8A, 0x71};	// .
FLASHDATA chr_214[] = {0x04, 0x79, 0x84, 0x84, 0x79};	// .
FLASHDATA chr_215[] = {0x05, 0x88, 0x50, 0x20, 0x50, 0x88};	// .
FLASHDATA chr_216[] = {0x05, 0x7C, 0xC2, 0xBA, 0x86, 0x7D};	// .
FLASHDATA chr_217[] = {0x04, 0x78, 0x81, 0x82, 0x78};	// .
FLASHDATA chr_218[] = {0x04, 0x78, 0x82, 0x81, 0x78};	// .
FLASHDATA chr_219[] = {0x04, 0x78, 0x82, 0x81, 0x7A};	// .
FLASHDATA chr_220[] = {0x04, 0x7D, 0x80, 0x80, 0x7D};	// .
FLASHDATA chr_221[] = {0x05, 0x0C, 0x10, 0xE2, 0x11, 0x0C};	// .
FLASHDATA chr_222[] = {0x05, 0x81, 0xFF, 0xA4, 0x24, 0x18};	// .
FLASHDATA chr_223[] = {0x05, 0x80, 0x7C, 0x92, 0x92, 0x6C};	// .
FLASHDATA chr_224[] = {0x04, 0x40, 0xA9, 0xAA, 0xF0};	// .
FLASHDATA chr_225[] = {0x04, 0x40, 0xAA, 0xA9, 0xF0};	// .
FLASHDATA chr_226[] = {0x04, 0x40, 0xAA, 0xA9, 0xF2};	// .
FLASHDATA chr_227[] = {0x05, 0x42, 0xA9, 0xA9, 0xAA, 0xF1};	// .
FLASHDATA chr_228[] = {0x04, 0x42, 0xA8, 0xA8, 0xF2};	// .
FLASHDATA chr_229[] = {0x04, 0x40, 0xAA, 0xAD, 0xF2};	// .
FLASHDATA chr_230[] = {0x07, 0x40, 0xA8, 0xA8, 0x70, 0xA8, 0xA8, 0x10};	// .
FLASHDATA chr_231[] = {0x04, 0x18, 0xA4, 0xE4, 0x24};	// .
FLASHDATA chr_232[] = {0x04, 0x70, 0xA9, 0xAA, 0x10};	// .
FLASHDATA chr_233[] = {0x04, 0x70, 0xAA, 0xA9, 0x10};	// .
FLASHDATA chr_234[] = {0x04, 0x70, 0xAA, 0xA9, 0x12};	// .
FLASHDATA chr_235[] = {0x04, 0x70, 0xAA, 0xA8, 0x12};	// .
FLASHDATA chr_236[] = {0x02, 0x01, 0xFA};	// .
FLASHDATA chr_237[] = {0x02, 0xFA, 0x01};	// .
FLASHDATA chr_238[] = {0x03, 0x02, 0xF9, 0x02};	// .
FLASHDATA chr_239[] = {0x03, 0x02, 0xF8, 0x02};	// .
FLASHDATA chr_240[] = {0x04, 0x4A, 0xA4, 0xAA, 0x70};	// .
FLASHDATA chr_241[] = {0x05, 0xFA, 0x11, 0x09, 0x0A, 0xF1};	// .
FLASHDATA chr_242[] = {0x04, 0x60, 0x92, 0x94, 0x60};	// .
FLASHDATA chr_243[] = {0x04, 0x60, 0x94, 0x92, 0x60};	// .
FLASHDATA chr_244[] = {0x04, 0x60, 0x94, 0x92, 0x64};	// .
FLASHDATA chr_245[] = {0x05, 0x64, 0x92, 0x92, 0x94, 0x62};	// .
FLASHDATA chr_246[] = {0x04, 0x72, 0x88, 0x88, 0x72};	// .
FLASHDATA chr_247[] = {0x05, 0x10, 0x10, 0x54, 0x10, 0x10};	// .
FLASHDATA chr_248[] = {0x05, 0x70, 0xC8, 0xA8, 0x98, 0x74};	// .
FLASHDATA chr_249[] = {0x04, 0x70, 0x82, 0x84, 0xF0};	// .
FLASHDATA chr_250[] = {0x04, 0x70, 0x84, 0x82, 0xF0};	// .
FLASHDATA chr_251[] = {0x04, 0x70, 0x84, 0x82, 0xF4};	// .
FLASHDATA chr_252[] = {0x04, 0x7A, 0x80, 0x80, 0xFA};	// .
FLASHDATA chr_253[] = {0x04, 0x18, 0xA2, 0xA1, 0x78};	// .
FLASHDATA chr_254[] = {0x04, 0x82, 0xFE, 0xA8, 0x10};	// .
FLASHDATA chr_255[] = {0x04, 0x18, 0xA2, 0xA0, 0x7A};	// .


// character table

FLASHDATA* font[] PROGMEM = {
	chr_000, chr_001, chr_002, chr_003, chr_004, chr_005, chr_006, chr_007,
	chr_008, chr_009, chr_010, chr_011, chr_012, chr_013, chr_014, chr_015,
	chr_016, chr_017, chr_018, chr_019, chr_020, chr_021, chr_022, chr_023,
	chr_024, chr_025, chr_026, chr_027, chr_028, chr_029, chr_030, chr_031,
	chr_032, chr_033, chr_034, chr_035, chr_036, chr_037, chr_038, chr_039,
	chr_040, chr_041, chr_042, chr_043, chr_044, chr_045, chr_046, chr_047,
	chr_048, chr_049, chr_050, chr_051, chr_052, chr_053, chr_054, chr_055,
	chr_056, chr_057, chr_058, chr_059, chr_060, chr_061, chr_062, chr_063,
	chr_064, chr_065, chr_066, chr_067, chr_068, chr_069, chr_070, chr_071,
	chr_072, chr_073, chr_074, chr_075, chr_076, chr_077, chr_078, chr_079,
	chr_080, chr_081, chr_082, chr_083, chr_084, chr_085, chr_086, chr_087,
	chr_088, chr_089, chr_090, chr_091, chr_092, chr_093, chr_094, chr_095,
	chr_096, chr_097, chr_098, chr_099, chr_100, chr_101, chr_102, chr_103,
	chr_104, chr_105, chr_106, chr_107, chr_108, chr_109, chr_110, chr_111,
	chr_112, chr_113, chr_114, chr_115, chr_116, chr_117, chr_118, chr_119,
	chr_120, chr_121, chr_122, chr_123, chr_124, chr_125, chr_126, chr_127,
	chr_128, chr_129, chr_130, chr_131, chr_132, chr_133, chr_134, chr_135,
	chr_136, chr_137, chr_138, chr_139, chr_140, chr_141, chr_142, chr_143,
	chr_144, chr_145, chr_146, chr_147, chr_148, chr_149, chr_150, chr_151,
	chr_152, chr_153, chr_154, chr_155, chr_156, chr_157, chr_158, chr_159,
	chr_160, chr_161, chr_162, chr_163, chr_164, chr_165, chr_166, chr_167,
	chr_168, chr_169, chr_170, chr_171, chr_172, chr_173, chr_174, chr_175,
	chr_176, chr_177, chr_178, chr_179, chr_180, chr_181, chr_182, chr_183,
	chr_184, chr_185, chr_186, chr_187, chr_188, chr_189, chr_190, chr_191,
	chr_192, chr_193, chr_194, chr_195, chr_196, chr_197, chr_198, chr_199,
	chr_200, chr_201, chr_202, chr_203, chr_204, chr_205, chr_206, chr_207,
	chr_208, chr_209, chr_210, chr_211, chr_212, chr_213, chr_214, chr_215,
	chr_216, chr_217, chr_218, chr_219, chr_220, chr_221, chr_222, chr_223,
	chr_224, chr_225, chr_226, chr_227, chr_228, chr_229, chr_230, chr_231,
	chr_232, chr_233, chr_234, chr_235, chr_236, chr_237, chr_238, chr_239,
	chr_240, chr_241, chr_242, chr_243, chr_244, chr_245, chr_246, chr_247,
	chr_248, chr_249, chr_250, chr_251, chr_252, chr_253, chr_254
};


#endif /* FONT_H_ */
