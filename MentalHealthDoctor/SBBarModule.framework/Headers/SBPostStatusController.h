/*
 #####################################################################
 # File    : SBPostStatusController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 发布新帖
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

#import "SBDialogController.h"

@interface SBPostStatusController : SBDialogController

@property (nonatomic, copy) NSString *stockCode; //默认gssz 股市实战

@end
