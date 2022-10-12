//
//  AWHBPBCustomCalloutNewView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/5/28.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBReturnBtnTitleBlock)(NSString *title, AWHBBCarModel *carModel);
@interface AWHBPBCustomCalloutNewView : UIView

@property(nonatomic,copy)AWHBBCarModel *model;
//隐藏轨迹
@property (nonatomic, assign) BOOL isHiddenLocus;
//隐藏跟踪
@property (nonatomic, assign) BOOL isHiddenTrack;
@property (nonatomic, assign) BOOL isPhoto;
@property(nonatomic,copy)AWHBPBReturnBtnTitleBlock ReturnBtnTitleBlock;
/**
 刷新信息列表
 */
- (void)refreshInformation;

@end

NS_ASSUME_NONNULL_END
