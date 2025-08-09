//
//  AWHBPBCustomAreaSelectView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/23.
//自定义区域

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCustomAreaSelectView : UIView

//自定义区域数据
@property (nonatomic, strong) NSMutableArray<AWHBPBCustomDataModel *> *customDataArray;

@property (nonatomic, copy) void (^SelectAreaBlock)(NSMutableArray<AWHBPBCustomDataModel *> *customDataArray);

- (void)checkAreaSelect;
//重置
- (void)resetting;

@end

NS_ASSUME_NONNULL_END
