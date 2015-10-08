/*
 #####################################################################
 # File    : SBReplyStatusView.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam :
 # Author  : 缪和光
 # Notes   : 回复
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

typedef NSString*(^handleReplyContentBlock)(NSString *replyContent);

#import <SBModule/SBPlaceholderTextView.h>



@interface SBReplyStatusView : UIView

@property (nonatomic, strong) SBPlaceholderTextView *textView;

@property (nonatomic, copy) NSString *originalUserName;
@property (nonatomic, copy) NSString *newsId;
@property (nonatomic, copy) NSString *postId;
@property (nonatomic, copy) NSString *replyId;
@property (nonatomic, copy) NSString *defaultTextString;            //默认输入的文字
@property (nonatomic, strong) UIViewController *replyCtrl;

@property (nonatomic, assign) SBV3AritlceType aritlceType;
/** 新闻与摘要区分 */
//@property (nonatomic, assign) SBV3AritlceSpecialType aritlceSpecialType;


@property (nonatomic, assign) NSInteger draftIndex; //草稿箱数据位置  默认NSNotFound

@property (nonatomic, copy) void (^replyDidSendBlock)(SBReplyStatusView *statusView);

@property (nonatomic, copy) handleReplyContentBlock handleReplyBlock;



+ (SBReplyStatusView *)replyView;

/**
 将 Reply View 帖在Window上
 
 有动画
 
 @param window 目标window
 */
- (void)show;

/**
 将 Reply View 消失
 有动画
 */
- (void)dismiss;

- (void)dismissWithCompletionBlock:(void (^)())completeBlock;

/**
 将 Reply View 消失
 
 @param animation 是否显示动画
 */
- (void)dismissWithAnimation:(BOOL)animation;

- (void)dismissWithAnimation:(BOOL)animation completion:(void (^)())completeBlock;

- (void)loadDraftDataAtIndex:(NSUInteger)idx;

@end
