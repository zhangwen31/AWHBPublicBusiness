//
//  AWHBPBSurroundingVehiclesModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/5/3.
//

#import <Foundation/Foundation.h>
#import <AWHBPublicBusiness/AWHBPBDriverInfoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSurroundingVehiclesModel : NSObject

/// ACC状态时间 当前[开] 今日开:0秒
@property (nonatomic, copy) NSString *accTime;

/// 详细地址
@property (nonatomic, copy) NSString *addr;

/// 百度坐标 纬度
@property (nonatomic, copy) NSString *blat;

/// 百度坐标 经度
@property (nonatomic, copy) NSString *blng;

/// 车辆ID
@property (nonatomic, copy) NSString *carId;

/// 车辆名称
@property (nonatomic, copy) NSString *carName;

/// 车牌号
@property (nonatomic, copy) NSString *carPlate;

/// 距离
@property (nonatomic, copy) NSString *distance;

/// 方向角度
@property (nonatomic, copy) NSString *drct;

/// 方向中文 正北
@property (nonatomic, copy) NSString *drctCn;

/// 驾驶员姓名
@property (nonatomic, copy) NSString *driverName;

/// 驾驶员电话
@property (nonatomic, copy) NSString *driverPhone;

/// 驾驶员标记
@property (nonatomic, copy) NSString *driverSign;

/// 驾驶员标记电话
@property (nonatomic, copy) NSString *driverSignPhone;

/// 高德坐标 纬度
@property (nonatomic, copy) NSString *glat;

/// 高德坐标 经度
@property (nonatomic, copy) NSString *glng;

/// 图标链接
@property (nonatomic, copy) NSString *iconLink;

/// GPS原始坐标 纬度
@property (nonatomic, copy) NSString *lat;

/// GPS原始坐标 经度
@property (nonatomic, copy) NSString *lng;

/// 行驶停止时间
@property (nonatomic, copy) NSString *runStopTime;

/// 速度
@property (nonatomic, copy)NSString *speed;

/// 车辆状态  3=离线
@property (nonatomic, copy)NSString *state;

/// 状态中文 离线
@property (nonatomic, copy) NSString *stateCn;

/// 定位时间
@property (nonatomic, copy) NSString *time;

@property (nonatomic, assign) CGFloat mi;

/**
 * 联系电话信息
 */
@property(nonatomic, strong) NSArray<AWHBPBDriverInfoModel *> *driverInfo;

/// 设置电话信息
- (void)setupDriverInfo;

@end

NS_ASSUME_NONNULL_END
