/*
 #####################################################################
 # File    : SBStatusButton.h
 # Project : StockBar
 # Created : 14-6-1
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 帖子底部按钮
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

//按钮上的素材
#define __SB_IMG_STATUS_BOTTOM_SHARE    [UIImage imageNamed:@"sb_icon_share"]       //分享图标
#define __SB_IMG_STATUS_BOTTOM_REFER    [UIImage imageNamed:@"sb_icon_refer"]       //转发图标
#define __SB_IMG_STATUS_BOTTOM_REPLY    [UIImage imageNamed:@"sb_icon_commit"]       //回复图标
#define __SB_IMG_STATUS_BOTTOM_ASSIST    [UIImage imageNamed:@"sb_icon_assist"]       //赞图标
#define __SB_IMG_STATUS_BOTTOM_ASSISTED    [UIImage imageNamed:@"sb_icon_assisted"]       //已赞图标
#define __SB_COLOR_STATUS_BOTTOM_SEPLINE               RGB(0xec, 0xec, 0xec)             //底部条按钮分割线
#define __SB_COLOR_STATUS_BOTTOM_BG                    RGB(0xff, 0xff, 0xff)             //底部条按钮颜色
//RGB(0xf9, 0xf9, 0xf9)
#define __SB_COLOR_STATUS_BOTTOM_TITLE               RGB(0x73, 0x73, 0x73)              //底部条按钮字颜色
#define __SB_COLOR_STATUS_BOTTOM_BADGE               [UIColor sb_blueColor]             //底部条按钮字颜色

extern CGFloat const SBStautsToolButtonHeight;             //底部按钮高度
extern CGFloat const SBStatusToolButtonFont;   //底部按钮字体

@interface SBStatusToolButton : UIButton {
    @private
    UIView *_topLine;       //上分割线
    UIView *_bottomLine;        //下分割线
    
}


@property (nonatomic, copy) NSString *buttonTitle;              //文字
@property (nonatomic, copy) NSString *buttonBadge;              //数字
@property (nonatomic, retain) UIColor *titleColor;              //文字颜色
@property (nonatomic, retain) UIColor *badgeColor;              //数字颜色

/**
 *  设置分割线颜色，为了财付通，为了变态的需求
 *
 *  @param color 色值
 */
-(void)setSeplineColor:(UIColor *)color;

@end
