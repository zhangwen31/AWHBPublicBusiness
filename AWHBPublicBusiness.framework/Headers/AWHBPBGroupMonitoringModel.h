//
//  AWHBPBGroupMonitoringModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/1/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBGroupMonitoringModel : NSObject

/// 分组名称
@property (nonatomic, copy) NSString *groupName;

/// 总数
@property (nonatomic, assign) NSInteger total;

/// 在线
@property (nonatomic, assign) NSInteger online;
/// 离线
@property (nonatomic, assign) NSInteger offline;
/// 车辆id数组
@property (nonatomic, strong) NSArray<NSString *> *carIds;

@property (nonatomic, assign) BOOL isSelect;

@end

NS_ASSUME_NONNULL_END
