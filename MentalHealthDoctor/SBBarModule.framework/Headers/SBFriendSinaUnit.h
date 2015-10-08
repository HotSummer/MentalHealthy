/*
 #####################################################################
 # File    : SBFriendSinaUnit.h
 # Project : StockBar
 # Created : 14-6-21
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 
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



/**
 *  手机好友单元格
 */
@interface SBFriendSinaCell: SBUserCell

@end

/**
 *  匹配t通行证成功
 *
 *  @param forFollowResult //待关注列表信息
 *  @param forInviteResult //待邀请列表信息
 *  @param followedResult  //已关注列表信息
 */
typedef void (^matchSinaSuccess) (DataItemResult *matchSinaCompleteResult);

/**
 *  新浪好友操作类
 */
@interface SBFriendSinaUnit : NSObject <SBHttpDataLoaderDelegate>

@property (strong) DataItemResult *sinaResult;        //所有sina信息
@property (nonatomic, copy) matchSinaSuccess matchSinaSuccessBlock;        //所有通讯录信息
@property (strong) SBHttpDataLoader *sinaLoader;       //通讯录好友
//新浪用户数据提取与发送请求
- (void)startRequestWithSinaUserData;
@end
