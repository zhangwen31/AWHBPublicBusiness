//
//  AWHBPBRegionShapeModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/10.
//

#import <Foundation/Foundation.h>
#import "AWHBPBRegionCoordinateModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBRegionShapeModel : NSObject

@property(nonatomic,copy)NSString *regionId;
@property(nonatomic,copy)NSString *name;
@property(nonatomic,copy)NSString *pid;
@property(nonatomic,strong)NSArray<AWHBPBRegionCoordinateModel *> *points;
@property(nonatomic,strong)NSString *shape;
@property(nonatomic,strong)NSString *type;
@property(nonatomic,assign)NSInteger radius;

@end

NS_ASSUME_NONNULL_END
