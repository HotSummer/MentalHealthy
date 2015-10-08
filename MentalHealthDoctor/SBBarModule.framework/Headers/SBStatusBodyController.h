/*
 #####################################################################
 # File    : SBStatusBodyController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 帖子正文
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
#import <SBBarModule/SBJSONNODEV3.h>
////帖子类型
//typedef NS_ENUM(NSInteger, SBStatusBodyControllerType) {
//    SBStatusBodyControllerTypeNormal,
//    SBStatusBodyControllerTypeInterview
//};

typedef NS_ENUM(NSInteger, SBStatusBodyComeFromType) {
    SBStatusBodyComeFromTypeNomal = 0,
    SBStatusBodyComeFromTypeReply = 1
};

/** 删除帖子 **/
typedef void(^deleteBodyBlock)(NSString *postid);

/**
 正文界面 view controller
 */
@interface SBStatusBodyController : SBBasicController<UIScrollViewDelegate>

@property (nonatomic, copy) NSString *postId;
@property (nonatomic, copy) NSString *barName;

@property (nonatomic, copy) deleteBodyBlock deleteBody;
@property (nonatomic, assign) SBStatusBodyComeFromType comeFromType;
@property (nonatomic, assign) SBStatusBodyControllerType controllerType;


@end
