/*
 #####################################################################
 # File    : SBDiscoverCell.h
 # Project : StockBar
 # Created : 14-6-3
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
#define __SB_COLOR_SECTION_BG          RGB(0xee, 0xee, 0xee)            //悬浮层标题

//发现界面类型
typedef  NS_ENUM(NSInteger, SBDiscoverSection) {
	SBDiscoverSectionAD = 0,          //广告
	SBDiscoverSectionStatus = 1,            //热门帖子
	SBDiscoverSectionBar = 2,            //热门股吧
	SBDiscoverSectionTheme = 3,            //热门主题吧
	SBDiscoverSectionAUser = 4,            //活跃用户
	SBDiscoverSectionVUser = 5,            //知名用户
};

extern CGFloat const SBBannerCellHeight;           //广告单元格高度

//广告
@interface SBDiscoverADCell : SBDataTableCell {
    SBCacheImageView *_adImageView;      //广告图
    UIImageView *_titleBg;         //广告标题背景
    UILabel *_titleLbl;         //广告标题
}
@end

//热门帖子
@interface SBHotStatusCell : SBDataTableCell {
    UILabel *_titleLbl;         //帖子标题
    UILabel *_fromLbl;         //来自XX吧
    UILabel *_clickLbl;         //点击数
}

/**
 *  计算热门帖子单元格高度
 *
 *  @param detail 帖子数据
 *
 *  @return 高度
 */
+ (CGFloat)cellHeight:(DataItemDetail *)detail;

@end
//热门股吧
@interface SBHotBarCell : SBBarCell
@end
//热门主题吧
@interface SBHotThemeCell : SBBarCell
@end
//活跃用户
@interface SBActiveUserCell : SBUserCell
@end
//知名用户
@interface SBFamousUserCell : SBUserCell
@end
