//
//  SBStatusJobBase.h
//  NSOperationTest
//
//  Created by 缪和光 on 13/06/2014.
//  Copyright (c) 2014 Hokuang. All rights reserved.
//

#import "SBStatusJobKeys.h"

typedef NS_ENUM(NSInteger, SBStatusJobState) {
    SBStatusJobStateReady,
    SBStatusJobStateExecuting,
    SBStatusJobStateFinished,
};

typedef NS_ENUM(NSInteger, SBStatusJobType) {
    SBStatusJobTypePost   = 1,
    SBStatusJobTypeReply  = 2,
    SBStatusJobTypeRepost = 3,
};

//#define __SB_NODE_STATUSJOB_TYPE            @"__SB_NODE_STATUSJOB_TYPE"

/**
 task开始
 */
extern NSString * const kSBStatusJobDidStartNotificationName;
/**
 task完成
 */
extern NSString * const kSBStatusJobDidFinishNotificationName;
/**
 task失败
 */
extern NSString * const kSBStatusJobDidFailedNotificationName;
/**
 task的进度
 */
extern NSString * const kSBStatusJobProgressNotificationName;

extern NSString * const kSBStatusJobErrorDomain;

/**
 notification的userInfo的message
 */
extern NSString * const kSBStatusJobMessageUserInfoKey;
/**
 notification的userInfo的error
 */
extern NSString * const kSBStatusJobErrorUserInfoKey;
/**
 notification的userInfo的进度
 */
extern NSString * const kSBStatusJobProgressUserInfoKey;
/**
 notification的userInfo的假数据
 */
extern NSString * const kSBStatusJobFakeDataUserInfoKey;

extern const NSInteger kSBStatusJobNetworkErrorCode;
extern const NSInteger kSBStatusJobContentErrorCode;
extern const NSInteger kSBStatusJobServerErrorCode;

@interface SBStatusJobBase : NSOperation<SBHttpDataLoaderDelegate,NSCoding> {
    @protected
    SBStatusJobState _state;
}

/**
 恢复界面、假数据等需要用的数据
 */
@property (nonatomic, strong) DataItemDetail *postInfo;
@property (nonatomic, readonly, copy) NSString *postTime; //发表时间
@property (nonatomic, readonly, copy) NSString *errorMessage; //错误表述
@property (nonatomic, strong) NSString *identifier; //备用

@property (nonatomic, assign) BOOL isSilenced;//评论是否有提示信息


@end
