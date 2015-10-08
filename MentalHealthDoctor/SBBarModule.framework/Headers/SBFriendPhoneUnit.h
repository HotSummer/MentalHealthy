/*
 #####################################################################
 # File    : SBFriendPhoneUnit.h
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
@interface SBFriendPhoneCell: SBUserCell

@end

/**
 *  匹配通讯录成功
 *
 *  @param forFollowResult //待关注列表信息
 *  @param forInviteResult //待邀请列表信息
 *  @param followedResult  //已关注列表信息
 */
typedef void (^matchAddressSuccess) (DataItemResult *matchAdressCompleteResult);
/**
 *  通讯录操作类
 */
@interface SBFriendPhoneUnit : NSObject <SBHttpDataLoaderDelegate>

@property (strong) DataItemResult *booksResult;        //所有通讯录信息
@property (nonatomic, copy) matchAddressSuccess matchAddressCompleteBlock;        //所有通讯录信息
@property (strong) SBHttpDataLoader *phoneLoader;       //通讯录好友

- (void)startRequestFriendList;

@end
