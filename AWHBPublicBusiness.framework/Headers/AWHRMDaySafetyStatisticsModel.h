//
//  AWHRMDaySafetyStatisticsModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMDaySafetyStatisticsModel : NSObject

@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *fullLink;
@property(nonatomic,copy)NSString *glat;
@property(nonatomic,copy)NSString *glng;
@property(nonatomic,copy)NSString *lat;
@property(nonatomic,copy)NSString *lng;
@property(nonatomic,copy)NSString *name;
@property(nonatomic,copy)NSString *link;
@property(nonatomic,copy)NSString *reason;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *teamName;
/// 是否已经格式转换
@property(nonatomic,assign)BOOL isChange;

@end

NS_ASSUME_NONNULL_END
