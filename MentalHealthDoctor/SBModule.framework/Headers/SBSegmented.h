/*
 #####################################################################
 # File    : SBSegmentedControl.h
 # Project : StockBar
 # Created : 13-9-3
 # DevTeam : Thomas
 # Author  : 缪 和光
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

#import <UIKit/UIKit.h>

#define __SB_COLOR_NAV_TITLE    RGB(0xff, 0xff, 0xff)          //导航文字颜色

#define __SB_COLOR_TABLE_SWITCH_TITLE     RGB(0x6c, 0x6c, 0x6c)          //文字颜色
#define __SB_COLOR_TABLE_SWITCH_TITLE_HIGH     RGB(0xff, 0xff, 0xff)          //文字颜色
#define __SB_COLOR_TABLE_SWITCH_BG    RGB(0xff, 0xff, 0xff)          //文字颜色
#define __SB_COLOR_TABLE_SWITCH_BG_HIGH     RGB(0x99, 0x99, 0x99)          //文字颜色


#define __SB_FONT_TABLE_SWITCH_TITLE     14.0f         //文字字体
#define __SB_FONT_NAV_TITLE     14.0f         //文字字体

@interface SBSegmentedButton : UIButton

@property (nonatomic, strong) UIImage *sb_backgroundImage;
@property (nonatomic, strong) UIImage *sb_backgroundImageHighlighted;
@property (nonatomic, strong) UIColor *sb_titleColor;
@property (nonatomic, strong) UIColor *sb_titleColorHighlighted;
@property (nonatomic, strong) UIColor *sb_badgeColor;
@property (nonatomic, strong) UIColor *sb_badgeColorHighlighted;

@property (nonatomic, strong) NSString *sb_title;
@property (nonatomic, strong) NSString *sb_badge;

@end

//切换列表的按钮
@interface SBSwitchTableButton : SBSegmentedButton
@end


@interface SBSegmentedConfig : NSObject

@property (nonatomic, strong) UIImage *leftButtonBackground;
@property (nonatomic, strong) UIImage *leftButtonBackgroundHighLighted;
@property (nonatomic, strong) UIImage *buttonBackground;
@property (nonatomic, strong) UIImage *buttonBackgroundHighLighted;
@property (nonatomic, strong) UIImage *rightButtonBackground;
@property (nonatomic, strong) UIImage *rightButtonBackgroundHighLighted;

@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *textColorHighlighted;

@property (nonatomic, strong) UIColor *badgeColor;
@property (nonatomic, strong) UIColor *badgeColorHighlighted;

@property (nonatomic, strong) UIFont *textFont;

@end

@interface SBSegmented : UIView

@property (nonatomic, copy) void(^indexChangedHandler)(NSInteger newIndex, NSInteger previousIndex);
@property (nonatomic, unsafe_unretained, readonly)NSInteger currentIndex;
@property (nonatomic, strong) NSArray *indexTitles;          //显示文字


/**
 *  初始化导航条上的切换条
 *
 *  @param titles 标题
 *
 *  @return 切换条
 */
- (id)initWithNavTitles:(NSArray *)titles;

/**
 *  初始化动态的切换条
 *
 *  @param titles 标题
 *
 *  @return 切换条
 */

- (id)initWithSwitchTitles:(NSArray *)titles ;

/**
 *  获取分段按钮
 *
 *  @param index 位置
 */
- (UIButton *)getSectionButtonAtIndex:(NSInteger)index;


/**
 *  获取当前选中的位置
 */
- (NSInteger)selectIndex;

- (void)selectIndex:(NSInteger)index;

- (void)setSectionTitle:(NSString *)title atIndex:(NSInteger)index;

- (void)setSectionBadges:(NSArray *)badges;
- (void)setSectionBadge:(NSString *)badge atIndex:(NSInteger)index;

@end
