//
//  MHDCityCell.m
//  MentalHealthDoctor
//
//  Created by Summer on 16/2/18.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDCityCell.h"

@interface MHDCityCell ()

@property (weak, nonatomic) IBOutlet UILabel *lblCity;

@end

@implementation MHDCityCell

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)setCityName:(NSString *)cityName{
    _lblCity.text = cityName;
}

@end
