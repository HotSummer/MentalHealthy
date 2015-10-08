/*
 #####################################################################
 # File    : SBStatusSourceView.h
 # Project : StockBar
 # Created : 14/11/14
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 帖子的原始帖
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

#import <SBModule/SBLinkLabel.h>                       //图文标签，点击使用

@class SBCacheButton;          //按钮


#define __SB_IMG_STATUS_SOURCE_BG    [UIImage imageNamed:@"sb_status_cell_source.png"]       //原帖背景
#define __SB_COLOR_STATUS_SOURCE_TITLE               RGB(0x33, 0x33, 0x33)            //标题颜色
#define __SB_WIDTH_STATUS_SOURCE_VIEW             APPCONFIG_UI_SCREEN_FWIDTH - 34.0f             //原帖区域宽度
#define __SB_WIDTH_STATUS_SOURCE_TEXT         APPCONFIG_UI_SCREEN_FWIDTH - 54.0f             //原帖正文宽度
#define __SBEM_IMG_STATUS_SOURCE_BG    [UIImage imageNamed:@"sbem_status_cell_source.png"]       //原帖背景


@interface SBStatusSourceView : UIButton <SBLinkLabelDelegate>{
}

@property (nonatomic, assign) UITableViewCell<SBLinkLabelDelegate> *cell;        //所在单元格

@property (nonatomic, strong) SBLinkLabel *sourceStatusTitleLLbl;                //原帖标题
@property (nonatomic, strong) SBLinkLabel *sourceStatusTextLLbl;                //原帖内容
@property (nonatomic, strong) SBCacheButton *sourceThumbnailView;                //原帖图片

@property (nonatomic, copy) NSString *sourcePostUserId;
@property (nonatomic, copy) NSString *sourcePostUserNick;
@property (nonatomic, copy) NSString *sourcePostIPAddress;
@property (nonatomic, copy) NSString *sourceTitle;
@property (nonatomic, copy) NSAttributedString *sourceContent;
@property (nonatomic, copy) NSString *sourceImageUrl;

@property (nonatomic, assign) BOOL isBlackPage;                   //是否是财付通界面

@end
