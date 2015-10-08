//
//  SBRepostStatusJob.h
//  StockBar
//
//  Created by 缪和光 on 14-6-16.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import "SBStatusJobBase.h"

@interface SBRepostStatusJob : SBStatusJobBase

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *yid;
@property (nonatomic, unsafe_unretained) BOOL alsoReply;

@end
