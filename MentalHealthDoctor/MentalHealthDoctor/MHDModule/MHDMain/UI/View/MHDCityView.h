//
//  MHDCityView.h
//  MentalHealthDoctor
//
//  Created by Summer on 16/2/18.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDView.h"

@protocol MHDCityDelegate <NSObject>

@optional
- (void)selectedCity:(NSString *)cityName;

@end

@interface MHDCityView : MHDView
<
UITableViewDataSource,
UITableViewDelegate
>

@property(nonatomic, weak) id<MHDCityDelegate> delegate;

@end
