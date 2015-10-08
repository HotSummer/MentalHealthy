/*
 #####################################################################
 # File    : UIBarButtonItem+SBMODULE.h
 # Project : 
 # Created : 2012-01-21
 # DevTeam : 
 # Author  : thomas (roronoa@foxmail.com)
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

@interface UIBarButtonItem (sbmodule)

//设置下一级左上角返回键的标题 系统自带的，只能改显示
+ (void)setBackItem:(id)target title:(NSString *)title;

//一个空位
+ (UIBarButtonItem *)flexItem;

@end
