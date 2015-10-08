/*
 #####################################################################
 # File    : SBStatusBodyAssistButton.h
 # Project : StockBar
 # Created : 14/11/10
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 点赞按钮
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

@interface SBStatusBodyAssistButton : UIButton

@property (nonatomic, strong) UIImageView *assistIconImage; //赞图标
@property (nonatomic, strong) UILabel *assistCountLbl;      //赞标签

@property (nonatomic, assign) BOOL isAssisted;          //是否已赞
@property (nonatomic, assign) NSInteger assistCount;       //赞的数量

//赞按钮状态
- (void)assistButtonState:(BOOL)isAssisted;

@end
