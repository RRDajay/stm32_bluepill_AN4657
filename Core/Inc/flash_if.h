/**
  ******************************************************************************
  * @file    IAP_Main/Inc/flash_if.h 
  * @author  MCD Application Team
  * @version 1.0.0
  * @date    8-April-2015
  * @brief   This file provides all the headers of the flash_if functions.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FLASH_IF_H
#define __FLASH_IF_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/* Base address of the Flash sectors */
#define ADDR_FLASH_PAGE_0     ((uint32_t)0x8000000) /* Base @ of Page 0, 1 Kbytes */
#define ADDR_FLASH_PAGE_1     ((uint32_t)0x8000400) /* Base @ of Page 1, 1 Kbytes */
#define ADDR_FLASH_PAGE_2     ((uint32_t)0x8000800) /* Base @ of Page 2, 1 Kbytes */
#define ADDR_FLASH_PAGE_3     ((uint32_t)0x8000c00) /* Base @ of Page 3, 1 Kbytes */
#define ADDR_FLASH_PAGE_4     ((uint32_t)0x8001000) /* Base @ of Page 4, 1 Kbytes */
#define ADDR_FLASH_PAGE_5     ((uint32_t)0x8001400) /* Base @ of Page 5, 1 Kbytes */
#define ADDR_FLASH_PAGE_6     ((uint32_t)0x8001800) /* Base @ of Page 6, 1 Kbytes */
#define ADDR_FLASH_PAGE_7     ((uint32_t)0x8001c00) /* Base @ of Page 7, 1 Kbytes */
#define ADDR_FLASH_PAGE_8     ((uint32_t)0x8002000) /* Base @ of Page 8, 1 Kbytes */
#define ADDR_FLASH_PAGE_9     ((uint32_t)0x8002400) /* Base @ of Page 9, 1 Kbytes */
#define ADDR_FLASH_PAGE_10    ((uint32_t)0x8002800) /* Base @ of Page 10, 1 Kbytes */
#define ADDR_FLASH_PAGE_11    ((uint32_t)0x8002c00) /* Base @ of Page 11, 1 Kbytes */
#define ADDR_FLASH_PAGE_12    ((uint32_t)0x8003000) /* Base @ of Page 12, 1 Kbytes */
#define ADDR_FLASH_PAGE_13    ((uint32_t)0x8003400) /* Base @ of Page 13, 1 Kbytes */
#define ADDR_FLASH_PAGE_14    ((uint32_t)0x8003800) /* Base @ of Page 14, 1 Kbytes */
#define ADDR_FLASH_PAGE_15    ((uint32_t)0x8003c00) /* Base @ of Page 15, 1 Kbytes */
#define ADDR_FLASH_PAGE_16    ((uint32_t)0x8004000) /* Base @ of Page 16, 1 Kbytes */
#define ADDR_FLASH_PAGE_17    ((uint32_t)0x8004400) /* Base @ of Page 17, 1 Kbytes */
#define ADDR_FLASH_PAGE_18    ((uint32_t)0x8004800) /* Base @ of Page 18, 1 Kbytes */
#define ADDR_FLASH_PAGE_19    ((uint32_t)0x8004c00) /* Base @ of Page 19, 1 Kbytes */
#define ADDR_FLASH_PAGE_20    ((uint32_t)0x8005000) /* Base @ of Page 20, 1 Kbytes */
#define ADDR_FLASH_PAGE_21    ((uint32_t)0x8005400) /* Base @ of Page 21, 1 Kbytes  */
#define ADDR_FLASH_PAGE_22    ((uint32_t)0x8005800) /* Base @ of Page 22, 1 Kbytes  */
#define ADDR_FLASH_PAGE_23    ((uint32_t)0x8005c00) /* Base @ of Page 23, 1 Kbytes */
#define ADDR_FLASH_PAGE_24    ((uint32_t)0x8006000) /* Base @ of Page 24, 1 Kbytes */
#define ADDR_FLASH_PAGE_25    ((uint32_t)0x8006400) /* Base @ of Page 25, 1 Kbytes */
#define ADDR_FLASH_PAGE_26    ((uint32_t)0x8006800) /* Base @ of Page 26, 1 Kbytes */
#define ADDR_FLASH_PAGE_27    ((uint32_t)0x8006c00) /* Base @ of Page 27, 1 Kbytes */
#define ADDR_FLASH_PAGE_28    ((uint32_t)0x8007000) /* Base @ of Page 28, 1 Kbytes */
#define ADDR_FLASH_PAGE_29    ((uint32_t)0x8007400) /* Base @ of Page 29, 1 Kbytes */
#define ADDR_FLASH_PAGE_30    ((uint32_t)0x8007800) /* Base @ of Page 30, 1 Kbytes */
#define ADDR_FLASH_PAGE_31    ((uint32_t)0x8007c00) /* Base @ of Page 31, 1 Kbytes */
#define ADDR_FLASH_PAGE_32    ((uint32_t)0x8008000) /* Base @ of Page 32, 1 Kbytes */
#define ADDR_FLASH_PAGE_33    ((uint32_t)0x8008400) /* Base @ of Page 33, 1 Kbytes */
#define ADDR_FLASH_PAGE_34    ((uint32_t)0x8008800) /* Base @ of Page 34, 1 Kbytes */
#define ADDR_FLASH_PAGE_35    ((uint32_t)0x8008c00) /* Base @ of Page 35, 1 Kbytes */
#define ADDR_FLASH_PAGE_36    ((uint32_t)0x8009000) /* Base @ of Page 36, 1 Kbytes */
#define ADDR_FLASH_PAGE_37    ((uint32_t)0x8009400) /* Base @ of Page 37, 1 Kbytes */
#define ADDR_FLASH_PAGE_38    ((uint32_t)0x8009800) /* Base @ of Page 38, 1 Kbytes */
#define ADDR_FLASH_PAGE_39    ((uint32_t)0x8009c00) /* Base @ of Page 39, 1 Kbytes */
#define ADDR_FLASH_PAGE_40    ((uint32_t)0x800a000) /* Base @ of Page 40, 1 Kbytes */
#define ADDR_FLASH_PAGE_41    ((uint32_t)0x800a400) /* Base @ of Page 41, 1 Kbytes */
#define ADDR_FLASH_PAGE_42    ((uint32_t)0x800a800) /* Base @ of Page 42, 1 Kbytes */
#define ADDR_FLASH_PAGE_43    ((uint32_t)0x800ac00) /* Base @ of Page 43, 1 Kbytes */
#define ADDR_FLASH_PAGE_44    ((uint32_t)0x800b000) /* Base @ of Page 44, 1 Kbytes */
#define ADDR_FLASH_PAGE_45    ((uint32_t)0x800b400) /* Base @ of Page 45, 1 Kbytes */
#define ADDR_FLASH_PAGE_46    ((uint32_t)0x800b800) /* Base @ of Page 46, 1 Kbytes */
#define ADDR_FLASH_PAGE_47    ((uint32_t)0x800bc00) /* Base @ of Page 47, 1 Kbytes */
#define ADDR_FLASH_PAGE_48    ((uint32_t)0x800c000) /* Base @ of Page 48, 1 Kbytes */
#define ADDR_FLASH_PAGE_49    ((uint32_t)0x800c400) /* Base @ of Page 49, 1 Kbytes */
#define ADDR_FLASH_PAGE_50    ((uint32_t)0x800c800) /* Base @ of Page 50, 1 Kbytes */
#define ADDR_FLASH_PAGE_51    ((uint32_t)0x800cc00) /* Base @ of Page 51, 1 Kbytes */
#define ADDR_FLASH_PAGE_52    ((uint32_t)0x800d000) /* Base @ of Page 52, 1 Kbytes */
#define ADDR_FLASH_PAGE_53    ((uint32_t)0x800d400) /* Base @ of Page 53, 1 Kbytes */
#define ADDR_FLASH_PAGE_54    ((uint32_t)0x800d800) /* Base @ of Page 54, 1 Kbytes */
#define ADDR_FLASH_PAGE_55    ((uint32_t)0x800dc00) /* Base @ of Page 55, 1 Kbytes */
#define ADDR_FLASH_PAGE_56    ((uint32_t)0x800e000) /* Base @ of Page 56, 1 Kbytes */
#define ADDR_FLASH_PAGE_57    ((uint32_t)0x800e400) /* Base @ of Page 57, 1 Kbytes */
#define ADDR_FLASH_PAGE_58    ((uint32_t)0x800e800) /* Base @ of Page 58, 1 Kbytes */
#define ADDR_FLASH_PAGE_59    ((uint32_t)0x800ec00) /* Base @ of Page 59, 1 Kbytes */
#define ADDR_FLASH_PAGE_60    ((uint32_t)0x800f000) /* Base @ of Page 60, 1 Kbytes */
#define ADDR_FLASH_PAGE_61    ((uint32_t)0x800f400) /* Base @ of Page 61, 1 Kbytes */
#define ADDR_FLASH_PAGE_62    ((uint32_t)0x800f800) /* Base @ of Page 62, 1 Kbytes */
#define ADDR_FLASH_PAGE_63    ((uint32_t)0x800fc00) /* Base @ of Page 63, 1 Kbytes */
#define ADDR_FLASH_PAGE_64    ((uint32_t)0x8010000) /* Base @ of Page 64, 1 Kbytes */
#define ADDR_FLASH_PAGE_65    ((uint32_t)0x8010400) /* Base @ of Page 65, 1 Kbytes */
#define ADDR_FLASH_PAGE_66    ((uint32_t)0x8010800) /* Base @ of Page 66, 1 Kbytes */
#define ADDR_FLASH_PAGE_67    ((uint32_t)0x8010c00) /* Base @ of Page 67, 1 Kbytes */
#define ADDR_FLASH_PAGE_68    ((uint32_t)0x8011000) /* Base @ of Page 68, 1 Kbytes */
#define ADDR_FLASH_PAGE_69    ((uint32_t)0x8011400) /* Base @ of Page 69, 1 Kbytes */
#define ADDR_FLASH_PAGE_70    ((uint32_t)0x8011800) /* Base @ of Page 70, 1 Kbytes */
#define ADDR_FLASH_PAGE_71    ((uint32_t)0x8011c00) /* Base @ of Page 71, 1 Kbytes */
#define ADDR_FLASH_PAGE_72    ((uint32_t)0x8012000) /* Base @ of Page 72, 1 Kbytes */
#define ADDR_FLASH_PAGE_73    ((uint32_t)0x8012400) /* Base @ of Page 73, 1 Kbytes */
#define ADDR_FLASH_PAGE_74    ((uint32_t)0x8012800) /* Base @ of Page 74, 1 Kbytes */
#define ADDR_FLASH_PAGE_75    ((uint32_t)0x8012c00) /* Base @ of Page 75, 1 Kbytes */
#define ADDR_FLASH_PAGE_76    ((uint32_t)0x8013000) /* Base @ of Page 76, 1 Kbytes */
#define ADDR_FLASH_PAGE_77    ((uint32_t)0x8013400) /* Base @ of Page 77, 1 Kbytes */
#define ADDR_FLASH_PAGE_78    ((uint32_t)0x8013800) /* Base @ of Page 78, 1 Kbytes */
#define ADDR_FLASH_PAGE_79    ((uint32_t)0x8013c00) /* Base @ of Page 79, 1 Kbytes */
#define ADDR_FLASH_PAGE_80    ((uint32_t)0x8014000) /* Base @ of Page 80, 1 Kbytes */
#define ADDR_FLASH_PAGE_81    ((uint32_t)0x8014400) /* Base @ of Page 81, 1 Kbytes */
#define ADDR_FLASH_PAGE_82    ((uint32_t)0x8014800) /* Base @ of Page 82, 1 Kbytes */
#define ADDR_FLASH_PAGE_83    ((uint32_t)0x8014c00) /* Base @ of Page 83, 1 Kbytes */
#define ADDR_FLASH_PAGE_84    ((uint32_t)0x8015000) /* Base @ of Page 84, 1 Kbytes */
#define ADDR_FLASH_PAGE_85    ((uint32_t)0x8015400) /* Base @ of Page 85, 1 Kbytes */
#define ADDR_FLASH_PAGE_86    ((uint32_t)0x8015800) /* Base @ of Page 86, 1 Kbytes */
#define ADDR_FLASH_PAGE_87    ((uint32_t)0x8015c00) /* Base @ of Page 87, 1 Kbytes */
#define ADDR_FLASH_PAGE_88    ((uint32_t)0x8016000) /* Base @ of Page 88, 1 Kbytes */
#define ADDR_FLASH_PAGE_89    ((uint32_t)0x8016400) /* Base @ of Page 89, 1 Kbytes */
#define ADDR_FLASH_PAGE_90    ((uint32_t)0x8016800) /* Base @ of Page 90, 1 Kbytes */
#define ADDR_FLASH_PAGE_91    ((uint32_t)0x8016c00) /* Base @ of Page 91, 1 Kbytes */
#define ADDR_FLASH_PAGE_92    ((uint32_t)0x8017000) /* Base @ of Page 92, 1 Kbytes */
#define ADDR_FLASH_PAGE_93    ((uint32_t)0x8017400) /* Base @ of Page 93, 1 Kbytes */
#define ADDR_FLASH_PAGE_94    ((uint32_t)0x8017800) /* Base @ of Page 94, 1 Kbytes */
#define ADDR_FLASH_PAGE_95    ((uint32_t)0x8017c00) /* Base @ of Page 95, 1 Kbytes */
#define ADDR_FLASH_PAGE_96    ((uint32_t)0x8018000) /* Base @ of Page 96, 1 Kbytes */
#define ADDR_FLASH_PAGE_97    ((uint32_t)0x8018400) /* Base @ of Page 97, 1 Kbytes */
#define ADDR_FLASH_PAGE_98    ((uint32_t)0x8018800) /* Base @ of Page 98, 1 Kbytes */
#define ADDR_FLASH_PAGE_99    ((uint32_t)0x8018c00) /* Base @ of Page 99, 1 Kbytes */
#define ADDR_FLASH_PAGE_100   ((uint32_t)0x8019000) /* Base @ of Page 100, 1 Kbytes */
#define ADDR_FLASH_PAGE_101   ((uint32_t)0x8019400) /* Base @ of Page 101, 1 Kbytes */
#define ADDR_FLASH_PAGE_102   ((uint32_t)0x8019800) /* Base @ of Page 102, 1 Kbytes */
#define ADDR_FLASH_PAGE_103   ((uint32_t)0x8019c00) /* Base @ of Page 103, 1 Kbytes */
#define ADDR_FLASH_PAGE_104   ((uint32_t)0x801a000) /* Base @ of Page 104, 1 Kbytes */
#define ADDR_FLASH_PAGE_105   ((uint32_t)0x801a400) /* Base @ of Page 105, 1 Kbytes */
#define ADDR_FLASH_PAGE_106   ((uint32_t)0x801a800) /* Base @ of Page 106, 1 Kbytes */
#define ADDR_FLASH_PAGE_107   ((uint32_t)0x801ac00) /* Base @ of Page 107, 1 Kbytes */
#define ADDR_FLASH_PAGE_108   ((uint32_t)0x801b000) /* Base @ of Page 108, 1 Kbytes */
#define ADDR_FLASH_PAGE_109   ((uint32_t)0x801b400) /* Base @ of Page 109, 1 Kbytes */
#define ADDR_FLASH_PAGE_110   ((uint32_t)0x801b800) /* Base @ of Page 110, 1 Kbytes */
#define ADDR_FLASH_PAGE_111   ((uint32_t)0x801bc00) /* Base @ of Page 111, 1 Kbytes */
#define ADDR_FLASH_PAGE_112   ((uint32_t)0x801c000) /* Base @ of Page 112, 1 Kbytes */
#define ADDR_FLASH_PAGE_113   ((uint32_t)0x801c400) /* Base @ of Page 113, 1 Kbytes */
#define ADDR_FLASH_PAGE_114   ((uint32_t)0x801c800) /* Base @ of Page 114, 1 Kbytes */
#define ADDR_FLASH_PAGE_115   ((uint32_t)0x801cc00) /* Base @ of Page 115, 1 Kbytes */
#define ADDR_FLASH_PAGE_116   ((uint32_t)0x801d000) /* Base @ of Page 116, 1 Kbytes */
#define ADDR_FLASH_PAGE_117   ((uint32_t)0x801d400) /* Base @ of Page 117, 1 Kbytes  */
#define ADDR_FLASH_PAGE_118   ((uint32_t)0x801d800) /* Base @ of Page 118, 1 Kbytes  */
#define ADDR_FLASH_PAGE_119   ((uint32_t)0x801dc00) /* Base @ of Page 119, 1 Kbytes */
#define ADDR_FLASH_PAGE_120   ((uint32_t)0x801e000) /* Base @ of Page 120, 1 Kbytes */
#define ADDR_FLASH_PAGE_121   ((uint32_t)0x801e400) /* Base @ of Page 121, 1 Kbytes */
#define ADDR_FLASH_PAGE_122   ((uint32_t)0x801e800) /* Base @ of Page 122, 1 Kbytes */
#define ADDR_FLASH_PAGE_123   ((uint32_t)0x801ec00) /* Base @ of Page 123, 1 Kbytes */
#define ADDR_FLASH_PAGE_124   ((uint32_t)0x801f000) /* Base @ of Page 124, 1 Kbytes */
#define ADDR_FLASH_PAGE_125   ((uint32_t)0x801f400) /* Base @ of Page 125, 1 Kbytes */
#define ADDR_FLASH_PAGE_126   ((uint32_t)0x801f800) /* Base @ of Page 126, 1 Kbytes */
#define ADDR_FLASH_PAGE_127   ((uint32_t)0x801fc00) /* Base @ of Page 127, 1 Kbytes */

/* Error code */
enum 
{
  FLASHIF_OK = 0,
  FLASHIF_ERASEKO,
  FLASHIF_WRITINGCTRL_ERROR,
  FLASHIF_WRITING_ERROR,
  FLASHIF_PROTECTION_ERRROR
};

/* protection type */  
enum{
  FLASHIF_PROTECTION_NONE         = 0,
  FLASHIF_PROTECTION_PCROPENABLED = 0x1,
  FLASHIF_PROTECTION_WRPENABLED   = 0x2,
  FLASHIF_PROTECTION_RDPENABLED   = 0x4,
};

/* protection update */
enum {
	FLASHIF_WRP_ENABLE,
	FLASHIF_WRP_DISABLE
};

/* Define the address from where user application will be loaded.
   Note: this area is reserved for the IAP code                  */
#define FLASH_PAGE_STEP         FLASH_PAGE_SIZE           /* Size of page : 1 Kbytes */
#define APPLICATION_ADDRESS     (uint32_t)0x08004000      /* Start user code address: ADDR_FLASH_PAGE_8 */

/* Notable Flash addresses */
#define USER_FLASH_END_ADDRESS        0x0801FFFF

/* Define the user application size */
#define USER_FLASH_SIZE               ((uint32_t)0x00003000) /* Small default template application */

/* Define bitmap representing user flash area that could be write protected (check restricted to pages 8-39). */
/* #define FLASH_PAGE_TO_BE_PROTECTED (OB_WRP_PAGES8TO9 | OB_WRP_PAGES10TO11 | OB_WRP_PAGES12TO13 | OB_WRP_PAGES14TO15 | \
                                    OB_WRP_PAGES16TO17 | OB_WRP_PAGES18TO19 | OB_WRP_PAGES20TO21 | OB_WRP_PAGES22TO23 | \
                                    OB_WRP_PAGES24TO25 | OB_WRP_PAGES26TO27 | OB_WRP_PAGES28TO29 | OB_WRP_PAGES30TO31 | \
                                    OB_WRP_PAGES32TO33 | OB_WRP_PAGES34TO35 | OB_WRP_PAGES36TO37 | OB_WRP_PAGES38TO39  )   */

#define FLASH_PAGE_TO_BE_PROTECTED (OB_WRP_PAGES16TO19 | OB_WRP_PAGES20TO23 | OB_WRP_PAGES24TO27 | OB_WRP_PAGES28TO31 | \
                        OB_WRP_PAGES32TO35 |OB_WRP_PAGES36TO39 | OB_WRP_PAGES40TO43 | OB_WRP_PAGES44TO47 | \
                        OB_WRP_PAGES48TO51 |OB_WRP_PAGES52TO55 | OB_WRP_PAGES56TO59 | OB_WRP_PAGES60TO63 | OB_WRP_PAGES64TO67 | \
                        OB_WRP_PAGES68TO71 | OB_WRP_PAGES72TO75 | OB_WRP_PAGES76TO79 | OB_WRP_PAGES80TO83 | \
                        OB_WRP_PAGES84TO87 | OB_WRP_PAGES88TO91 | OB_WRP_PAGES92TO95 | OB_WRP_PAGES96TO99 | \
                        OB_WRP_PAGES100TO103 | OB_WRP_PAGES104TO107 | OB_WRP_PAGES108TO111 | OB_WRP_PAGES112TO115 | \
                        OB_WRP_PAGES116TO119 | OB_WRP_PAGES120TO123 | OB_WRP_PAGES124TO127 )


/* Exported macro ------------------------------------------------------------*/
/* ABSoulute value */
#define ABS_RETURN(x,y)               ((x) < (y)) ? ((y)-(x)) : ((x)-(y))

/* Get the number of sectors from where the user program will be loaded */
#define FLASH_SECTOR_NUMBER           ((uint32_t)(ABS_RETURN(APPLICATION_ADDRESS,FLASH_START_BANK1))>>12)

/* Compute the mask to test if the Flash memory, where the user program will be
  loaded, is write protected */
#define FLASH_PROTECTED_SECTORS       (~(uint32_t)((1 << FLASH_SECTOR_NUMBER) - 1))
/* Exported functions ------------------------------------------------------- */
void FLASH_If_Init(void);
uint32_t FLASH_If_Erase(uint32_t StartSector);
uint32_t FLASH_If_GetWriteProtectionStatus(void);
uint32_t FLASH_If_Write(uint32_t destination, uint32_t *p_source, uint32_t length);
uint32_t FLASH_If_WriteProtectionConfig(uint32_t modifier);

#endif  /* __FLASH_IF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
