/*
 #####################################################################
 # File    : SBModifyIntroController.h
 # Project : StockBar
 # Created : 14-7-23
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


/**
 *  修改简介回调
 */
@protocol SBModifyIntroDelegate <NSObject>
/**
 *  修改简介
 *
 *  @param intro 简介
 */
- (void)savedIntro:(NSString *)intro;
@end

@interface SBModifyIntroController : SBBasicController

@property (nonatomic, copy) NSString *infoStr;           //个人简介
@property (weak) id<SBModifyIntroDelegate> delegate;           //回调

@end
