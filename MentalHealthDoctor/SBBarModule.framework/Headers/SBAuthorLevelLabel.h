/*
 #####################################################################
 # File    : SBAuthorLevelLabel.h
 # Project : StockBar
 # Created : 14-7-1
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

#import <SBModule/SBCellLabel.h>

/**
 *  用户等级标签
 */
@interface SBAuthorLevelLabel : SBCellLabel

//用户等级
@property (nonatomic ,copy) NSString *authorLevel;

@end

/**
 *  赞数量的标签
 */
@interface SBAssistCountLabel : SBCellLabel


//赞的数量
@property (nonatomic ,assign) NSInteger assistCount;

@end

