//
//  AWHBPBPhotoQueryModel.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPhotoQueryModel : NSObject
//原因
@property(nonatomic,copy)NSString *reason;
//经度
@property(nonatomic,copy)NSString *lng;
//谷歌纬度
@property(nonatomic,copy)NSString *glat;
//通道
@property(nonatomic,copy)NSString *channel;
//照片链接
@property(nonatomic,copy)NSString *link;
//百度经度
@property(nonatomic,copy)NSString *blng;
//谷歌经度
@property(nonatomic,copy)NSString *glng;
//速度
@property(nonatomic,copy)NSString *speed;
//百度纬度
@property(nonatomic,copy)NSString *blat;
//完整链接
@property(nonatomic,copy)NSString *fullLink;
//时间
@property(nonatomic,copy)NSString *time;
//地址
@property(nonatomic,copy)NSString *addr;
//纬度
@property(nonatomic,copy)NSString *lat;


@end

NS_ASSUME_NONNULL_END
