//
//  AWHBPBLoginRouter.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2022/10/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//调整对应功能界面类型
typedef NS_ENUM(NSInteger, AWHBPBLoginRouterType) {
    AWHBPBLoginRouterTypeMonitoringSingle                   = 0,    // 单车监控
    AWHBPBLoginRouterTypeMonitoringMap                      = 1,    // 多车监控
    AWHBPBLoginRouterTypeListMonitoring                     = 2,    // 列表监控
    AWHBPBLoginRouterTypeMinimalistMonitoring               = 3,    // 极简监控
    AWHBPBLoginRouterTypeHistoryPath                        = 4,    // 历史轨迹
    AWHBPBLoginRouterTypeRealtimeAlarm                      = 5,    // 实时报警
    AWHBPBLoginRouterTypeRealTimeVideo                      = 6,    // 实时视频
    AWHBPBLoginRouterTypeHistoryVideo                       = 7,    // 录像回放
    AWHBPBLoginRouterTypeQueryMileage                       = 8,    // 里程查询
    AWHBPBLoginRouterTypeAlarmQuery                         = 9,    // 安全查询
    AWHBPBLoginRouterTypeQueryPhotos                        = 10,    // 照片查询
    AWHBPBLoginRouterTypeParkingStatistics                  = 11,    // 停车统计
    AWHBPBLoginRouterTypeOilQuantityStatistics              = 12,    // 油量统计
    AWHBPBLoginRouterTypeWaterLevelStatistics               = 13,    // 水位统计
    AWHBPBLoginRouterTypeTemperatureStatistics              = 14,    // 温度统计
    AWHBPBLoginRouterTypeHumidityStatistics                 = 15,    // 湿度统计
    AWHBPBLoginRouterTypeLoadStatistics                     = 16,    // 载重统计
    AWHBPBLoginRouterTypeNewVehicles                        = 17,    // 新增车辆
    AWHBPBLoginRouterTypeBikeTracking                       = 18,    // 单车跟踪
    AWHBPBLoginRouterTypeRecentOilConsumption               = 19,    // 近期油耗
};


@interface AWHBPBLoginRouter : NSObject

/**
 * 设置必须参数用于登录 默认http
 * @param ip ip地址 必传
 * @param port 端口号 必传
 * @param userId 如果是用户登录输入用户名  如果是车辆登录输入车牌号 必传
 * @param password 密码 必传
 * @param plateColorId 车辆颜色id，不必传，一般车辆登录的时候传
 */
+ (void)setupLoginIp:(NSString *)ip
                port:(NSString *)port
              userId:(NSString *)userId
            password:(NSString *)password
        plateColorId:(NSString *)plateColorId;

/**
 * 设置必须参数用于登录 默认http
 * @param ip ip地址 必传
 * @param port 端口号 必传
 * @param isHttps 是否是https请求
 * @param userId 如果是用户登录输入用户名  如果是车辆登录输入车牌号 必传
 * @param password 密码 必传
 * @param plateColorId 车辆颜色id，不必传，一般车辆登录的时候传
 */
+ (void)setupLoginIp:(NSString *)ip
                port:(NSString *)port
             isHttps:(BOOL)isHttps
              userId:(NSString *)userId
            password:(NSString *)password
        plateColorId:(NSString *)plateColorId;
/**
 * 用户登录 调用前需要设置对应的参数 setupLoginType:ip:port:userId:password:
 */
+ (void)userLoginHudView:(UIView *)hudView callback:(void (^)(NSDictionary *requestDic))callBack;

/**
 * 车辆登录 必须基础监控模块SDK AWHMonitoringModule 调用前需要设置对应的参数 setupLoginType:ip:port:userId:password:
 */
+ (void)carLoginHudView:(UIView *)hudView callback:(void (^)(NSDictionary *requestDic))callBack;

//车牌颜色
+ (void)plateColorRequest:(void (^)(NSArray *plateColorArr))callBack;
/**
 * 退出登录
 */
+ (void)logout:(void (^)(NSDictionary *requestDic))callBack;
/**
 * 调整对应界面
 * @param routerType 需要跳转的界面
 */
+ (void)goToViewController:(AWHBPBLoginRouterType)routerType;

@end

NS_ASSUME_NONNULL_END
