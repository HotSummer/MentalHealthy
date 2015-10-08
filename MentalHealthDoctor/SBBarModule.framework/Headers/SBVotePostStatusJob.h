//
//  SBVotePostStatusJob.h
//  SBBarModule
//
//  Created by 123 on 15/3/30.
//  Copyright (c) 2015年 thomas. All rights reserved.
//

#import "SBPostStatusJob.h"

@interface SBVotePostStatusJob : SBPostStatusJob

@property (nonatomic, copy) NSString *strVoteDesc;
@property (nonatomic, strong) NSArray* aryVoteOptions;
@property (nonatomic, assign) BOOL bIsSingleSelect; //投票是单选还是多选
-(BOOL)isValidForPost;
@end
