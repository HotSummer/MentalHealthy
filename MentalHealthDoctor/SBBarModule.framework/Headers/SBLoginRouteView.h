/**
 * 文件名：SBLoginRouteView .<#h#>
 * 软件名称：
 * 文件描述：登录条，包含登录和注册
 * 作者&创建时间：Created by 陈永智 on 2015-04-16.
 * 版本号：xxx
 * 保护声明：Copyright (c) 2014年 com.eastMoney. All rights reserved.
 * 完成日期：
 * 修改历史:
 */

#import <UIKit/UIKit.h>

static CGFloat const SBLoginViewHeight = 44.0f;           //登录提示条的高度
static CGFloat const SBLoginButtonWidth = 107.0f;          //登录按钮宽度
static CGFloat const SBLoginButtonLeftPadding = 15.0f;     //登录按钮左边距
static CGFloat const SBRegisterTitleFont = 16.0f;          //注册字体大小

//登录按钮回调
typedef void(^SBLoginRouteViewLoginBlock)();

//注册按钮回调
typedef void(^SBLoginRouteViewRegisterBlock)();

@interface SBLoginRouteView : UIView

@property (nonatomic, copy) SBLoginRouteViewLoginBlock loginBlock;
@property (nonatomic, copy) SBLoginRouteViewRegisterBlock registerBlock;

@end
