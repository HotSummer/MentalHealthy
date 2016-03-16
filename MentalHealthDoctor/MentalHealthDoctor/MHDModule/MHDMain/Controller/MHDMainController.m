//
//  MHDMainController.m
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDMainController.h"
#import "MentalAdModel.h"

@implementation MHDMainController

DEFINE_SINGLETON(MHDMainController);

- (void)loadMentalAds:(ResponseBlock)complete{
    /*
     @property(nonatomic, assign) AdType goType;
     @property(nonatomic, strong) NSString *bgImageUrl;
     @property(nonatomic, strong) NSString *indicatorImageUrl;
     @property(nonatomic, strong) NSString *title;
     @property(nonatomic, strong) NSString *subTitle;
     @property(nonatomic, strong) NSString *date;
     @property(nonatomic, strong) NSString *location;
     */
    NSString *adsJsonString = @"[{\"goType\": 0, \"bgImageUrl\": \"page01.jpg\", \"indicatorImageUrl\":\"main_activity.png\", \"title\": \"当梦在说话——\", \"subTitle\": \"在盗梦空间中，对话未知的自己\", \"date\": \"星期四2015年11月5日\", \"location\": \"人民广场\"}, {\"goType\": 1, \"bgImageUrl\": \"page02.jpg\", \"indicatorImageUrl\":\"main_knowledge.png\", \"title\": \"从心理学角度来看九型人格有道理吗？\", \"subTitle\": \"\", \"date\": \"\", \"location\": \"\"}, {\"goType\": 2, \"bgImageUrl\": \"page03.jpg\", \"indicatorImageUrl\":\"main_test.png\", \"title\": \"你买了这么多心理书，为什么依然没有过好生活\", \"subTitle\": \"\", \"date\": \"\", \"location\": \"\"}, {\"goType\": 2, \"bgImageUrl\": \"page04.jpg\", \"indicatorImageUrl\":\"main_test.png\", \"title\": \"你买了这么多心理书，为什么依然没有过好生活\", \"subTitle\": \"\", \"date\": \"\", \"location\": \"\"}, {\"goType\": 2, \"bgImageUrl\": \"page05.jpg\", \"indicatorImageUrl\":\"main_test.png\", \"title\": \"你买了这么多心理书，为什么依然没有过好生活\", \"subTitle\": \"\", \"date\": \"\", \"location\": \"\"}]";
    NSData *data = [adsJsonString dataUsingEncoding:NSUTF8StringEncoding];
    NSMutableArray *arrData = [MentalAdModel arrayOfModelsFromData:data error:nil];
    //(int code, NSString *message, id content, NSError *error);
    if (complete) {
        complete(200, @"ok", arrData, nil);
    }
}

@end
