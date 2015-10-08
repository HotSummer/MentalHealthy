//
//  SBSatusPostService.h
//  NSOperationTest
//
//  Created by 缪和光 on 14/06/2014.
//  Copyright (c) 2014 Hokuang. All rights reserved.
//

#import "SBPostStatusJob.h"
#import "SBReplyStatusJob.h"
#import "SBRepostStatusJob.h"
#import "SBVotePostStatusJob.h"


/**
 发帖、回复、转发的队列
 
 发帖成功、失败以及进度都以notification形式发送。
 有关的notification name和user info key在SBStatusJobBase.h中定义。
 发帖成功和失败的notification中含有假数据（通过kSBStatusJobFakeDataUserInfoKey）找到，
 假数据为DataItemDetail格式，其中的key在SBStatusJobKeys.h中可找到
 */
@interface SBStatusPostService : NSObject

+ (SBStatusPostService *)sharedInstance;

+ (void)addJob:(SBStatusJobBase *)aJob;


@end
