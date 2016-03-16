//
//  MHDFindDocController.h
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//  找医生界面

#import "MHDBasicController.h"

typedef enum {
    MHDFindDocTypeJT = 0,          //家庭
    MHDFindDocTypeZYKR = 1,          //职业困扰
    MHDFindDocTypeRJGX = 2,          //人机关系
    MHDFindDocTypeQSNXG = 3,          //青少年相关
    MHDFindDocTypeZLNXG = 4,          //中老年相关
    MHDFindDocTypeQX = 5,          //情绪
    MHDFindDocTypeCY = 6,          //成瘾
    MHDFindDocTypeKJ = 7,          //恐惧
    MHDFindDocTypeLXGX = 8,          //两性关系
    MHDFindDocTypeSM = 9,          //失眠
    MHDFindDocTypeQT = 10,          //其他
    
    MHDFindDocPriceUnder500 = 100,          //500以下
    MHDFindDocPriceUp500 = 101,          //500-1000
    MHDFindDocPriceUp1000 = 102,          //1000以上

} MHDFindDocType;

@interface MHDFindDocController : MHDBasicController

@end
