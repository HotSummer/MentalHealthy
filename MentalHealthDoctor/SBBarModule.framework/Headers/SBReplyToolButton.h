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
 # Date  :  14-8-26
 # Author:  Thomas
 # Notes :  变成2个按钮并排
 #
 #####################################################################
 */

#import <UIKit/UIKit.h>

extern CGFloat const SBReplyToolMoreFounctionFont;
extern CGFloat const SBReplyToolMoreButtonWidth;
extern CGFloat const SBReplyToolMoreButtonHeight;
extern CGFloat const SBReplyToolMoreFunctionWidth;
// 更多
typedef void(^sbMoreFuncBlock)();

//回复单元格上的更多按钮
@interface SBReplyToolButton : UIView {
//    UILabel *_replyLbl;          //回复
//    UILabel *_assistLbl;          //赞
    UIView *_sepLine;          //分割线
}

//@property (nonatomic, strong) UIView *moreView;
//@property (nonatomic, strong) UIButton *modalView;
@property (nonatomic, strong) UIButton *replyBtn;
@property (nonatomic, strong) UIButton *assistBtn;
@property (nonatomic, assign) NSInteger replyCount;
@property (nonatomic, assign) NSInteger assistCount;

@property (nonatomic, copy) sbMoreFuncBlock replyReply;//回复一条回复
@property (nonatomic, copy) sbMoreFuncBlock assistReply;//赞一条回复

/**
 *  点赞的效果
 */
- (void)assistBtnState:(BOOL)isAssisted;

/**
 *  点赞的效果 动画
 */
- (void)assistBtnState:(BOOL)isAssisted animate:(BOOL)animate;

@end
