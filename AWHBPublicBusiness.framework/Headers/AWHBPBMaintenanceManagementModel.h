//
//  AWHBPBMaintenanceManagementModel.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMaintenanceManagementModel : NSObject
@property(nonatomic,copy)NSString *auser;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *id;
@property(nonatomic,copy)NSString *plate;
@property(nonatomic,copy)NSString *simCard;
@property(nonatomic,copy)NSString *tickDesc;
@property(nonatomic,copy)NSString *tickName;
@property(nonatomic,copy)NSString *tickPhone;
@property(nonatomic,copy)NSString *tickTime;
@property(nonatomic,copy)NSString *tmnKey;
@property(nonatomic,copy)NSString *tmnNo;
@property(nonatomic,assign)NSInteger mi;
@property(nonatomic,assign)NSInteger index;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSArray *imgs;
@property(nonatomic,copy)NSString *blat;
@property(nonatomic,copy)NSString *blng;
@property(nonatomic,copy)NSString *glat;
@property(nonatomic,copy)NSString *glng;
@property(nonatomic,copy)NSString *lat;
@property(nonatomic,copy)NSString *lng;
@property(nonatomic,assign)BOOL isSelect;
@end

NS_ASSUME_NONNULL_END
