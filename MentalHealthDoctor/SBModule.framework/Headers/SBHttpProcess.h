/*
 #####################################################################
 # File    : SBHttpProcess.h
 # Project :
 # Created : 2013-03-30
 # DevTeam : Thomas Develop
 # Author  :
 # Notes   :
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  : 2012-6-9
 # Author: thomas
 # Notes : 更新新文档
 #
 #####################################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  : 2012-4-28
 # Author: thomas
 # Notes : 更新接口，加入资讯信息的扩展
 #
 #####################################################################
 */

#import "SBHttpProcess.h"
#import "SBHttpDataLoader.h"



@interface SBHttpProcess : NSObject {
}

/**
 *  上传错误日志
 */
+ (SBHttpDataLoader *)sbset_exception_log:(NSString *)log
                                      time:(NSString *)time
                                     level:(NSInteger)level
                                  delegate:(id<SBHttpDataLoaderDelegate>)delegate;

@end