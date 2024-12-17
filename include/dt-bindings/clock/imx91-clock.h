/* SPDX-License-Identifier: GPL-2.0+ OR MIT */
/*
 * Copyright 2024 NXP
 */

#ifndef __DT_BINDINGS_CLOCK_IMX91_CLK_H
#define __DT_BINDINGS_CLOCK_IMX91_CLK_H

#define IMX91_CLK_DUMMY			0
#define IMX91_CLK_24M			1
#define IMX91_CLK_EXT1			2
#define IMX91_CLK_SYS_PLL_PFD0		3
#define IMX91_CLK_SYS_PLL_PFD0_DIV2	4
#define IMX91_CLK_SYS_PLL_PFD1		5
#define IMX91_CLK_SYS_PLL_PFD1_DIV2	6
#define IMX91_CLK_SYS_PLL_PFD2		7
#define IMX91_CLK_SYS_PLL_PFD2_DIV2	8
#define IMX91_CLK_AUDIO_PLL		9
#define IMX91_CLK_VIDEO_PLL		10
#define IMX91_CLK_A55_PERIPH		11
#define IMX91_CLK_A55_MTR_BUS		12
#define IMX91_CLK_A55			13
#define IMX91_CLK_M33			14
#define IMX91_CLK_BUS_WAKEUP		15
#define IMX91_CLK_BUS_AON		16
#define IMX91_CLK_WAKEUP_AXI		17
#define IMX91_CLK_SWO_TRACE		18
#define IMX91_CLK_FLEXIO1		20
#define IMX91_CLK_FLEXIO2		21
#define IMX91_CLK_LPTMR1		24
#define IMX91_CLK_LPTMR2		25
#define IMX91_CLK_TPM2			27
#define IMX91_CLK_TPM4			29
#define IMX91_CLK_TPM5			30
#define IMX91_CLK_TPM6			31
#define IMX91_CLK_FLEXSPI1		32
#define IMX91_CLK_CAN1			33
#define IMX91_CLK_CAN2			34
#define IMX91_CLK_LPUART1		35
#define IMX91_CLK_LPUART2		36
#define IMX91_CLK_LPUART3		37
#define IMX91_CLK_LPUART4		38
#define IMX91_CLK_LPUART5		39
#define IMX91_CLK_LPUART6		40
#define IMX91_CLK_LPUART7		41
#define IMX91_CLK_LPUART8		42
#define IMX91_CLK_LPI2C1		43
#define IMX91_CLK_LPI2C2		44
#define IMX91_CLK_LPI2C3		45
#define IMX91_CLK_LPI2C4		46
#define IMX91_CLK_LPI2C5		47
#define IMX91_CLK_LPI2C6		48
#define IMX91_CLK_LPI2C7		49
#define IMX91_CLK_LPI2C8		50
#define IMX91_CLK_LPSPI1		51
#define IMX91_CLK_LPSPI2		52
#define IMX91_CLK_LPSPI3		53
#define IMX91_CLK_LPSPI4		54
#define IMX91_CLK_LPSPI5		55
#define IMX91_CLK_LPSPI6		56
#define IMX91_CLK_LPSPI7		57
#define IMX91_CLK_LPSPI8		58
#define IMX91_CLK_I3C1			59
#define IMX91_CLK_I3C2			60
#define IMX91_CLK_USDHC1		61
#define IMX91_CLK_USDHC2		62
#define IMX91_CLK_USDHC3		63
#define IMX91_CLK_SAI1			64
#define IMX91_CLK_SAI2			65
#define IMX91_CLK_SAI3			66
#define IMX91_CLK_CCM_CKO1		67
#define IMX91_CLK_CCM_CKO2		68
#define IMX91_CLK_CCM_CKO3		69
#define IMX91_CLK_CCM_CKO4		70
#define IMX91_CLK_HSIO			71
#define IMX91_CLK_HSIO_USB_TEST_60M	72
#define IMX91_CLK_HSIO_ACSCAN_80M	73
#define IMX91_CLK_HSIO_ACSCAN_480M	74
#define IMX91_CLK_MEDIA_AXI		77
#define IMX91_CLK_MEDIA_APB		78
#define IMX91_CLK_MEDIA_DISP_PIX	80
#define IMX91_CLK_CAM_PIX		81
#define IMX91_CLK_ADC			84
#define IMX91_CLK_PDM			85
#define IMX91_CLK_TSTMR1		86
#define IMX91_CLK_TSTMR2		87
#define IMX91_CLK_MQS1			88
#define IMX91_CLK_MQS2			89
#define IMX91_CLK_AUDIO_XCVR		90
#define IMX91_CLK_SPDIF			91
#define IMX91_CLK_ENET1_QOS_TSN     92
#define IMX91_CLK_ENET_TIMER        93
#define IMX91_CLK_ENET2_REGULAR     95
#define IMX91_CLK_USB_PHY_BURUNIN	99
#define IMX91_CLK_PAL_CAME_SCAN		100
#define IMX91_CLK_A55_GATE		101
#define IMX91_CLK_CM33_GATE		102
#define IMX91_CLK_ADC1_GATE		103
#define IMX91_CLK_WDOG1_GATE		104
#define IMX91_CLK_WDOG2_GATE		105
#define IMX91_CLK_WDOG3_GATE		106
#define IMX91_CLK_WDOG4_GATE		107
#define IMX91_CLK_WDOG5_GATE		108
#define IMX91_CLK_SEMA1_GATE		109
#define IMX91_CLK_SEMA2_GATE		110
#define IMX91_CLK_MU_A_GATE		111
#define IMX91_CLK_MU_B_GATE		112
#define IMX91_CLK_EDMA1_GATE		113
#define IMX91_CLK_EDMA2_GATE		114
#define IMX91_CLK_FLEXSPI1_GATE		115
#define IMX91_CLK_GPIO1_GATE		116
#define IMX91_CLK_GPIO2_GATE		117
#define IMX91_CLK_GPIO3_GATE		118
#define IMX91_CLK_GPIO4_GATE		119
#define IMX91_CLK_FLEXIO1_GATE		120
#define IMX91_CLK_FLEXIO2_GATE		121
#define IMX91_CLK_LPIT1_GATE		122
#define IMX91_CLK_LPIT2_GATE		123
#define IMX91_CLK_LPTMR1_GATE		124
#define IMX91_CLK_LPTMR2_GATE		125
#define IMX91_CLK_TPM1_GATE		126
#define IMX91_CLK_TPM2_GATE		127
#define IMX91_CLK_TPM3_GATE		128
#define IMX91_CLK_TPM4_GATE		129
#define IMX91_CLK_TPM5_GATE		130
#define IMX91_CLK_TPM6_GATE		131
#define IMX91_CLK_CAN1_GATE		132
#define IMX91_CLK_CAN2_GATE		133
#define IMX91_CLK_LPUART1_GATE		134
#define IMX91_CLK_LPUART2_GATE		135
#define IMX91_CLK_LPUART3_GATE		136
#define IMX91_CLK_LPUART4_GATE		137
#define IMX91_CLK_LPUART5_GATE		138
#define IMX91_CLK_LPUART6_GATE		139
#define IMX91_CLK_LPUART7_GATE		140
#define IMX91_CLK_LPUART8_GATE		141
#define IMX91_CLK_LPI2C1_GATE		142
#define IMX91_CLK_LPI2C2_GATE		143
#define IMX91_CLK_LPI2C3_GATE		144
#define IMX91_CLK_LPI2C4_GATE		145
#define IMX91_CLK_LPI2C5_GATE		146
#define IMX91_CLK_LPI2C6_GATE		147
#define IMX91_CLK_LPI2C7_GATE		148
#define IMX91_CLK_LPI2C8_GATE		149
#define IMX91_CLK_LPSPI1_GATE		150
#define IMX91_CLK_LPSPI2_GATE		151
#define IMX91_CLK_LPSPI3_GATE		152
#define IMX91_CLK_LPSPI4_GATE		153
#define IMX91_CLK_LPSPI5_GATE		154
#define IMX91_CLK_LPSPI6_GATE		155
#define IMX91_CLK_LPSPI7_GATE		156
#define IMX91_CLK_LPSPI8_GATE		157
#define IMX91_CLK_I3C1_GATE		158
#define IMX91_CLK_I3C2_GATE		159
#define IMX91_CLK_USDHC1_GATE		160
#define IMX91_CLK_USDHC2_GATE		161
#define IMX91_CLK_USDHC3_GATE		162
#define IMX91_CLK_SAI1_GATE		163
#define IMX91_CLK_SAI2_GATE		164
#define IMX91_CLK_SAI3_GATE		165
#define IMX91_CLK_MIPI_CSI_GATE		166
#define IMX91_CLK_MIPI_DSI_GATE		167
#define IMX91_CLK_LVDS_GATE		168
#define IMX91_CLK_LCDIF_GATE		169
#define IMX91_CLK_PXP_GATE		170
#define IMX91_CLK_ISI_GATE		171
#define IMX91_CLK_NIC_MEDIA_GATE	172
#define IMX91_CLK_USB_CONTROLLER_GATE	173
#define IMX91_CLK_USB_TEST_60M_GATE	174
#define IMX91_CLK_HSIO_TROUT_24M_GATE	175
#define IMX91_CLK_PDM_GATE		176
#define IMX91_CLK_MQS1_GATE		177
#define IMX91_CLK_MQS2_GATE		178
#define IMX91_CLK_AUD_XCVR_GATE		179
#define IMX91_CLK_SPDIF_GATE		180
#define IMX91_CLK_HSIO_32K_GATE		181
#define IMX91_CLK_ENET2_REGULAR_GATE		182
#define IMX91_CLK_ENET1_QOS_TSN_GATE		183
#define IMX91_CLK_SYS_CNT_GATE		184
#define IMX91_CLK_TSTMR1_GATE		185
#define IMX91_CLK_TSTMR2_GATE		186
#define IMX91_CLK_TMC_GATE		187
#define IMX91_CLK_PMRO_GATE		188
#define IMX91_CLK_32K			189
#define IMX91_CLK_SAI1_IPG		190
#define IMX91_CLK_SAI2_IPG		191
#define IMX91_CLK_SAI3_IPG		192
#define IMX91_CLK_MU1_A_GATE		193
#define IMX91_CLK_MU1_B_GATE		194
#define IMX91_CLK_MU2_A_GATE		195
#define IMX91_CLK_MU2_B_GATE		196
#define IMX91_CLK_NIC_AXI		197
#define IMX91_CLK_ARM_PLL		198
#define IMX91_CLK_A55_SEL		199
#define IMX91_CLK_A55_CORE		200
#define IMX91_CLK_PDM_IPG		201
#define IMX91_CLK_END			202

#endif
