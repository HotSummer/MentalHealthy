/*
 #####################################################################
 # File    : SBStatusBarButton.h
 # Project : StockBar
 # Created : 14-8-26
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 吧的来源
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

#import <Foundation/Foundation.h>

/**
 吧的来源按钮
 */
@interface SBStatusBarButton : UIButton

-(void)statusBarTitle:(NSString *)statusBarTitle barCode:(NSString *)barCode;

@end
