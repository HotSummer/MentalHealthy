/*
 #####################################################################
 # File    : SBMyAttentionController.h
 # Project : StockBar
 # Created : 14-6-4
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   :
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  : 14-6-8
 # Author: thomas
 # Notes : 改名 SBMyFollowUsersController
 #
 #####################################################################
 */

//我关注的人单元格
@interface SBMyFollowCell : SBUserCell
@end

//我关注的人空单元格
@interface SBMyFollowEmptyCell : SBFullEmptyCell
@end

@interface SBMyFollowUsersController : SBBasicController

@property (nonatomic, copy) NSString *userId;

@end
