//
//  AWHBPBHistoryStopCarView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/1.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBStopDataModel.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHBPublicBusiness/AWHVPCarVideoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBHistoryStopCarView : UIView

@property(nonatomic,strong)NSMutableArray *stopDataArray;
@property(nonatomic,strong)AWHBBCarModel *model;
/// 视频通道
@property(nonatomic,strong)NSArray<AWHVPCarVideoModel *> *videoArray;

@property(nonatomic,copy)void (^selectCurrentPageBlock)(NSInteger num);

@property(nonatomic,copy) void (^videoClickBlock)(AWHBPBStopDataModel *model, AWHBBCarModel *carModel, NSArray<AWHVPCarVideoModel *> *videoArray);

- (void)refreshDataHeight;

@end

NS_ASSUME_NONNULL_END
