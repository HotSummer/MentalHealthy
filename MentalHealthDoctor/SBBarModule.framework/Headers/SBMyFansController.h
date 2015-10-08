/*
 #####################################################################
 # File    : SBMyFansController.h
 # Project : StockBar
 # Created : 14-6-4
 # DevTeam : Xiebohui
 # Author  : Xiebohui
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

@interface SBMyFansCell : SBUserCell
@end

@interface SBMyFansEmptyCell : SBFullEmptyCell
@end

@interface SBMyFansController : SBBasicController

@property (nonatomic, copy) NSString *userId;

@end
