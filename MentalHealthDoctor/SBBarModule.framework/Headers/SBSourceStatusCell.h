/*
 #####################################################################
 # File    : SBSourceStatusCell.h
 # Project : StockBar
 # Created : 14-5-30
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 带原帖子的帖子单元格
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

#import "SBStatusCell.h"
#import <SBModule/SBLinkLabel.h>                       //图文标签，点击使用

extern CGFloat const SBTopStatusTitleFont;      //置顶标题font
extern CGFloat const SBEMBarTopIconWidth ;//分时图下置顶标志宽度
extern CGFloat const SBEMBarTopIconHeight ;//分时图置顶标志高度
extern CGFloat const SBStatusTopIconPadding;//置顶上边距微调

@class SBStatusBarButton;                   //帖子上吧的来源按钮
@class SBStatusToolButton;                  //帖子上的底部按钮
@class SBStatusSourceView;
@class SBCacheButton;                       //异步加载的图片按钮
@class SBCacheImageView;                    //异步加载的图片

//带原帖子的帖子单元格
@interface SBSourceStatusCell : SBStatusCell <SBHttpDataLoaderDelegate>{
    
    SBLinkLabel *_statusTitleLLbl;                  //帖子标题
    SBLinkLabel *_statusTextLLbl;                   //正文带链接
    SBCacheButton *_thumbnailView;                 //缩略图
    
    SBStatusSourceView *statusSourceView;           //原帖
    
    SBStatusToolButton *_referBtn;                        //转发按钮
    SBStatusToolButton *_replyBtn;                        //回复按钮
    SBStatusToolButton *_assistBtn;                        //赞按钮
    SBStatusToolButton *_clickBtn;                        //阅读按钮
    
//    UIView *_btnSep1;                //分割线
//    UIView *_btnSep2;                //分割线
//    UIView *_btnSep3;                //分割线
}
@property (nonatomic, strong) SBStatusBarButton *statusPartOfBtn;             //帖子所属
@property (nonatomic, strong) SBHttpDataLoader *assistLoader;     //赞帖子操作
@property (nonatomic, strong) NSString *topIconStr;     //置顶字符
@property (nonatomic, copy) NSString *typeIconStr;      //帖子类型字符串
@property (nonatomic) SBV3AritlceType articleType;  //帖子类型
/**
 查看帖子
 */
- (void)viewStatus;

//帖子所在吧
- (void)viewPostBar:(id)sender;

//当子类更改过frame后，调用此方法可确保相对位置不变
-(void)layoutViewsPadding;
///**
// *  伪造一条帖子假数据
// *
// *  @param postInfo 发帖数据
// *  @param barName 帖子所在的吧
// *
// *  @return 假数据
// */
//+ (DataItemDetail *)fakeStatus:(DataItemDetail *)postInfo inBar:(NSString *)barName;
//
///**
// *  伪造一条转发帖假数据
// *
// *  @param postInfo 发帖数据
// *
// *  @return 假数据
// */
//+ (DataItemDetail *)fakeSourceStatus:(DataItemDetail *)postInfo;

@end

//置顶的帖子单元格
@interface SBTopStatusCell : SBDataTableCell {
    UIImageView *_statusView;          //显示区域
    SBCellLabel *_topIconLbl;          //置顶图标
    UILabel *_statusTitleLLbl;          //帖子标题
    UILabel *_publishTimeLbl;          //发帖时间
    UIView *_sepLine;           //分割线
}

//单元格高度
+ (CGFloat)cellHeight:(DataItemDetail *)cellDetail;

@end