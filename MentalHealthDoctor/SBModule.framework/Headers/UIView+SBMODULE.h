/*
#####################################################################
# File    : UIViewCagegory.h
# Project : 
# Created : 2013-03-30
# DevTeam : Thomas Develop
# Author  : 
# Notes   :
#####################################################################
### Change Logs   ###################################################
#####################################################################
---------------------------------------------------------------------
# Date  : 2012-3-30
# Author: thomas
# Notes : 添加垂直居中方法
#
#####################################################################
*/

#import <UIKit/UIKit.h>

//为SDK自带的 UIView 类添加一些实用方法
@interface UIView (sbmodule)
/**移动到兄弟view的上方*/
- (void)sb_topOfView:(UIView *)view;

/**移动到兄弟view的上方，指定间距*/
- (void)sb_topOfView:(UIView *)view withMargin:(CGFloat)margin;

/**移动到兄弟view的下方*/
- (void)sb_bottomOfView:(UIView *)view;

/**移动到兄弟view的下方，指定间距*/
- (void)sb_bottomOfView:(UIView *)view withMargin:(CGFloat)margin;

/**移动到兄弟view的左方*/
- (void)sb_leftOfView:(UIView *)view;

/**移动到兄弟view的左方，指定间距*/
- (void)sb_leftOfView:(UIView *)view withMargin:(CGFloat)margin;

/**
移动到兄弟view的左方，指定间距，并且指定是否垂直居中

@param view   兄弟view
@param margin 间距
@param same   是否垂直居中
*/
- (void)sb_leftOfView:(UIView *)view withMargin:(CGFloat)margin sameVertical:(BOOL)same;

/**在视图右方*/
- (void)sb_rightOfView:(UIView *)view;

/**移动到兄弟view的右方*/
- (void)sb_rightOfView:(UIView *)view withMargin:(CGFloat)margin;

/**
移动到兄弟view的右方，指定间距，并且指定是否垂直居中

@param view   兄弟view
@param margin 间距
@param same   是否垂直居中
*/
- (void)sb_rightOfView:(UIView *)view withMargin:(CGFloat)margin sameVertical:(BOOL)same;

/**设置视图宽*/
- (void)sb_setWidth:(CGFloat)width;

/**设置视图高*/
- (void)sb_setHeight:(CGFloat)height;

/**设置起点的y值*/
- (void)sb_setMinY:(CGFloat)top;

/**设置起点的x值*/
- (void)sb_setMinX:(CGFloat)left;

/**在parent视图的水平中间*/
- (void)sb_centerOfView:(UIView *)view;

/**在另一视图的垂直中间*/
- (void)sb_verticalOfView:(UIView *)view;

//添加单机手势
- (UITapGestureRecognizer *)sb_setTapGesture:(id)target action:(SEL)action;

/** 通过view获取controller */
- (UIViewController *)sb_viewController;
@end
