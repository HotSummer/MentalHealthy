/*
 #####################################################################
 # File    : SBBarCell.h
 # Project : StockBar
 # Created : 14-6-5
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

extern CGFloat const SBBarCellHeight;


@interface SBBarCell : SBDataTableCell {
    SBCacheImageView *_barView;  // 关注人显示图标
    UILabel *_barNameLbl;        // 吧名字
    UILabel *_barIntroLbl;       // 吧简介
}

@property (nonatomic, assign) BOOL isBlackType;//黑色样式

@end
