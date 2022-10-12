//
//  AWHBPBCountDataModel.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCountDataModel : NSObject
//行车时长
@property(nonatomic,copy)NSString *moveLong;
//最高速度
@property(nonatomic,copy)NSString *maxSpeed;
//停车时长
@property(nonatomic,copy)NSString *stopLong;
//平均速度
@property(nonatomic,copy)NSString *avgSpeed;
//里程
@property(nonatomic,copy)NSString *mile;
//定位数量
@property(nonatomic,copy)NSString *gpsSize;

@end

NS_ASSUME_NONNULL_END
