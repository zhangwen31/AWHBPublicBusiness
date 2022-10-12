//
//  AWHBPBSingleCarHistoryRecordView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSelectCarModelBlock)(AWHBBCarModel *model);
@interface AWHBPBSingleCarHistoryRecordView : UIView
@property(nonatomic,copy)AWHBPBSelectCarModelBlock SelectCarModelBlock;
@end

NS_ASSUME_NONNULL_END
