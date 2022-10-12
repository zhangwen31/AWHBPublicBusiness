//
//  AWHBPBAlarmDataModel.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAlarmDataModel : NSObject
@property(nonatomic,copy)NSString *alarmType;
@property(nonatomic,copy)NSString *startTime;
@property(nonatomic,copy)NSString *stop_long;
@property(nonatomic,copy)NSString *solveTime;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *glng;//google经度
@property(nonatomic,copy)NSString *glat;//google纬度
-(id)initWithDictionary:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
