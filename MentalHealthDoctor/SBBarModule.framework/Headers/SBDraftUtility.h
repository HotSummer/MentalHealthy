//
//  SBDraftUtility.h
//  StockBar
//
//  Created by 缪和光 on 14-8-6.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//  

#import <Foundation/Foundation.h>
#import <SBModule/DataItemResult.h>

#define DRAFT_UTILITY_DRAFT_KEY @"DRAFT_UTILITY_DRAFT_KEY"

/**
 *  草稿保存
 */
extern NSString * const kSBStatusDraftSaveNotificationName;

/**
 *  草稿删除
 */
extern NSString * const kSBStatusDraftDeleteNotificationName;

@class SBStatusJobBase;
@interface SBDraftUtility : NSObject

///**
// *  存入草稿箱
// *
// *  @param postDetail 发送失败的数据
// */
//+ (void)savePostInDraftBox:(DataItemDetail *)postDetail;
//
///**
// *  删除草稿箱
// *
// *  @param 草稿箱的位置
// */
//+ (void)deletePostInDraftBox:(NSUInteger)index;
//
///**
// *  获取草稿
// *
// *  @param 草稿箱的位置
// */
//+ (DataItemDetail *)getPostInDraftBox:(NSUInteger)index;

+ (void)saveDraft:(SBStatusJobBase *)job;
+ (void)deleteDraftAtIndex:(NSUInteger)index;
+ (SBStatusJobBase *)draftAtIndex:(NSUInteger)index;
+ (DataItemResult *)allDraft;

@end
