//
//  AWHBPBAdministrativeAreaSelectView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/23.
//行政区域

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBAdministrativeDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAdministrativeAreaSelectView : UIView

@property (nonatomic, strong) NSMutableArray *administrativeDataArray;

@property (nonatomic, copy) void (^SelectAreaBlock)(NSMutableArray<AWHBPBAdministrativeDataModel *> *administrativeDataArray);

- (void)checkAreaSelect;

- (void)refreshData;
//重置
- (void)resetting;

@end

NS_ASSUME_NONNULL_END
