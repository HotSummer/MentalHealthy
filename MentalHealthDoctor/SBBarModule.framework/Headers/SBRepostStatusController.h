/*
 #####################################################################
 # File    : SBReplyStatusController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 回复帖子
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

#import "SBDialogController.h"

@interface SBRepostStatusController : SBDialogController

@property (nonatomic, strong) DataItemDetail *originalPost;
@property (nonatomic, copy) NSString *repostText;   //预置信息
/**
 同时评论给某人
 这个参数可有可无，如果没有，则遵循originalPostUserName。但这两个值不一定是一样的。
 例如，B转发A，现在C要转发B，那么quoteView的内容应该是A的内容（用户名、头像 etc.）
 但是同时评论给，应该是B的名字
 */
@property (nonatomic, copy) NSString *commentUserNickName;

@end
