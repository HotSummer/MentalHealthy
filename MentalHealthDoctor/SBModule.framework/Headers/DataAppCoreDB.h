/*
#####################################################################
# File    : DataAppCoreDB.h
# Project : 
# Created : 2013-03-30
# DevTeam : Thomas Develop
# Author  : 
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

#import "DataAppDB.h"

//该类用于操作核心数据库。
@interface DataAppCoreDB : DataAppDB {
@protected
	NSString *TABLE_USER_TRACE;
}

@property (readonly) NSString *TABLE_USER_TRACE;

@end
