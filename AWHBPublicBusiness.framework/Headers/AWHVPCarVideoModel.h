//
//  AWHVPCarVideoModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPCarVideoModel : NSObject
/**
 * 通道号
 */
@property (nonatomic, strong) NSString *num;
/**
 * 通道名称
 */
@property (nonatomic, strong) NSString *name;
/**
 * 云台
 */
@property (nonatomic, strong) NSString *panTilt;

- (instancetype)initWithVideoStr:(NSString *)videoStr;

@end

NS_ASSUME_NONNULL_END
