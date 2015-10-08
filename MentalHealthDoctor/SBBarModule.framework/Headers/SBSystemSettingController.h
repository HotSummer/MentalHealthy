/*
 #####################################################################
 # File    : SBSystemSettingController.h
 # Project : StockBar
 # Created : 14-7-1
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 股吧的设置界面
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


//发现界面类型
typedef enum {
	SBSystemSettingTypeNotification = 0,          //推送
	SBSystemSettingTypeNewSetting = 1,            //资讯设置
	SBSystemSettingTypeCleanCache = 2,            //清除缓存
    SBSystemSettingTypePrivacy = 3,              //隐私
	SBSystemSettingTypeGrade = 4,                 //评分
	SBSystemSettingTypeFeedback = 5,              //反馈
	SBSystemSettingTypeUpdate = 6,                //升级
	SBSystemSettingTypeRecommend = 7,             //推荐
	SBSystemSettingTypeHelp = 8,                  //帮助
} SBSystemSettingType;


//系统设置单元格
@interface SBSystemSettingCell : SBDataTableCell {
    UILabel *_titleLbl;     //标题
    UILabel *_subTitleLbl;      //副标题
    UIImageView *_systemImageView;      //可能需要用到的图片
}

@end

@interface SBSystemSettingController : SBBasicController <UIAlertViewDelegate>

@end
