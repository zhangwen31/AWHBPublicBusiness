//
//  AWHBPBTerminalBindCarModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTerminalBindCarModel : NSObject

/// 车辆ID
@property (nonatomic, strong) NSString *carId;
/// 车牌号码
@property (nonatomic, strong) NSString *carPlate;
/// 车牌名称
@property (nonatomic, strong) NSString *carName;

@end

NS_ASSUME_NONNULL_END
