/*
 #####################################################################
 # File    : StockBarContentParser.h
 # Project :
 # Created : 
 # DevTeam :
 # Author  : 缪 和光
 # Notes   : 股吧所需要的图文解析
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  : 2013-06-19
 # Author: thomas
 # Notes : 修改一些数据显示
 #
 #####################################################################
 */

#import <EMModuleUtility/RegexKitLite.h>                //正则匹配

typedef NSAttributedString *(^SBTagProcessorBlockType)(NSAttributedString*, NSTextCheckingResult*);

@interface SBLinkParser : NSObject

SB_ARC_SINGLETON_DEFINE(SBLinkParser);

/**
 *  转换股吧独立版中的特殊规则
 *
 *  @param string 原始字符串
 *
 *  @return 属性化后的字符串
 */
+ (NSMutableAttributedString*)sbAttributedInString:(NSString*)string;

@end
