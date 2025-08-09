//
//  AWHBPBInformationListView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/6/4.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBInformationListView : UIView

@property(nonatomic,copy)AWHBBCarModel *model;
/**
 刷新信息列表
 */
- (void)refreshInformation;

@end

NS_ASSUME_NONNULL_END
