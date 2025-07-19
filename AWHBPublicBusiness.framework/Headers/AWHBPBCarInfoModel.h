//
//  AWHBPBCarInfoModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/18.
//

#import <Foundation/Foundation.h>
#import <AWHBPublicBusiness/AWHBPBDriverInfoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCarInfoModel : NSObject
/**
 * 车辆名称
 */
@property(nonatomic, strong) NSString *carName;
/**
 * 说明
 */
@property(nonatomic, strong) NSString *des;
/**
 * 车主姓名
 */
@property(nonatomic, strong) NSString *owner;
/**
 * 车主电话
 */
@property(nonatomic, strong) NSString *ownerPhone;
/**
 * 车牌颜色代码
 */
@property(nonatomic, strong) NSString *plateColorCode;
/**
 * 车辆ID
 */
@property(nonatomic, strong) NSString *carId;
/**
 * 车牌颜色
 */
@property(nonatomic, strong) NSString *plateColor;
/**
 * 车牌号码
 */
@property(nonatomic, strong) NSString *carPlate;
/**
 * 图标链接
 */
@property(nonatomic, strong) NSString *iconLink;
/**
 * 车对名称
 */
@property(nonatomic, strong) NSString *teamName;
/**
 * 视频通道
 */
@property(nonatomic, strong) NSString *videos;
/**
 * 车队ID
 */
@property(nonatomic, strong) NSString *teamId;
/**
 * 车辆照片信息 {车辆照片的id:车辆照片完整路径}
 */
@property(nonatomic, strong) NSDictionary *carPicMap;
/**
 * 终端照片信息 {终端照片的id:终端照片完整路径}
 */
@property(nonatomic, strong) NSDictionary *tmnPicMap;
/**
 * 视频终端 终端照片信息 {终端照片的id:终端照片完整路径}
 */
@property(nonatomic, strong) NSDictionary *videoTmnPicMap;
/**
 * 主动安全 终端照片信息 {终端照片的id:终端照片完整路径}
 */
@property(nonatomic, strong) NSDictionary *adasTmnPicMap;
/**
 *
 */
@property(nonatomic, strong) NSArray<AWHBPBDriverInfoModel *> *driverInfo;
/**
 * 终端服务到期
 */
@property(nonatomic, strong) NSString *expirTime;
/**
 * 终端厂商
 */
@property(nonatomic, strong) NSString *makerModel;
/**
 * 车辆服务到期
 */
@property(nonatomic, strong) NSString *serveEDate;
/**
 * 车辆服务开始
 */
@property(nonatomic, strong) NSString *serveSDate;
/**
 *
 */
@property(nonatomic, strong) NSString *sim;
/**
 * 卡套餐
 */
@property(nonatomic, strong) NSString *simMeal;
/**
 * 卡类型
 */
@property(nonatomic, strong) NSString *simType;
/**
 * 终端型号
 */
@property(nonatomic, strong) NSString *type;
/**
 *
 */
@property(nonatomic, strong) NSString *tmnKey;
/**
 *
 */
@property(nonatomic, strong) NSString *tmnNo;
/**
 * 视频类型
 */
@property(nonatomic, strong) NSString *videoType;
/**
 * 定位终端
 */
@property(nonatomic, strong) AWHBPBCarInfoModel *mainTmn;
/**
 * 视频终端
 */
@property(nonatomic, strong) AWHBPBCarInfoModel *videoTmn;
/**
 * 主动安全
 */
@property(nonatomic, strong) AWHBPBCarInfoModel *adasTmn;
/**
 * 是否是多终端
 */
@property(nonatomic, assign) BOOL isMultiTerminal;


@end

NS_ASSUME_NONNULL_END
