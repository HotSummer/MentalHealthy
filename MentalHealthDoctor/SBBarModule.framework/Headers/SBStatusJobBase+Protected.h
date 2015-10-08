//
//  SBStatusJobBase+Protected.h
//  NSOperationTest
//
//  Created by 缪和光 on 13/06/2014.
//  Copyright (c) 2014 Hokuang. All rights reserved.
//

#import "SBStatusJobBase.h"

@interface SBStatusJobBase (Protected)

@property (nonatomic, strong) SBHttpDataLoader *postLoader;
@property (nonatomic, strong) NSRecursiveLock *lock;

@property (nonatomic,readwrite, copy) NSString *postTime; //发表时间
@property (nonatomic,readwrite, copy) NSString *errorMessage; //错误表述

-(SBStatusJobState)jobState;

- (void)setJobState:(SBStatusJobState)newState;

- (void)postNotificationInMainThreadWithName:(NSString *)name
                                    userInfo:(NSDictionary *)userInfo;

@end