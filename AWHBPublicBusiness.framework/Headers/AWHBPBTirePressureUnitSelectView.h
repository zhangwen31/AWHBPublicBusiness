//
//  AWHBPBTirePressureUnitSelectView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/6/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBTirePressureUnitSelectClick)(NSString *temperatureUnit, NSString *pressureUnit);

@interface AWHBPBTirePressureUnitSelectView : UIView

@property(nonatomic,copy) void (^closeBlock)(void);

@property(nonatomic, copy) AWHBPBTirePressureUnitSelectClick selectClick;

//温度单位
@property (nonatomic, strong) NSString *temperatureUnit;
//压力单位
@property (nonatomic, strong) NSString *pressureUnit;

@end

NS_ASSUME_NONNULL_END
