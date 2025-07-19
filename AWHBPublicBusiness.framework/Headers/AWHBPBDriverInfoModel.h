//
//  AWHBPBDriverInfoModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDriverInfoModel : NSObject
/**
 * 驾驶员
 */
@property (nonatomic, strong) NSString *driverName;
/**
 * 电话
 */
@property (nonatomic, strong) NSString *driverPhone;

@end

NS_ASSUME_NONNULL_END
