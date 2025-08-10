//
//  AWHBPBPositionCustomCalloutView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/7/13.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPositionCustomCalloutView : UIView

@property(nonatomic,copy)AWHBBCarModel *model;
///经纬度
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
/// 米
@property(nonatomic,assign) CGFloat meter;

@property(nonatomic,copy) void (^navigationClick)(void);

@end

NS_ASSUME_NONNULL_END
