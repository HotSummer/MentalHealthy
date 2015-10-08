/*
 #####################################################################
 # File    : SBStatusCellUnit.h
 # Project : StockBar
 # Created : 14-5-30
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 帖子单元格数据辅助工具类
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

#define __SB_WIDTH_STATUS_TEXT             APPCONFIG_UI_SCREEN_FWIDTH - 34.0f       //正文字宽度
#define __SB_WIDTH_STATUS_TOP_TITLE           APPCONFIG_UI_SCREEN_FWIDTH - 100.0f   //置顶帖的标题宽度

//帖子单元格的颜色
#define __SB_COLOR_STATUS_BGVIEW             RGB(0xff, 0xff, 0xff)             //背景颜色
#define __SB_COLOR_STATUS_TITLE              RGB(0x33, 0x33, 0x33)            //标题颜色
#define __SB_COLOR_STATUS_TEXT               RGB(0x33, 0x33, 0x33)             //正文颜色
#define __SB_COLOR_STATUS_FAKE               RGB(0x80, 0x80, 0x80)             //假数据颜色
#define __SB_COLOR_STATUS_TYPE               RGB(0xff, 0xff, 0xff)       //帖子类型


#import <SBModule/DataItemResult.h>
#import "SBJSONNODEV3.h"        //V3 json节点

extern CGFloat const SBStasusCellTitleFont;            //标题字体
extern CGFloat const SBStatusCellTextFont;             //正文字体
extern NSString * const SBStatusCellHeightNode;       //单元格高
extern NSString * const SBReplyCellHeightNode;            //回复单元格高度
extern NSString * const SBSourceTextHeightNode;              //原帖
extern NSString * const SBStatusTitleNode;           //标题
extern NSString * const SBStatusContentNode;       //正文简介
extern NSString * const SBStatusTitleHeightNode;           //标题高度
extern NSString * const SBContentHeightNode;       //正文高度
extern NSString * const SBHasSourceNode;       //单元格是否有原帖
extern NSString * const SBSourceContentNode;       //原帖正文简介
extern NSString * const SBStatusReplyTextNode;       //回复正文
extern NSString * const SBReplySourceTextNode;            //原回复正文
extern NSString * const SBTopPublishTimeNode;            //置顶帖的发布时间
extern NSString * const SBAssistStatusTextNode;            //赞帖子的数据
extern NSString * const SBIsFakeDataNode;            //是否是假数据
extern NSString * const SBIsExpandNode;            //回复是否展开


@interface SBStatusCellUnit : NSObject

@end


//属性化的字符串
@interface NSString (SBStatusCell)

- (NSMutableAttributedString *)sbTitleString;

- (NSMutableAttributedString *)sbContentString;

@end

@interface DataItemResult (SBStatusCell)

/**
 *  处理帖子的列表数据
 */
- (DataItemResult *)handleSBStatusResult;

@end


@interface DataItemDetail (SBStatusCell)

/**
 *  处理帖子的信息数据
 */
- (DataItemDetail *)handleSBStatusDetail;

@end