/*
 #####################################################################
 # File    : SBThemePageController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 主题吧中心
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

#import "SBBarPageController.h"
#import "SBSourceStatusCell.h"

//主题股吧主页名片
@interface SBThemeBarPageCard : UIView {
    SBCacheImageView *_portraitView;//肖像
    UILabel *_tBarNameLbl;          //吧名
    UILabel *_followStrLbl;             //关注
    UILabel *_statusStrLbl;             //帖子
    UILabel *_followCountLbl;             //关注数
    UILabel *_statusCountLbl;             //帖子数
    UIButton *_followBtn;           //关注按钮
    UIView *_sepLine;           //分割线
}

@property (nonatomic ,weak) UIViewController *ctrl;      //中心界面
@property (nonatomic ,strong) DataItemDetail *barDetail;      //用户信息

@end

//主题吧帖子置顶单元格
@interface SBThemePageStatusTopCell : SBTopStatusCell
@end
//主题吧帖子单元格
@interface SBThemePageStatusCell : SBSourceStatusCell {
}
@end
//主题吧中心新闻单元格
@interface SBThemePageNewsCell : SBTopStatusCell
@end
//主题吧中心公告单元格
@interface SBThemePageSurveyCell : SBTopStatusCell
@end
//主题吧中心研报单元格
@interface SBThemePageAnnounceCell : SBTopStatusCell
@end
//主题吧中心数据单元格
@interface SBThemePageDataCell : SBTopStatusCell
@end
//主题吧股友单元格
@interface SBThemePageMyUserCell : SBUserCell
@end
//controller
@interface SBThemePageController : SBBarPageController <SBHttpDataLoaderDelegate>

@end
