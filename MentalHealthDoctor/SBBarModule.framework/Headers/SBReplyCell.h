/*
 #####################################################################
 # File    : SBStatusBodyCell.h
 # Project : StockBar
 # Created : 14-6-9
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  : 14-6-16
 # Author: thomas
 # Notes : 改名： SBReplyCell
 #
 #####################################################################
 */

#import <SBModule/SBLinkLabel.h>                       //图文标签，点击使用

@class SBUserTitleView ;                   //个人信息
@class SBAuthorLevelLabel;                  //用户等级
@class SBCacheButton;       //异步加载的图片按钮
@class SBReplyToolButton;            //更多按钮

extern CGFloat const SBReplyTagCellHotHeight;             //热门标签单元格的高度
extern CGFloat const SBReplyTagCellAllHeight;             //全部标签单元格的高度


@interface SBReplyCell : SBDataTableCell <SBHttpDataLoaderDelegate, SBLinkLabelDelegate, UIAlertViewDelegate> {
    UIImageView *_replyView;                 //显示控件的区域
    SBUserTitleView *_userTitleView;             //用户
    UIButton *_deleteBtn;               //删除帖子按钮
    SBReplyToolButton *_toolBtn;                         //更多功能
//    SBAssistCountLabel *_assistNumberLbl;                         //赞的数量
    SBLinkLabel *_replyTextLLbl;                   //正文带链接
    
    UIImageView *_sourceReplyView;          //原始回复
    SBCacheButton *_sourcePortraitBtn;           //头像
    UILabel *_sourceAuthorNameLbl;                //作者名字
    SBLinkLabel *_sourceReplyTextLLbl;                   //正文带链接
    
//    UILabel *_fakeLbl;                //假数据
    
    UIButton *_expandBtn;             //展开评论
    UIButton *_viewBtn;             //查看全部
    
    UIView *_sepLine1;           //边框线
    UIView *_sepLine2;           //边框线
    UIView *_sepLine3;           //边框线

}

@property (strong) SBHttpDataLoader *deleteLoader;     //删除操作
@property (strong) SBHttpDataLoader *assistLoader;     //赞操作

/**
 *  单元格高度
 */
+ (CGFloat)cellHeight:(DataItemDetail *)cellDetail;

///**
// *  伪造一条回复帖假数据
// *
// *  @param replyInfo 回复数据
// *  @param barDetail 所在吧的信息
// *
// *  @return 假数据
// */
//+ (DataItemDetail *)fakeReplyStatus:(DataItemDetail *)replyInfo barDetail:(DataItemDetail *)barDetail;
//
///**
// *  伪造一条回复回复假数据
// *
// *  @param replyInfo 回复数据
// *  @param barDetail 所在吧的信息
// *  @param soureceReplyInfo 原回复数据
// *
// *  @return 假数据
// */
//+ (DataItemDetail *)fakeReplyReply:(DataItemDetail *)replyInfo barDetail:(DataItemDetail *)barDetail sourceReply:(DataItemDetail *)soureceReplyInfo;

@end

/**
 *  区分热门与全部评论的单元格
 */
@interface SBReplyTagCell : SBDataTableCell {
    UIImageView *_tagView;                 //显示控件的区域
    UIButton *_replyTagBtn;          //评论类型
    UILabel *_paddingLabel;         //间隔
    UIView *_sepLine1;      //左分割线
    UIView *_sepLine2;      //右分割线
    
}
@end

/**
 *  当数据出错时的单元格样式
 */
@interface SBReplyErrorCell : SBErrorTableCell
@end

/**
 *  当数据加载时的单元格样式
 */
@interface SBReplyLoadingCell : SBLoadingTableCell
@end

/**
 *  当数据为空时的单元格样式
 */
@interface SBReplyEmptyCell : SBEmptyTableCell
@end

/**
 *  当数据更多的单元格样式
 */
@interface SBReplyMoreCell : SBMoreTableCell
@end

/**
 *  当数据更多的单元格样式
 */
@interface SBReplyFinishCell : SBFinishedTableCell
@end
