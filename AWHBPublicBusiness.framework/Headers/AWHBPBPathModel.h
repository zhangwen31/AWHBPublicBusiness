//
//  AWHBPBPathModel.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPathModel : NSObject
@property(nonatomic,copy)NSString *glng;//google经度
@property(nonatomic,copy)NSString *glat;//google纬度
@property(nonatomic,copy)NSString *lng;//经度
@property(nonatomic,copy)NSString *lat;//纬度
@property(nonatomic,copy)NSString *blng;//百度经度
@property(nonatomic,copy)NSString *blat;//百度纬度
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *speed;
//-(id)initWithDictionary:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
