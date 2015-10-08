/*
 #####################################################################
 # File    : SBViewAllReplysController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 查看所有的回复
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


@class SBReplyStatusView;

/**
 查看对话界面
 */
@interface SBConversationController : SBBasicController

@property (nonatomic, strong) SBReplyStatusView *replyView;

//@property (nonatomic, strong) DataItemDetail *originalPost;
@property (nonatomic, copy) NSString *dialogId;
@property (nonatomic, copy) NSString *postId;


- (instancetype)initWithDialogId:(NSString *)dialogId postId:(NSString *)postId;

@end
