/*
 #####################################################################
 # File    : SBMoreButton.h
 # Project : StockBar
 # Created : 14-6-15
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 更多按钮
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

extern CGFloat const SBMoreButtonFounctionFont;
extern CGFloat const SBMoreButtonWidth;
extern CGFloat const SBMoreButtonHeight;
extern CGFloat const SBMoreFunctionWidth;

// 更多
typedef void(^sbMoreFuncBlock)();

//回复单元格上的更多按钮
@interface SBMoreButton : UIButton {
    
}

@property (nonatomic, strong) UIView *moreView;
@property (nonatomic, strong) UIButton *modalView;
@property (nonatomic, strong) UIButton *replyBtn;
@property (nonatomic, strong) UIButton *assistBtn;

@property (nonatomic, copy) sbMoreFuncBlock replyReply;//回复一条回复
@property (nonatomic, copy) sbMoreFuncBlock assistReply;//赞一条回复

/**
 *  更多选项消失
 */
- (void)dismissMoreArea;


/**
 *  点赞的效果
 */
- (void)assistBtnState:(BOOL)isAssisted;

@end
