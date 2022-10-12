//
//  AWHBPBSelectCarView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSelectCarBlock)(NSString *string,NSMutableArray *carIdArray,NSMutableArray *allCarArr);
//单个车选择的时候返回model
typedef void(^AWHBPBSelectCarModelBlock)(AWHBBCarModel *model);
@interface AWHBPBSelectCarView : UIView
@property(nonatomic,assign)BOOL isSingeCar;
@property(nonatomic,copy)AWHBPBSelectCarBlock SelectCarBlock;
@property(nonatomic,copy)AWHBPBSelectCarModelBlock SelectCarModelBlock;
@end

NS_ASSUME_NONNULL_END
