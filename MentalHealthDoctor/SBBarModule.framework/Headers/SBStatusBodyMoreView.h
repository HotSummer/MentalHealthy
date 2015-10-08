/*
 #####################################################################
 # File    : SBStatusBodyController.h
 # Project : StockBar
 # Created : 14-8-22
 # DevTeam : 缪和光
 # Author  : 缪和光
 # Notes   : SBStatusBodyController里面的更多界面
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  :  15-3-13
 # Author:  陈文琦
 # Notes :  改回调
 #
 #####################################################################
 */

#import <UIKit/UIKit.h>
#import "SBIconButton.h"

/** 删除帖子 **/
typedef void(^selectedMoreIconBlock)(SBStatusBodyMoreButtonType buttonType);

@interface SBStatusBodyMoreView : UIView

@property (nonatomic, assign) BOOL isShown;
@property (nonatomic, copy) selectedMoreIconBlock selectedMoreIcon;

//设置背景色
- (void)setGroupBackgroundColor:(UIColor *)backgroundColor;

//返回按钮
- (SBIconButton *)buttonByType:(SBStatusBodyMoreButtonType)type;

//添加按钮
- (void)addButton:(SBStatusBodyMoreButtonType)buttonType;

//改变选中状态
- (void)setButton:(SBStatusBodyMoreButtonType)buttonType selected:(BOOL)selected;

//反转选中状态
- (void)setButtonSelectedBackwards:(SBStatusBodyMoreButtonType)buttonType;

//改变可用状态
- (void)setButton:(SBStatusBodyMoreButtonType)buttonType enabled:(BOOL)enabled;

//排列按钮位置
- (void)calculateFrames;

//弹出页面
- (void)showInView:(UIView *)view;

//消失页面
- (void)hide;

@end
