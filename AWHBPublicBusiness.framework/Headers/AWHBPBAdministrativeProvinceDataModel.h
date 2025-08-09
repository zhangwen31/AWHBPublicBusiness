//
//  AWHBPBAdministrativeProvinceDataModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/26.
//

#import <Foundation/Foundation.h>
#import <AWHBPublicBusiness/AWHBPBAdministrativeCityDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAdministrativeProvinceDataModel : NSObject
//
@property(nonatomic,copy)NSString *code;
//
@property(nonatomic,copy)NSString *name;

@property(nonatomic,copy)NSArray<AWHBPBAdministrativeCityDataModel *> *children;

@property(nonatomic,assign)BOOL isSelect;

@property(nonatomic,assign)CGFloat cellHeight;

@end

NS_ASSUME_NONNULL_END
