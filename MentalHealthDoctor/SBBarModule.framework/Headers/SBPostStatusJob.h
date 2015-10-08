//
//  SBPostStatusJob.h
//  NSOperationTest
//
//  Created by 缪和光 on 13/06/2014.
//  Copyright (c) 2014 Hokuang. All rights reserved.
//

#import "SBStatusJobBase.h"

@interface SBPostStatusJob : SBStatusJobBase

@property (nonatomic, copy) NSString *stockCode;
//@property (nonatomic, copy) NSString *title;
//@property (nonatomic, copy) NSString *yzm; //验证码
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *imageInfoArray;
@property (nonatomic, copy) NSArray *imageURLArray; //如果有，则不再上传图片
-(NSString *)judgeContentString:(NSString *)contet;
@end
