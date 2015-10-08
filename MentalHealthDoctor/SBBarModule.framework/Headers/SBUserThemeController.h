/*
 #####################################################################
 # File    : SBUserThemeController.h
 # Project : StockBar
 # Created : 14-6-21
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 
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

#import "SBUserOptionalCell.h"

//主题吧单元格
@interface SBOptionalThemeCell:SBUserOptionalCell
@end

//主题吧空单元格
@interface SBOptionalThemeEmptyCell:SBFullEmptyCell
@end

@interface SBUserThemeController : SBBasicController {
    
}

@property (nonatomic, copy) NSString *userId;      //用户id
@property (nonatomic, strong) SBTableView *optionalThemeTable;     //自选主题吧

@end
