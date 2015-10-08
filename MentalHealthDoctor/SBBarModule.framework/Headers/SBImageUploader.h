//
//  SBImageUploader.h
//  StockBar
//
//  Created by 缪和光 on 14-6-12.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    SBImageUploaderQualityHigh,
    SBImageUploaderQualityMedium,
    SBImageUploaderQualityLow,
} SBImageUploaderQuality;

extern NSString * const kSBImageUploaderErrorDomain;

@interface SBImageUploader : NSObject

- (void)uploadImages:(NSArray *)images
             quality:(SBImageUploaderQuality)quality
       progressBlock:(void (^)(float progress))progressBlock
     completionBlock:(void (^)(NSArray *urlInfoItems))completionBlock
        failureBlock:(void (^)(NSError *e))failureBlock;

- (void)cancel;

@end
