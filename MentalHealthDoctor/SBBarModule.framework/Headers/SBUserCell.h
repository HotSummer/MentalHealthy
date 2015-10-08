/*
 #####################################################################
 # File    : SBFollowCell.h
 # Project : StockBar
 # Created : 14-6-4
 # DevTeam : Xiebohui
 # Author  : Xiebohui
 # Notes   :
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  : 14-6-5
 # Author: Thomas
 # Notes : 人物单元格基类
 #
 #####################################################################
 */

#import <SBModule/SBCellLabel.h>


extern CGFloat const SBUserCellHeight;
extern CGFloat const SBUserTitleFont;           //标题字体
extern CGFloat const SBUserCellSubtitleFont;           //副标题字体
static CGFloat const SBUserPortraitBoard = 45.0f;
static CGFloat const SBTitlePaddingHeight = 12.0f;           //标题上边距

#define __SB_COLOR_UCELL_TITLE            RGB(0x33, 0x33, 0x33)           //标题颜色
#define __SB_COLOR_UCELL_SUBTITLE       RGB(0x99, 0x99, 0x99)           //副标题颜色

@interface SBUserCell : SBDataTableCell {
    
}

@property (nonatomic, strong) SBCacheImageView *portraitView;  // 关注人显示图标
@property (nonatomic, strong) UILabel *userNickLbl;        // 关注人名字
@property (nonatomic, strong) UILabel *userIntroLbl;       // 关注人简介

@end
