/*
 #####################################################################
 # File    : SBATMeController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : @我的
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  :
 # Author:
 # Notes :
 #
 #####################################################################
 */

#import <SBAppModule/SBBasicController.h>

//@我的界面
@interface SBATMeController : SBBasicController
/* optionbar选中的index,用于推送来时进入对应界面 */
@property (nonatomic,assign) NSInteger selectedIndex;

@end
