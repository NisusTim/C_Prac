/*
 * hw_ver.h
 *
 *  Created on: 2018�~10��12��
 *      Author: user
 */

#ifndef SYS_HAL_HW_VER_H_
#define SYS_HAL_HW_VER_H_

typedef enum
{
	HW_93G002_COMBO_BSD_MASTER_BV3p3_MINAN = 0,
	HW_93G002_COMBO_BSD_SLAVE_BV1p3_MINAN = 1,
	HW_BSD_PIECE_BV1p0 = 2,
	HW_AM_LKQ_79G_COMBO_BSD_BV2p0 = 3,
	HW_93G003_BV3p2p1_30693G003190_FCW = 4,
	HW_30693G006030_AMO_RF_BV1p0 = 5,
	HW_30963G006040_AMO_RF_BV2p0 = 6,
	HW_93G007_COMBO_BSD_MASTER_BV3p3_HAITEC = 7,
	HW_93G007_COMBO_BSD_SLAVE_BV1p3_HAITEC = 8,
	HW_93G006_RAY = 9,
	HW_93G003_COMBO_FRONT_RADAR_BV3p3 = 10,
	HW_93G003_COMBO_FRONT_RADAR_BV3p4 = 11,
	HW_93G014_MRR_BV1p0_FOR_HIRAIN = 12,
    HW_93G014_MRR_BV2p1_FOR_HIRAIN = 13,
    HW_93G016_MRR_BV2p1_FOR_HIRAIN_S32R264 = 14,
	HW_INVALID,
	HW_SINGLE_BOARD_FS85_84 = 800,
	HW_SINGLE_BOARD_FS65 = 801,
	HW_DUAL_BOARD = 802
}HW_VER_E;

extern void hw_ver_info_init(void);
extern HW_VER_E get_hw_ver(void);

#endif /* SYS_HAL_HW_VER_H_ */